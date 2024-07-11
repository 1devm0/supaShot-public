#include "./engine.h"
#include <stdlib.h>
#include <string.h>

// [1280, 720] or [960, 600]
#define S_W 960
#define S_H 600

#define T_W (480) 
#define T_H (300) 

// 3 or 4
#define MAX_PLAYER_ACC 4

#define PLAYER_STATE_NUMBER 2
#define DEFAULT_PLAYER_STATE 0
gfx_anim_data_t player_states[PLAYER_STATE_NUMBER] = 
{
    { 0, 2, 240, 0, "res/player/idle/", 1, 0 },
    { 1, 1, 120, 0, "res/player/idle/", 1, 0 }
    // duration is in frames, 1 frame lassts for 120 frfames
}; 

// fix weird gaps betwen squares
const uv2_t TILE_SIZE = { 22, 22 };
const f32 PLAYER_SIZE_MULTIPLIER = 1.35;
// const f32 PLAYER_SIZE_MULTIPLIER = 1.75; // 720p

const uv2_t KNOCKBACK_SCALE = { 7*1.1, 8*1.3 };

gfx_program_t p;
uprof_t profiler = {0};

gfx_anim_img_t player;

u08 running = 1;
// possible issue with renderer size
uphys_obj_t player_obj;
f32 player_air_time = 0;

char * PHYS_TILES = "12345";

SDL_Texture * img;
SDL_Texture * bg_bar;

SDL_Texture * enemy;

f32 player_rot = 0.0f;

gfx_particle_t * particles;

gfx_particle_t * attk_gun; 


SDL_PixelFormat * pixel_format;

#define LVL_NUM 2 
gfx_lvl_t * lvls;
gfx_lvl_t l;
u32 curr_lvl = 0;

uv2_t player_pos[LVL_NUM];

u08 SPARK_OPTION = 0;

#define BG_SQUARE_NUM 50

SDL_Texture * bg_square_img;
SDL_Texture * bg_square_shadow;
uphys_obj_t bg_squares[BG_SQUARE_NUM];
f32 rotations[BG_SQUARE_NUM];
f32 parallax_depth[BG_SQUARE_NUM];


SDL_Texture * circle;
uphys_obj_t circle_o;

uphys_obj_t move_left;
uphys_obj_t move_jump;
uphys_obj_t move_right;

