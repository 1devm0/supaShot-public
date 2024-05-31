#include "./engine.h"
#include <stdlib.h>
#include <string.h>

#define S_W 1280 
#define S_H 720 

#define T_W (S_W/2) 
#define T_H (S_H/2) 

#define MAX_PLAYER_ACC 4

#define PLAYER_STATE_NUMBER 2
#define DEFAULT_PLAYER_STATE "idle"
gfx_anim_data_t player_states[PLAYER_STATE_NUMBER] = 
{
    { "idle", 2, 240, 0, "res/player/idle/", 1, 0 },
    { "jump", 1, 120, 0, "res/player/idle/", 1, 0 }
    // duration is in frames, 1 frame lassts for 120 frfames
}; 

// fix weird gaps betwen squares
#define BG_SQUARE_NUM 10 

gfx_program_t p;
uprof_t profiler = {0};

gfx_anim_img_t player;

u08 running = 1;
// possible issue with renderer size
uphys_obj_t player_obj;
f32 player_air_time = 0;

gfx_lvl_t l;
char * PHYS_TILES = "12345";

SDL_Texture * img;
SDL_Texture * bg_bar;

SDL_Texture * enemy;

f32 player_rot = 0.0f;

gfx_particle_t * particles;

gfx_particle_t * attk_gun; 


SDL_PixelFormat * pixel_format;
void init_game() {
    // get refresh rate and fps
    gfx_init((gfx_init_info_t) { "huh", T_W, T_H, S_W, S_H, SDL_WINDOW_RESIZABLE, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC, 60}, &p);
    gfx_init_animated_img(&player, player_states, PLAYER_STATE_NUMBER, DEFAULT_PLAYER_STATE, p.renderer);
    // collision is broken, it uses specific vallues for acceleration
    uphys_obj_mk(&player_obj, 
                     uv2_mk(5, 5), uv2_mk(0, 0), 
                  uv2_mk(18, 18));
    // SDL_SetTextureAlphaMod(p.render_texture, 100);

    // shouldnt it work with T_W and T_H, yk what who cares 💀
    uv2_t player_pos = gfx_load_lvl("res/maps/0.txt", &l, PHYS_TILES, 5, uv2_mk(20, 20), uv2_mk(T_W, T_H));
    player_obj.pos = player_pos;

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
}

