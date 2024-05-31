#include "./engine.h"
#include <string.h>
#define S_W 800 
#define S_H 600 

#define T_W (S_W/2) 
#define T_H (S_H/2) 

// #define FPS_60 1

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
i32 p_w = 0;
i32 p_h = 0;
// set width and height
// SDL_QueryTexture(player_idle[0], NULL, NULL, &p_w, &p_h);


uphys_obj_t player_obj;
gfx_lvl_t l;
char * PHYS_TILES = "12345";

SDL_Texture * img;

/*
f32 player_air_time = 0;

SDL_Texture * bg_bar;

uphys_obj_t bg_objs[BG_SQUARE_NUM]; 
uv2_t orig_pos[BG_SQUARE_NUM]; 

SDL_Texture * cat;

    f32 player_rot = 0.0f;

*/
void init_game() {
    // get refresh rate and fps
    gfx_init((gfx_init_info_t) { "huh", T_W, T_H, S_W, S_H, SDL_WINDOW_RESIZABLE, SDL_RENDERER_ACCELERATED, 160}, &p);
    // collision is broken, it uses specific vallues for acceleration
    uphys_obj_mk(&player_obj, 
                     uv2_mk(5, 5), uv2_mk(0, 0), 
                  uv2_mk(18, 18));
    // SDL_SetTextureAlphaMod(p.render_texture, 100);

    // shouldnt it work with T_W and T_H, yk what who cares 💀
    uv2_t player_pos = gfx_load_lvl("res/maps/0.txt", &l, PHYS_TILES, 5, uv2_mk(20, 20), uv2_mk(T_W, T_H));
    player_obj.pos = player_pos;
    img = gfx_load_img("res/tile.png", p.renderer);

    printf("%f %f\n", player_pos.x, player_pos.y);
    printf("Game Initialized\n");
}

void game_loop() {

    #ifndef __EMSCRIPTEN__ 
        uprof_end(&profiler);
    #endif
    gfx_get_events(&p);

    switch (p.event.type) {
        case SDL_QUIT:
            running = 0;
            break;

        default: break;
    }

    uphys_obj_get_scroll(&player_obj, uv2_mk(T_W, T_H), 0.5 * p.dt);
    // gfx_update_animation(&player, p.dt);
    // call update animation before img

    // Alwawys update player object after setting size
    uphys_obj_update(&player_obj, l.neighbors, l.current_tile, 8, p.dt);


    // fix scroll based tiles

    // render
    gfx_start_render(&p, 54, 54, 54, 255, p.render_texture);
        uphys_obj_t tmp = player_obj;
        if (player_obj.flip == 0) tmp.pos.x -= 2;
        else tmp.pos.x += 2;
        SDL_SetTextureColorMod(player.current, 180, 180, 180);
        // gfx_draw_phys_obj(&tmp, player_rot, player.current, p.renderer, &player_obj.cam_true_scroll);
    
        gfx_dbg_phys_obj(&player_obj, p.renderer, &player_obj.cam_true_scroll);

        gfx_draw_lvl(&l, p.renderer, player_obj.cam_true_scroll, uv2_mk(T_W, T_H), img);

    gfx_end_render(&p, T_W, T_H);
    #ifndef __EMSCRIPTEN__ 
        uprof_start(&profiler);
    #endif

} 


// make special struct for other data
i32 main(i32 argc, char ** argv) {
    // x,y,w,h
    init_game();


    /* // architecture looks like: get image, get size and stuff, send to phys
    while (running) {
        // printf("%f\n", p.ms_passed / 1000 == p.dt);
        game_loop();
    } */
    

    # ifdef __EMSCRIPTEN__
        emscripten_set_main_loop(game_loop, 0, 1);
    # else 
        while (running) {
            game_loop();
        }
    # endif
    return 0;
}