void init_game() {
    // get refresh rate and fps
    u32 format = gfx_init((gfx_init_info_t) { "huh", T_W, T_H, S_W, S_H, SDL_WINDOW_RESIZABLE, SDL_RENDERER_ACCELERATED, -1 }, &p);
    
    gfx_init_animated_img(&player, player_states, PLAYER_STATE_NUMBER, DEFAULT_PLAYER_STATE, p.renderer);
    // collision is broken, it uses specific vallues for acceleration
    uphys_obj_mk(&player_obj, 
                     uv2_mk(5, 5), uv2_mk(0, 0), 
                  uv2_mk(17, 17));
    // SDL_SetTextureAlphaMod(p.render_texture, 100);

    // shouldnt it work with T_W and T_H, yk what who cares 💀

    // img
    img = gfx_load_img("res/tile.png", p.renderer);
    bg_bar = gfx_load_img("res/tile.png", p.renderer);

    
    enemy = gfx_load_img("res/enemy.png", p.renderer);
    l.enemy_img = enemy;


    SDL_SetTextureColorMod(bg_bar, 100, 100, 100);
    SDL_SetTextureAlphaMod(bg_bar, 40);

    pixel_format = gfx_get_default_img_format("res/tile.png");

    SDL_Surface * i; 


    // filledPolygonColor(, const Sint16 *vx, const Sint16 *vy, int n, Uint32 color);
    particles = calloc(120, sizeof(gfx_particle_t));

    attk_gun = calloc(10, sizeof(gfx_particle_t));

    printf("Game Initialized\n");

    lvls = calloc(LVL_NUM, sizeof(gfx_lvl_t));
    SDL_Surface ** imgs = calloc(3, sizeof(SDL_Surface*));
    // gfx_load_lvl_imgs(imgs, LVL_NUM, "res/maps/"); 

    imgs[0] = gfx_load_surf("res/maps/0.png");
    imgs[1] = gfx_load_surf("res/maps/1.png");

    printf("reached\n"); 
    for (u32 u = 0; u < LVL_NUM; u++) {
        player_pos[u] = gfx_load_lvl(&lvls[u], PHYS_TILES, strlen(PHYS_TILES), TILE_SIZE, uv2_mk(T_W, T_H), imgs[u]);
        lvls[u].enemy_img = gfx_load_img("res/enemy.png", p.renderer);
    }
    player_obj.pos = player_pos[0];
    l = lvls[0];
    // for 
    for (u32 u = 0; u < 3; u++) {
        printf("%f %F\n", l.enemies[u].pos.x, l.enemies[u].pos.y);
    }

    printf("%d\n", l.enemy_num);

    circle = gfx_load_img("res/circle_three.png", p.renderer);


    bg_square_img = gfx_load_img("res/squ.png", p.renderer);
    SDL_SetTextureBlendMode(bg_square_img, SDL_BLENDMODE_BLEND);
    SDL_SetTextureAlphaMod(bg_square_img, 128);

    bg_square_shadow = gfx_load_img("res/shadow.png", p.renderer);
    SDL_SetTextureBlendMode(bg_square_shadow, SDL_BLENDMODE_BLEND);
    SDL_SetTextureAlphaMod(bg_square_img, 200);

    for (u32 u = 0; u < BG_SQUARE_NUM; u++) {
        u32 size = urandnum_gen(10, 30);    
        uphys_obj_mk(&bg_squares[u], 
                uv2_mk(urandnum_gen(0, T_W), urandnum_gen(-T_H, T_H)), 
                uv2_mk(0, urandnum_gen(500, 1000)), uv2_mk(size, size));
        rotations[u] = urandnum_gen(0, 90);
        parallax_depth[u] = urandnum_gen(1, 100) / 100;
    }

    uphys_obj_mk(&move_left, uv2_mk(0 + 50, T_H - 80), uv2_mk(0, 0), uv2_mk(40, 20));
    uphys_obj_mk(&move_right, uv2_mk(0 + 50 + 40 + 10, T_H - 80), uv2_mk(0, 0), uv2_mk(40, 20));
    uphys_obj_mk(&move_jump, uv2_mk(0 + 50 + 25, T_H - 100), uv2_mk(0, 0), uv2_mk(40, 20));
}
/*
        self.squares_background = []
        for i in range(0, 50):
            self.size = random.randint(10, 30)
            self.surf = pg.Surface((self.size, self.size), pg.SRCALPHA)
            self.surf.fill((0, 100, 255, random.randint(30, 128)))
            pg.draw.rect(self.surf, (255, 255, 255, random.randint(0, 128)), pg.Rect(0, 0, self.size, self.size), width=1)
            self.surf = pg.transform.rotate(self.surf, random.randint(-90, -10))
            self.squares_background.append([self.surf, [random.randint(0, DISPLAY_SIZE[0]), random.randint(-DISPLAY_SIZE[1], DISPLAY_SIZE[1])], random.randint(5, 20)])
        for i in range(0, len(self.squares_background) - 1):
            self.display.blit(self.squares_background[i][0], self.squares_background[i][1])
            self.squares_background[i][1][1] += 1
            if self.squares_background[i][1][1] > DISPLAY_SIZE[1]:
                self.squares_background[i][1][1] = -DISPLAY_SIZE[1] + 10
*/




// make special struct for other data
//  in downloads folder and in ablast folder
u32 sparks_all_destroyed = 120;
u08 tile_hit = 0;
u08 particle_gen_stop = 0;
u08 change_dt = 0;
uv2_t stored_spawn_position = {0};
f32 screenshake = 0;

uv2_t stored_pos;

char window_caption[256] = {0};
char event_profiled_time[12] = {0}; 
char update_profiled_time[12] = {0}; 
char render_profiled_time[12] = {0}; 