// make special struct for other data
//
u32 sparks_all_destroyed = 120;
u08 tile_hit = 0;
u08 particle_gen_stop = 0;
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

                uv2_t normalized_player_pos = uv2_mk(player_obj.pos.x - player_obj.cam_true_scroll.x, player_obj.pos.y - player_obj.cam_true_scroll.y);

                f32 xdiff = x - normalized_player_pos.x;
                f32 ydiff = y - normalized_player_pos.y;
                f32 angle = atan2(ydiff, xdiff);

                if (!bullet_shot && p.event.button.button == SDL_BUTTON_LEFT)  {
                    f32 speed = 0.0f;
                    for (u32 u = 0; u < 10; u++) {
                        // adding is quite small 
                        speed = (f32) urandnum_gen(700, 1000) / 75;
                        uv2_t player_center = uv2_mk(player_obj.pos.x + player_obj.size.x / 2, player_obj.pos.y + player_obj.size.y / 2);
                        gfx_mk_particle(&attk_gun[u], player_center, angle, speed);                   
                    }
                    player_obj.vel.x = -cos(angle) * 30;
                    player_obj.vel.y = -sin(angle) * 10;
                    bullet_shot = 1;
                }

               break;

            default: break;
        }
        if (player_obj.vel.x != 0) {
            if (player_obj.vel.x > 0) {
                player_obj.vel.x = fmax(0, player_obj.vel.x - 1); 
            } 

            if (player_obj.vel.x < 0) {
                player_obj.vel.x = fmin(0, player_obj.vel.x + 1); 
            }
        }

        if (p.keys[SDL_SCANCODE_E]) {
            gfx_set_animated_img_state(&player, "idle");
        }

        if (player_obj.acc.x > MAX_PLAYER_ACC) player_obj.acc.x = MAX_PLAYER_ACC;
        if (player_obj.coll_l + player_obj.coll_r != 0) player_obj.acc.x = 0;

        // printf("%lld %f %f\n", profiler.mb_mem_used, profiler.ms_elapsed, player_obj.acc.x);
        // printf("%f\n", p.dt * 5);
        if (p.keys[SDL_SCANCODE_A]) {
            if (player_obj.move_r == 1) player_obj.acc.x = -player_obj.acc.x;
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

        if (player_obj.move_r == 1) {
            player_obj.flip = 0;
        }
        if (player_obj.move_l == 1) {
            player_obj.flip = 1;
        }

        if (p.keys[SDL_SCANCODE_W] && player_air_time < p.dt * 2 && player_obj.coll_t != 1) {
            uv2_t bottom = uv2_mk(player_obj.pos.x + player_obj.size.x / 2, player_obj.pos.y + player_obj.size.y / 2);
            player_obj.vel.y = -6;
        } 
        if (p.keys[SDL_SCANCODE_W] && (player_obj.coll_l || player_obj.coll_r) && player_air_time > p.dt * 4) {
            player_obj.acc.x -= 1;
            player_obj.vel.y = -5;
            uv2_t bottom = uv2_mk(player_obj.pos.x + player_obj.size.x / 2, player_obj.pos.y + player_obj.size.y / 2);
        } 
    }
    uprof_end(&profiler);
    event_time = profiler.ms_elapsed;

    uprof_start(&profiler);
    { // Update
        // open screens: current, python, gsdl
        if (player_obj.move_l + player_obj.move_r != 0 && strcmp(player.state, "idle") == 1){
            gfx_set_animated_img_state(&player, "idle");
        }  
        if (player_obj.move_l + player_obj.move_r == 0 && strcmp(player.state, "idle") == 1){
            gfx_set_animated_img_state(&player, "idle");
        }  
        
        // fix wall jump bug with being on floor
        if (player_obj.coll_b) {
            player_air_time = 0;
        } else {
            player_air_time += p.dt; 
        }
        if (player_air_time > p.dt * 3) {
            gfx_set_animated_img_state(&player, "jump");
        }

        if (player_obj.pos.y > 64 * (l.tile_size.y + 3)) {
            player_obj.pos.y = 0;
            uphys_obj_get_scroll(&player_obj, uv2_mk(T_W, T_H), 1 * p.dt);
        } else { 
            // making this 1 fixes the player issue with vertical loop
            if (attk_gun[9].speed > 0) {
                player_obj.pos = attk_gun[9].pos; 
                uphys_obj_get_scroll(&player_obj, uv2_mk(T_W, T_H), 1 * p.dt);
                player_obj.pos = stored_pos;
            } else {
                uphys_obj_get_scroll(&player_obj, uv2_mk(T_W, T_H), 0.25 * p.dt);
                stored_pos = player_obj.pos;
            }
        }
        gfx_get_tiles_on_screen(&l, player_obj.cam_true_scroll, uv2_mk(T_W, T_H));
        //printf("%f\n", p.ms_passed);


        u32 all_gun_sparks_destroyed = 0; 
        for (u32 u = 0; u < 10; u++) {
            gfx_update_particle(&attk_gun[u], player_obj.cam_true_scroll, 1, 0.1, p.dt, 1);
            if (attk_gun[u].speed > 0) {
                uphys_obj_t spark;
                uphys_obj_mk(&spark, attk_gun[u].pos, uv2_mk(0, 0), uv2_mk(2, 2));
                for (u32 u = 0; u < l.current_tile; u++) {
                    u08 collision = uphys_obj_coll_detect(spark, l.neighbors[u]);
                    if (collision && particle_gen_stop == 0) {
                        tile_hit = 1;
                        memset(attk_gun, 0, 10 * sizeof(gfx_particle_t));
                        // attk_gun[u].speed = 0;
                        stored_spawn_position = spark.pos;
                        screenshake = 10;
                    }
                }
                for (u32 u = 0; u < l.enemy_num; u++) {
                    u08 collision = uphys_obj_coll_detect(spark, l.enemies[u]);
                    if (collision && particle_gen_stop == 0) {
                        memset(&l.enemies[u], 0, sizeof(uphys_obj_t));
                        tile_hit = 1;
                        memset(attk_gun, 0, 10 * sizeof(gfx_particle_t));
                        // attk_gun[u].speed = 0;
                        stored_spawn_position = spark.pos;
                        screenshake = 10;
                    }
                }
            }
            if (attk_gun[u].speed < 0) all_gun_sparks_destroyed++;
        }
        if (all_gun_sparks_destroyed >= 5) {
            bullet_shot = 0;
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

        }

        sparks_all_destroyed = 0;
        for (u32 u = 0; u < 120; u++) {
            gfx_update_particle(&particles[u], player_obj.cam_true_scroll, 1.25, 0.5, p.dt, 1);
            if (particles[u].speed <= 0) {
                sparks_all_destroyed++;
            } 
            if (particles[u].speed > 0) p.dt = 0.25;
        }
        if (sparks_all_destroyed >= 120 && particle_gen_stop == 1) { 
            particle_gen_stop = 0;
            bullet_shot = 0;
        }

        gfx_update_animation(&player, p.dt);
        // call update animation before img
        i32 w, h;
        SDL_QueryTexture(player.current, NULL, NULL, &w, &h);
        player_obj.size.x = w * 1.75; 
        player_obj.size.y = h * 1.75;
        
        // Alwawys update player object after setting size
        uphys_obj_update(&player_obj, l.neighbors, l.current_tile, 8, p.dt);


        if (screenshake > 0) {
            player_obj.cam_true_scroll.x += urandnum_gen(-20, 20) * p.dt;
            player_obj.cam_true_scroll.y += urandnum_gen(-20, 20) * p.dt;
            screenshake -= 1 * p.dt;
        }


        frame_count += p.dt;
        // 3 seconds have passed
        if (frame_count >= 20) {
            ui32_to_str(p.ms_passed, window_caption, 5); 

            ui32_to_str(event_time * 100, event_profiled_time, 8); 
            ui32_to_str(update_time * 100, update_profiled_time, 8); 
            ui32_to_str(render_time, render_profiled_time, 8); 

            strncat(window_caption, " | Event Time (ms): 0.", strlen(" | Event Time (ms): 0."));
            strncat(window_caption, event_profiled_time, strlen(event_profiled_time));

            strncat(window_caption, " | Update Time (ms): 0.", strlen(" | Update Time (ms): 0."));
            strncat(window_caption, update_profiled_time, strlen(event_profiled_time));

            strncat(window_caption, " | Render Time (ms):  ", strlen(" | Render Time (ms):  "));
            strncat(window_caption, render_profiled_time, strlen(render_profiled_time));

            // printf("%d\n", l.current_tile);
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

        uphys_obj_t tmp = player_obj;
        if (player_obj.flip == 0) tmp.pos.x -= 2;
        else tmp.pos.x += 2;
        SDL_SetTextureColorMod(player.current, 180, 180, 180);
        gfx_draw_phys_obj(&tmp, player_rot, player.current, p.renderer, &player_obj.cam_true_scroll);

        SDL_SetTextureColorMod(player.current, 255, 255, 255);
        gfx_draw_phys_obj(&player_obj, player_rot, player.current, p.renderer, &player_obj.cam_true_scroll);

        gfx_draw_lvl(&l, p.renderer, player_obj.cam_true_scroll, uv2_mk(T_W, T_H), img);

        
        for (u32 u = 0; u < 120; u++) {
            // printf("%f %f\n", particles[u].pos.x, particles[u].pos.y);
            gfx_draw_spark_particle(&particles[u], p.renderer, pixel_format, 255, 255, 255, 255); 
            gfx_draw_circle(particles[u].offset_pos.x, particles[u].offset_pos.y, particles[u].speed * 0.65, 25, 25, 25, 255, 1, p.renderer);
        }

        for (u32 u = 0; u < 10; u++) {
            gfx_draw_spark_particle(&attk_gun[u], p.renderer, pixel_format, 255, 255, 255, 255);
            gfx_draw_circle(attk_gun[u].offset_pos.x, attk_gun[u].offset_pos.y, attk_gun[u].speed * 1.2, 25, 25, 25, 255, 1, p.renderer);
        }

        gfx_end_render(&p, T_W, T_H);
    }
    uprof_end(&profiler);
    render_time = profiler.ms_elapsed;
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