f64 event_time = 0.0f;
f64 update_time = 0.0f;
f64 render_time = 0.0f;


f32 frame_count = 0;
u08 bullet_shot = 0;

uphys_obj_t spark = {0};
u08 shifting_focus = 0;

uv2_t stored_scroll = {0};

u08 update_physics = 1;

uv2_t center_of_player;

u08 enemy_dead = 0;
f32 rad = 0;
uv2_t particle_spwn_pos = {0};

f32 normal_dt = 1.0f;
u32 all_gun_sparks_destroyed = 0; 
uphys_obj_t mouse;

void game_loop() {
    uprof_start(&profiler);
    { // Event handling
        gfx_get_events(&p);

        i32 x_i, y_i;
        f32 x, y;
        switch (p.event.type) {
            case SDL_QUIT:
                running = 0;
                break;
            case SDL_MOUSEBUTTONDOWN:
                x_i = 0;
                y_i = 0;
                SDL_GetMouseState(&x_i, &y_i);
                i32 w_w, w_h;
                SDL_GetWindowSize(p.window, &w_w, &w_h);
                x = (f32) x_i / w_w * T_W;
                y = (f32) y_i / w_h * T_H;

                u08 no_colls = 0;
                uphys_obj_mk(&mouse, uv2_mk(x, y), uv2_mk(0, 0), uv2_mk(20, 20));
                /*if (uphys_obj_coll_detect(mouse, move_left)) {
                    player_obj.move_l = 1;
                    player_obj.move_r = 0;
                    no_colls = 1;
                } else {
                    player_obj.move_l = 0;
                }

                if (uphys_obj_coll_detect(mouse, move_right)) {
                    player_obj.move_r = 1;
                    player_obj.move_l = 0;
                    no_colls = 1;
                } else {
                    player_obj.move_r = 0;
                }

                if (uphys_obj_coll_detect(mouse, move_jump)) {
                    player_obj.vel.y = -7;
                    no_colls = 1;
                } */ 
                
                if (!no_colls) {
                    // uv2_t normalized_player_pos = uv2_mk((f32) w_w / 2, (f32) w_h / 2);
                    uv2_t normalized_player_pos = uv2_mk(center_of_player.x - player_obj.cam_true_scroll.x, center_of_player.y - player_obj.cam_true_scroll.y);
                    // uv2_t normalized_player_pos = {  T_W / 2, T_H / 2 };
                    // printf("%f %f\n", normalized_player_pos.x, normalized_player_pos.y);
                    
                    f32 xdiff = x - normalized_player_pos.x;
                    f32 ydiff = y - normalized_player_pos.y;
                    f32 dist = sqrt( ydiff * ydiff + xdiff * xdiff );
                    f32 angle = atan2(ydiff, xdiff);

                    if (!bullet_shot && p.event.button.button == SDL_BUTTON_LEFT)  {
                        f32 speed = 0.0f;
                        update_physics = 0;
                        for (u32 u = 0; u < 10; u++) {
                            // adding is quite small 
                            speed = (f32) urandnum_gen(700, 1000) / 75;
                            uv2_t player_center = uv2_mk(player_obj.pos.x + player_obj.size.x / 2, player_obj.pos.y + player_obj.size.y / 2);
                            gfx_mk_particle(&attk_gun[u], player_center, angle, speed);                   
                        }
                        // printf("%f\n", dist);
                        player_obj.vel.x = -cos(angle) * KNOCKBACK_SCALE.x;
                        player_obj.vel.y = -sin(angle) * KNOCKBACK_SCALE.y;
                        bullet_shot = 1;
                    }
                }
                break;

            default: break;
        }
        if (p.keys[SDL_SCANCODE_E]) {
            gfx_set_animated_img_state(&player, 0);
        }
        if (p.keys[SDL_SCANCODE_H]) p.max_fps = 60;
        if (p.keys[SDL_SCANCODE_N]) p.max_fps = 165;

        if (player_obj.acc.x > MAX_PLAYER_ACC) player_obj.acc.x = MAX_PLAYER_ACC;
        if (player_obj.coll_l + player_obj.coll_r != 0) player_obj.acc.x = 0;

        // printf("%lld %f %f\n", profiler.mb_mem_used, profiler.ms_elapsed, player_obj.acc.x);
        // printf("%f\n", p.dt * 5);
        if (p.keys[SDL_SCANCODE_A]) {
            if (player_obj.move_r == 1) player_obj.acc.x = -player_obj.acc.x; // resetting acc
            player_obj.move_l = 1;
            player_obj.move_r = 0;
            player_obj.acc.x += 0.2 * p.dt;
            player_rot = -min(20.0f, fabs(player_rot) + 0.1);
        } else if (p.keys[SDL_SCANCODE_D]) {
            if (player_obj.move_l == 1) player_obj.acc.x = -player_obj.acc.x;
            player_obj.move_r = 1;
            player_obj.move_l = 0;
            player_obj.acc.x += 0.2 * p.dt;
            player_rot = min(20.0f, player_rot + 0.1);
        } else {
            player_rot = fabsf(player_rot) - 1;
            if (player_obj.acc.x > 0) {
                player_obj.acc.x -= 0.4 * p.dt;
            } else {
                player_obj.move_r = 0;
                player_obj.move_l = 0;
                if (player_obj.acc.x < 0) player_obj.acc.x = 0;
            }

        } // fix collision for when pressing right arrow and down arow
        if (p.keys[SDL_SCANCODE_Q]) running = 0; 
        if (p.keys[SDL_SCANCODE_K]) SPARK_OPTION = !SPARK_OPTION;

        if (player_obj.move_r == 1) {
            player_obj.flip = 0;
        }
        if (player_obj.move_l == 1) {
            player_obj.flip = 1;
        }

        if ((p.keys[SDL_SCANCODE_W] || p.keys[SDL_SCANCODE_SPACE]) && player_air_time < p.dt * 2 && player_obj.coll_t != 1) {
            uv2_t bottom = uv2_mk(player_obj.pos.x + player_obj.size.x / 2, player_obj.pos.y + player_obj.size.y / 2);
            player_obj.vel.y = -7;
        } 
        if ((p.keys[SDL_SCANCODE_W] || p.keys[SDL_SCANCODE_SPACE]) && (player_obj.coll_l || player_obj.coll_r) && player_air_time > p.dt * 4) {
            player_obj.acc.x -= 1;
            player_obj.vel.y = -7;
            uv2_t bottom = uv2_mk(player_obj.pos.x + player_obj.size.x / 2, player_obj.pos.y + player_obj.size.y / 2);
        } 
    }
    uprof_end(&profiler);
    event_time = profiler.ms_elapsed;

    uprof_start(&profiler);
    { // Update
        // open screens: current, python, gsdl
        if (player_obj.move_l + player_obj.move_r != 0 && player.current_state_enum == 0) {
            gfx_set_animated_img_state(&player, 0);
        }  
        if (player_obj.move_l + player_obj.move_r == 0 && player.current_state_enum != 0) {
            gfx_set_animated_img_state(&player, 0); 
        }  
        
        // fix wall jump bug with being on floor
        if (player_obj.coll_b) {
            player_air_time = 0;
        } else {
            player_air_time += p.dt; 
        }
        if (player_air_time > p.dt * 3) {
            gfx_set_animated_img_state(&player, 1);
        }

        f32 centerx = player_obj.pos.x + player_obj.size.x / 2;
        f32 centery = player_obj.pos.y + player_obj.size.y / 2;

        player_obj.cam_true_scroll.x += (centerx - player_obj.cam_true_scroll.x - T_W / 2) * p.dt * 0.1;
        player_obj.cam_true_scroll.y += (centery - player_obj.cam_true_scroll.y - T_H / 2) * p.dt * 0.1;
        if (bullet_shot && attk_gun[0].speed) {
            player_obj.cam_true_scroll.x += (attk_gun[0].pos.x - player_obj.cam_true_scroll.x - T_W / 2) * p.dt;
            player_obj.cam_true_scroll.y += (attk_gun[0].pos.y - player_obj.cam_true_scroll.y - T_H / 2) * p.dt;
        } 

        if (player_obj.pos.y > l.tile_size.y * l.size.y) {
            player_obj.pos.y = 0;
        } 
        //printf("%f\n", p.ms_passed);


        all_gun_sparks_destroyed = 0; 
        for (u32 u = 0; u < 10; u++) {
            gfx_update_particle(&attk_gun[u], player_obj.cam_true_scroll, 1, 0.3, p.dt, SPARK_OPTION, 0.25); // change 0.25 to better
            gfx_get_tiles_around(&l, attk_gun[u].pos, uv2_mk(5, 5));
            if (attk_gun[u].speed > 0) {
                uphys_obj_t spark;
                uphys_obj_mk(&spark, attk_gun[u].pos, uv2_mk(0, 0), uv2_mk(2, 2));
                for (u32 u = 0; u < l.current_tile; u++) {
                    u08 collision = uphys_obj_coll_detect(spark, l.neighbors[u]);
                    if (collision) {
                        tile_hit = 1;
                        gfx_del_tiles_around(&l, l.neighbors[u].pos);
                        stored_spawn_position = spark.pos;
                        memset(attk_gun, 0, 10 * sizeof(gfx_particle_t));
                        // attk_gun[u].speed = 0;
                        screenshake = 10;
                    }
                }
                for (u32 u = 0; u < l.enemy_num; u++) {
                    u08 collision = uphys_obj_coll_detect(spark, l.enemies[u]);
                    if (collision) {
                        particle_spwn_pos = l.enemies[u].pos;
                        memset(&l.enemies[u], 0, sizeof(uphys_obj_t));
                        enemy_dead = 1;
                        tile_hit = 1;
                        memset(attk_gun, 0, 10 * sizeof(gfx_particle_t));
                        // attk_gun[u].speed = 0;
                        stored_spawn_position = spark.pos;
                        screenshake = 10;
                    }
                }
            }
            if (attk_gun[u].speed <= 0) {
                all_gun_sparks_destroyed++;
            }
        }
         
        if (attk_gun[0].speed <= 0) update_physics = 1;

        if (p.keys[SDL_SCANCODE_J]) {
            tile_hit = 1;
            stored_spawn_position = center_of_player; 
        }

        if (enemy_dead) {
            rad += 20 * p.dt;
        }

        if (rad > 1000) {
            enemy_dead = 0; 
            rad = 0;
        }


        if (tile_hit && particle_gen_stop == 0) { 
            for (u32 u = 0; u < 120; u++) {
                f32 angle = udeg_to_rad(urandnum_gen(0, 360));
                // adding is quite small 
                f32 speed = (f32) urandnum_gen(0, 1000) / 100;
                gfx_mk_particle(&particles[u], stored_spawn_position, angle, speed);
            }
            tile_hit = 0;
            particle_gen_stop = 1;
            change_dt = 1;
        }

        sparks_all_destroyed = 0;

        if (change_dt) {
            p.dt *= 0.4;
        }

        for (u32 u = 0; u < 120; u++) {
            gfx_update_particle(&particles[u], player_obj.cam_true_scroll, 0.75, 0.45, p.dt, SPARK_OPTION, 3);

            if (particles[u].speed <= 0) {
                sparks_all_destroyed++;
            } 
        }

        if (sparks_all_destroyed >= 119) { 
            change_dt = 0;
            particle_gen_stop = 0;
        }

        if (all_gun_sparks_destroyed && particle_gen_stop == 0) {
            if (bullet_shot) shifting_focus = 1;
            bullet_shot = 0;
        }

        gfx_update_animation(&player, p.dt);
        // call update animation before img
        i32 w, h;
        SDL_QueryTexture(player.current, NULL, NULL, &w, &h);
        player_obj.size.x = w * PLAYER_SIZE_MULTIPLIER; 
        player_obj.size.y = h * PLAYER_SIZE_MULTIPLIER;
        
        // Alwawys update player object after setting size
        uv2_t pos = player_obj.pos;
        pos.x -= player_obj.cam_true_scroll.x;
        pos.y -= player_obj.cam_true_scroll.y;

        pos.x = round(pos.x);
        pos.y = round(pos.y);

        // f32 centerx = round((f32) T_W / 2 - player_obj.size.x / 2);
        // f32 centery = round((f32) T_H / 2 - player_obj.size.y / 2);

        center_of_player = (uv2_t) {
            player_obj.pos.x + player_obj.size.x / 2, 
            player_obj.pos.y + player_obj.size.y / 2
        };

        gfx_get_tiles_around(&l, center_of_player, player_obj.size);
    
        if (update_physics) {
            if (player_obj.vel.x != 0) {
                if (player_obj.vel.x > 0) {
                    player_obj.vel.x = fmax(0, player_obj.vel.x - 2 * p.dt); 
                } 

                if (player_obj.vel.x < 0) {
                    player_obj.vel.x = fmin(0, player_obj.vel.x + 2 * p.dt); 
                }
            }
            if (player_obj.vel.y < 0) {
                // player_obj.vel.y 
                player_obj.vel.y += 0.1 * p.dt;
            }

            uphys_obj_update(&player_obj, l.neighbors, l.current_tile, 6, p.dt);
        }
        // printf("%u\n", l.current_tile);

        if (screenshake > 0) {
            player_obj.cam_true_scroll.x += urandnum_gen(-10, 10) * p.dt;
            player_obj.cam_true_scroll.y += urandnum_gen(-10, 10) * p.dt;
            screenshake -= 2 * p.dt;
        } 
        if (screenshake < 0) screenshake = 0;

        for (u32 u = 0; u < BG_SQUARE_NUM; u++) {
            bg_squares[u].pos.y += (bg_squares[u].acc.y / 1500) * p.dt;
            i32 w, h;
            SDL_GetWindowSize(p.window, &w, &h);

            rotations[u] += 0.05 * p.dt;
            if (bg_squares[u].pos.y > h) {
                bg_squares[u].pos.y = -5 - (bg_squares[u].size.y + 5);
            }  
        }

        frame_count += p.dt;
        // 3 seconds have passed
        if (frame_count >= 60) {
            printf("-----------------------------------\n");
            printf("DEBUG DATA: \n "); 
            printf("  MEMORY USED (mb): %d\n", get_mem_used());
            printf("  FRAME TIME (ms): %.4f, DT RATIO: %.4f\n", p.ms_passed, p.dt);
            printf("    EVENT TIME (ms): %.4f\n", event_time);
            printf("    UPDATE TIME (ms): %.4f\n", update_time);
            printf("      PHYSICS LOOKUPS (ms): %.4f\n", timer.ms_elapsed);
            printf("    RENDER TIME (ms): %.4f\n", render_time);
            printf("      RENDER LOOKUPS (ms): %.4f\n", render_timer.ms_elapsed);
            printf("      FINAL TIME (ms): %.4f\n", final_render_time.ms_elapsed);
            printf("-----------------------------------\n");

            ui32_to_str(p.ms_passed, window_caption, 128);
            SDL_SetWindowTitle(p.window, window_caption);

            frame_count = 0;
        }
    }
    uprof_end(&profiler);
    update_time = profiler.ms_elapsed;

    uprof_start(&profiler);
    { // Rendering Code
        gfx_start_render(&p, 54, 54, 54, 255, p.render_texture);

        // gfx_get_tiles_around(&l, player_obj.pos, player_obj.cam_true_scroll, p.renderer);
        //

        for (u32 u = 0; u < BG_SQUARE_NUM; u++) {
            uphys_obj_t tmp = bg_squares[u];

            tmp.pos.x -= 2 * parallax_depth[u];
            tmp.pos.y -= 2 * parallax_depth[u];
            gfx_draw_phys_obj(&tmp, rotations[u], bg_square_shadow, p.renderer, NULL);

            tmp.pos.x += 2;
            tmp.pos.y += 2;
            gfx_draw_phys_obj(&tmp, rotations[u], bg_square_img, p.renderer, NULL);

        }

        // printf("REAHED\n");
        gfx_draw_lvl(&l, p.renderer, NULL, player_obj.cam_true_scroll, uv2_mk(T_W, T_H), img);
        // printf("BROKE\n");


        if (sparks_all_destroyed < 120) {
            for (u32 u = 0; u < 120; u++) {
                // printf("%f %f\n", particles[u].pos.x, particles[u].pos.y);
                if (particles[u].speed > 0) {
                    if (SPARK_OPTION) {
                        gfx_draw_spark_particle(&particles[u], p.renderer, pixel_format, 255, 255, 255, 255); 
                    }
                    i32 num = urandnum_gen(75, 255);
                    gfx_draw_circle(particles[u].offset_pos.x, particles[u].offset_pos.y, particles[u].speed * 0.85, num, num, num, 255, 1, p.renderer);
                }
            }
        }
        if (bullet_shot) {
            for (u32 u = 0; u < 10; u++) {
                if (attk_gun[u].speed > 0) {
                    if (SPARK_OPTION) {
                        gfx_draw_spark_particle(&attk_gun[u], p.renderer, pixel_format, 255, 255, 255, 255);
                    }
                    gfx_draw_circle(attk_gun[u].offset_pos.x, attk_gun[u].offset_pos.y, attk_gun[u].speed * 0.25, 125, 125, 125, 255, 1, p.renderer);
                }
            }
        }

        if (rad) {
            uphys_obj_mk(&circle_o, uv2_mk(particle_spwn_pos.x - rad, particle_spwn_pos.y - rad), uv2_mk(0, 0), uv2_mk(rad * 2, rad * 2));
            gfx_draw_phys_obj(&circle_o, 0, circle, p.renderer, &player_obj.cam_true_scroll);
            uphys_obj_mk(&circle_o, uv2_mk(particle_spwn_pos.x - rad, particle_spwn_pos.y - rad), uv2_mk(0, 0), uv2_mk(rad * 2 - 1, rad * 2 - 1));
            gfx_draw_phys_obj(&circle_o, 0, circle, p.renderer, &player_obj.cam_true_scroll);
            uphys_obj_mk(&circle_o, uv2_mk(particle_spwn_pos.x - rad, particle_spwn_pos.y - rad), uv2_mk(0, 0), uv2_mk(rad * 2 - 2, rad * 2 - 2));
            gfx_draw_phys_obj(&circle_o, 0, circle, p.renderer, &player_obj.cam_true_scroll);

        }

        /* gfx_dbg_phys_obj(&move_left, p.renderer, NULL);
        gfx_dbg_phys_obj(&move_right, p.renderer, NULL);
        gfx_dbg_phys_obj(&move_jump, p.renderer, NULL); */

        uphys_obj_t tmp = player_obj;
        if (player_obj.flip == 0) tmp.pos.x -= 1;
        else tmp.pos.x += 1;
        SDL_SetTextureColorMod(player.current, 180, 180, 180);
        gfx_draw_phys_obj(&tmp, player_rot, player.current, p.renderer, &player_obj.cam_true_scroll);

        SDL_SetTextureColorMod(player.current, 255, 255, 255);
        gfx_draw_phys_obj(&player_obj, player_rot, player.current, p.renderer, &player_obj.cam_true_scroll);

        u08 cinematic = 0;
        if (attk_gun[0].speed) cinematic = 1;
        gfx_end_render(&p, T_W, T_H, urandnum_gen(-screenshake, screenshake), cinematic);
    }
    uprof_end(&profiler);
    render_time = profiler.ms_elapsed;

    gfx_delay(&p);
} 

i32 main(i32 argc, char ** argv) {
    init_game();

    # ifdef __EMSCRIPTEN__
        emscripten_set_main_loop(game_loop, 0, 1);
    # else 
        while (running) {
            game_loop();
        }
    # endif
    return 0;
}

// 5.22 ms render time 

