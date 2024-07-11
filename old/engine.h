#ifndef ENGINE_H
    #define ENGINE_H
    #include "utils/utils.h"

    #include <SDL2/SDL.h>
    #include <SDL2/SDL_image.h>
    #include <SDL2/SDL_ttf.h>
    #include <SDL2/SDL_mixer.h>
    #include "sdl_gfx/SDL2_framerate.h"
    #include "sdl_gfx/SDL2_gfxPrimitives.h"
    #include "sdl_gfx/SDL2_gfxPrimitives_font.h"
    #include "sdl_gfx/SDL2_imageFilter.h"
    #include "sdl_gfx/SDL2_rotozoom.h"

    i32 main(i32 argv, char ** args);
    #define SDL_main main

    #define cWHITE 255, 255, 255, 255
    #define cBLACK 000, 000, 000, 255
    typedef struct _gsdl_props gsdl_props_t;

    /*
    ////////////////////////////////
    ////////////////////////////////
    //// Game Image 
    ////////////////////////////////
    ////////////////////////////////
    */
    typedef struct {
        SDL_Surface * surf;
        SDL_Texture * tex;
        SDL_Rect src;
        u08 alpha;
        f64 angle;
        SDL_Point * center;
        u08 flip; // XOR: 0 = none, 1 = horizontal and 2 = vertical
        u08 serialized;
    } gsdl_img_t;

    #define gsdl_set_img_colorkey(img, val) SDL_SetColorKey(img -> surf, SDL_TRUE, val);
    #define gsdl_map_img_rgba(surf_format, r, g, b, a) SDL_MapRGBA(surf_format, r, g, b, a);
    #define gsdl_set_img_alpha(img, val) img -> alpha = val; SDL_SetTextureAlphaMod(img -> tex, val);

    void gsdl_load_tex(gsdl_img_t * img, const char * file, u32 x, u32 y, u32 w, u32 h, SDL_Renderer * renderer, list_t * texture_storage, list_t * surf_storage);
    void gsdl_clip_tex(gsdl_img_t * img, u32 x, u32 y, u32 w, u32 h);
    void gsdl_load_textures(gsdl_img_t * imgs, u16 frames, char * prefix, u32 x, u32 y, u32 w, u32 h, SDL_Renderer * renderer, list_t * texture_storage, list_t * surf_storage);
    void gsdl_create_surf(gsdl_img_t * img, u32 w, u32 h, u08 r, u08 g, u08 b, u08 a, list_t * surf_storage);
    void gsdl_create_tex(gsdl_img_t * img, u32 w, u32 h, u08 r, u08 g, u08 b, u08 a, SDL_Renderer * renderer, list_t * texture_storage, list_t * surf_storage);
    void gsdl_create_render_tex(gsdl_img_t * img, u32 w, u32 h, u08 a, SDL_Renderer * renderer, list_t * texture_storage);

    typedef struct {
        char * name;
        char * path;
        u32 frames;
        u32 duration;
        u32 current_frame;
    } gsdl_anim_data_t;


    typedef struct {
        gsdl_anim_data_t * data;
        u32 data_len;
        ht_t animations;
        f32 frames_passed; 
        char * state;
        i08 changed_state;
        gsdl_img_t current_img;
    } gsdl_animated_img_t;

    void gsdl_init_animated_img(gsdl_animated_img_t * img, gsdl_anim_data_t * data, u32 data_len);
    void gsdl_set_animation_state(gsdl_animated_img_t * img, char * state);
    void gsdl_load_animations(gsdl_animated_img_t * img, SDL_Renderer * renderer, list_t * tex_storage, list_t * surf_storage, i32 alpha);     
    void gsdl_update_animations(gsdl_animated_img_t * img, f64 dt);


    /*

    ////////////////////////////////
    ////////////////////////////////
    //// Game Audio 
    ////////////////////////////////
    ////////////////////////////////
    */
    typedef struct {
        Mix_Music * music;
    } gsdl_music_t;

    typedef struct {
        Mix_Chunk * sfx;
    } gsdl_sfx_t;

    void gsdl_load_music(gsdl_music_t * music, const char * path, list_t * music_storage);
    void gsdl_load_sfx(gsdl_sfx_t * sfx, const char * path, list_t * sfx_storage);
    #define gsdl_play_music_looped(music_m) Mix_PlayMusic(*music_m -> music, -1);
    #define gsdl_play_sfx(sfx_s) Mix_PlayChannel(-1, *sfx_s -> sfx, 0);
    /*
    ////////////////////////////////
    ////////////////////////////////
    //// Game Fonts 
    //// TODO: make it so that u dont have to load the font everytime and just do
    //// a hash table lookup for the font using an id
    ////////////////////////////////
    ////////////////////////////////
    */
    typedef struct {
        SDL_Rect pos;        
        char * label_text; 
        TTF_Font * label_font; 
        SDL_Color text_color; 
        SDL_Texture * label_tex;  
    } gsdl_ui_label_t;

    void gsdl_create_ui_label(gsdl_ui_label_t * label, i32 x, i32 y, char * text, char * font, u08 r, u08 g, u08 b, u08 a, u32 size, SDL_Renderer * renderer, list_t * texture_storage, list_t * font_storage); 
    void gsdl_center_ui_label(gsdl_ui_label_t * label);
    /*
    ////////////////////////////////
    ////////////////////////////////
    //// Game Entity
    ////////////////////////////////
    ////////////////////////////////
    */
    typedef struct {
        v2_t pos; // Position
        v2_t vel; // Velocity 
        v2_t max_acc; // Acceleration
        v2_t acc_delta; // Acceleration delta 
        v2_t acc;
        f32 y_momentum;
        f32 w;         // Width
        f32 h;         // Height
        u08 coll_l;    // Left Collision
        u08 coll_r;    // Right Collision
        u08 coll_b;    // Bottom Collision
        u08 coll_t;    // Top Collision
        u08 move_l;
        u08 move_r;
        u08 move_b;
        u08 move_t;
        u08 no_movement;
        // add an id?
    } gsdl_phys_obj_t;
    /*
    
        need to change whole game architecture:
            - game    
        I will have to introduce layers upon layers of unnecessary
        complexity. I will have to introduce components such as:
            - position, w, h, coll used together
            - move stuff is used together 
            - velocity + acc are associated together and updated together
        group things together and then create components?
        update them together? like update_vel then update_pos
        what about the order of operations for varying different components?

        simple variables could be used as components and things would just become
        overcomplicated hence I am not going to think about ECS, ref:
            https://austinmorlan.com/posts/entity_component_system/#the-component

    */





    /* 
     * Best detection using SAT 
     * Separating Axis Theorem
     * Add x velocity then check 
     * horizontal collisions. Then
     * do the same thing for vertical
     * collisions
    */ 
    #define gsdl_phys_obj_coll_detect(m, l) \
        (m.pos.x + m.w >= l.pos.x) &&  \
        (l.pos.x + l.w >= m.pos.x) &&  \
        (m.pos.y + m.h >= l.pos.y) &&  \
        (l.pos.y + l.h >= m.pos.y)     \




    // Make sure the acceleration is in negative for the y
    void gsdl_create_phys_obj(gsdl_phys_obj_t * obj, v2_t pos, v2_t acc_delta, v2_t max_acc, u16 w, u16 h);
    // Static object list collisions
    void gsdl_update_phys_obj_vel(gsdl_phys_obj_t * obj, v2_t vel_reset, f64 dt);
    void gsdl_update_phys_obj_pos(gsdl_phys_obj_t * o1, const gsdl_phys_obj_t * o2, const u32 o2_len, f64 dt);
    /*
    ////////////////////////////////
    ////////////////////////////////
    //// Game Camera 
    ////////////////////////////////
    ////////////////////////////////
    */
    typedef struct {
        f32 x;
        f32 y;
    } gsdl_cam_t;

    void gsdl_create_cam(gsdl_cam_t * cam);
    // tsx = tile size
    // tsy = tile size
    void gsdl_calc_cam_pos(gsdl_cam_t * cam, gsdl_props_t * props, gsdl_phys_obj_t * o, u16 tsx, u16 tsy, f64 dt);
    /*
    ////////////////////////////////
    ////////////////////////////////
    //// Game Camera 
    ////////////////////////////////
    ////////////////////////////////
    */
    typedef struct { 
        i32 cx;
        i32 cy; 
        i32 rad;
        u08 color[4];
        u08 fill;
    } gsdl_circle_t;
    void gsdl_create_circle(gsdl_circle_t * circle, i32 cx, i32 cy, i32 rad, u08 r, u08 g, u08 b, u08 a, u08 fill);

    /*
    ////////////////////////////////
    ////////////////////////////////
    //// Game Drawing & Rendering
    ////////////////////////////////
    ////////////////////////////////
    */
    void gsdl_start_render(gsdl_props_t * props, u08 r, u08 g, u08 b, u08 a, SDL_Texture * render_texture);
    void gsdl_draw_rect(const SDL_Rect * rect, u08 r, u08 g, u08 b, u08 a, SDL_Renderer * renderer);
    void gsdl_draw_rect_outline(const SDL_Rect * rect, u08 r, u08 g, u08 b, u08 a, SDL_Renderer * renderer);
    void gsdl_draw_ui_label(const gsdl_ui_label_t * label, SDL_Renderer * renderer);
    void gsdl_draw_circle(gsdl_circle_t * circle, SDL_Renderer * renderer);
    void gsdl_draw_img(const gsdl_img_t * img, i32 x, i32 y, gsdl_cam_t * cam, SDL_Renderer * renderer);
    void gsdl_draw_phys_obj(const gsdl_img_t * img, gsdl_phys_obj_t * obj, gsdl_cam_t * cam, SDL_Renderer * renderer);
    void gsdl_draw_phys_obj_rect(gsdl_phys_obj_t * obj, u08 r, u08 g, u08 b, u08 a, gsdl_cam_t * cam, SDL_Renderer * renderer);
    void gsdl_draw_line(i32 x1, i32 y1, i32 x2, i32 y2, u08 r, u08 g, u08 b, u08 a, SDL_Renderer * renderer);
    void gsdl_draw_point(i32 x, i32 y, u08 r, u08 g, u08 b, u08 a, SDL_Renderer * renderer);
    void gsdl_render_scale(f32 sx, f32 sy, SDL_Renderer * renderer); 
    void gsdl_end_render(gsdl_props_t * props);
    void gsdl_render_all(gsdl_props_t * props, u08 r, u08 g, u08 b, u08 a, const gsdl_img_t * img, gsdl_phys_obj_t * obj, gsdl_cam_t * cam, u08 handle_resize, i32 o_w, i32 o_h);

    /*
    ////////////////////////////////
    ////////////////////////////////
    //// Game Save/Serialize 
    ////////////////////////////////
    ////////////////////////////////
    */

    void gsdl_serialize_bin(void * ptr, u64 size, const char * path);
    void * gsdl_deserialize_bin(u64 size, const char * path);
    void gsdl_serialize_img(gsdl_img_t * img, char * file_name, SDL_Renderer * renderer);
    void gsdl_deserialize_img(gsdl_img_t * img, const char * path, SDL_Renderer * renderer, list_t * texture_storage, list_t * surf_storage);

    char ** gsdl_load_config_file(const char * path);


    /*
    ////////////////////////////////
    ////////////////////////////////
    //// Utility 
    ////////////////////////////////
    ////////////////////////////////
    */

    void gsdl_color_px(SDL_Surface * surf, i32 x, i32 y, u08 r, u08 g, u08 b);
    SDL_Color gsdl_get_px_color(SDL_Surface * surf, i32 x, i32 y);

    typedef struct {
        gsdl_circle_t * arr;
        u32 size;
        i32 delta;
        u08 initialized;
    } gsdl_particles_t;

    void gsdl_init_particles(gsdl_particles_t * particles, u32 size, i32 delta);
    void gsdl_update_particles(gsdl_particles_t * particles, i32 r, i32 g, i32 b, i32 a, u08 spawn, i32 cx, i32 cy, i32 w, i32 h, u08 f, i32 rad_min, i32 rad_max);
    void gsdl_draw_particles(gsdl_particles_t * particles, gsdl_cam_t * cam, SDL_Renderer * renderer);
    void gsdl_destroy_particles(gsdl_particles_t * particles);

    typedef struct {
        i16 * grid;
        u16 size[2];
        u16 actual_size;
        f32 tile_size[2];
    } gsdl_grid_t;

    void gsdl_init_grid(gsdl_grid_t * grid, u16 w, u16 h, u32 s_w, u32 s_h);
    void gsdl_set_grid_px(gsdl_grid_t * grid, u32 x, u32 y, i16 val);
    i16 gsdl_get_grid_px(gsdl_grid_t * grid, u32 x, u32 y);
    void gsdl_destroy_grid(gsdl_grid_t * grid); 
    i32 gsdl_draw_grid(gsdl_grid_t * g, SDL_Renderer * renderer, void (*grid_update)(gsdl_grid_t * grid, i16 cell, SDL_Rect rect, u32 x, u32 y, SDL_Renderer * renderer), u08 draw, i32 w, i32 h, i32 _x, i32 _y, SDL_Color * _colors);

    /*
    ////////////////////////////////
    ////////////////////////////////
    //// ECS 
    ////////////////////////////////
    ////////////////////////////////   
    */


    typedef struct {
        ht_t component_data;
        // insert function with data;
    } gsdl_entt_t;

    typedef ht_t gsdl_entt_manager_t;

    gsdl_entt_manager_t gsdl_create_entt_manager();
    void gsdl_add_entt_to_manager(gsdl_entt_manager_t * e_m, char * name);
    #define gsdl_add_component_to_entt(e_m, e_name, c_name, data) { \
        gsdl_entt_t * e = ht_get(e_m, e_name);        \
        ht_insert(&e -> component_data, c_name, data);            \
    }

    void * gsdl_get_entt_comp_data(gsdl_entt_manager_t * e_m, char * e_name, char * c_name); 
    
    /*
    ////////////////////////////////
    ////////////////////////////////
    //// Input System 
    ////////////////////////////////
    ////////////////////////////////   
    */


    // action : num_keys, keys
    // state is game state, a struct which contains all game vars
    typedef void (*event_function_type)(void * state, void * props);
    u08 gsdl_check_keyboard_action(gsdl_props_t * props, ht_t * action_keys, char * action); 
    void gsdl_start_event_handling(gsdl_props_t * props);
    #define gsdl_handle_events(state, props) { \
        for (u32 u = 0; u < props -> event_functions_num; u++) { \
            if (((i32) ht_get(&props -> selected_game_type_events, props -> event_type_strings[u])) == 1) { \
                props -> event_functions[u](state, props); \
            } \
        } \
    }
    void gsdl_end_event_handling(gsdl_props_t * props);



    // 

    typedef struct {
        f64 count;
        u32 actual_time;
    } gsdl_timer_t;

    gsdl_timer_t gsdl_create_timer();
    u32 gsdl_update_timer(gsdl_timer_t * timer, f64 ms_frame_time);


    /*
    ////////////////////////////////
    ////////////////////////////////
    //// Game Initialization & Props
    ////////////////////////////////
    ////////////////////////////////
    */

    typedef struct {
        char * title;
        i32 w;
        i32 h;
        i32 renderer_accel;
        i32 fps;
        i32 vsync;
        i32 resizable;
        u32 event_functions_num;
        event_function_type * event_functions;
        char ** event_type_strings;
        u32 * event_type_codes;
    } gsdl_init_info_t;


    typedef struct _gsdl_props {
        SDL_Window * win;
        i32 i_w;
        i32 i_h;

        SDL_Renderer * renderer;
        u08 vsync;
        u08 running;

        SDL_Event event;
        const u08 * keys_pressed;

        list_t texture_storage;
        list_t ptr_storage;
        i32 mb_used;

        u32 desired_fps;
        u16 desired_ms_delay; 
        i32 avg_dt_data[200];
        i32 curr_dt_idx;
        i32 avg_dt; // frame time in ms

        u64 hd_last_step;
        f64 relative_dt;
        f64 ms_dt;
        f64 special_dt_ratio; // ratio we use to get each variable equal dspite fps, formula is desired_fps/curr_fps

        // game stuff
        u08 game_stage; // 0 = dead, 1 = menu, 2 = playing
        u08 game_stage_changed; // necessary for transition

        gsdl_img_t render_texture;
        gsdl_phys_obj_t render_texture_obj;
        gsdl_phys_obj_t mouse;

        gsdl_entt_manager_t ecs;
        ht_t game_controls;

        gsdl_cam_t camera;

        // events
        u32 event_functions_num;
        event_function_type * event_functions;
        char ** event_type_strings;
        u32 * event_type_codes;

        ht_t selected_game_type_events;
        // or special controls file?
    } gsdl_props_t;

    void gsdl_init(const gsdl_init_info_t init, gsdl_props_t * props);
    void gsdl_destroy(gsdl_props_t * props);
    u08 gsdl_check_key(SDL_Event e, SDL_Scancode key);

    void gsdl_start_frame_time_rec(gsdl_props_t * props);
    i32 gsdl_stop_frame_time_rec(gsdl_props_t * props);
    i32 gsdl_get_avg_frame_time(gsdl_props_t * props);
    void gsdl_get_frame_time_str(const char * frame_time_about, char * int_dest, char * dest, gsdl_props_t * props);

    i32 gsdl_get_mem_used(gsdl_props_t * props);
    void gsdl_get_mem_used_str(char * int_dest, char * dest, gsdl_props_t * props);

#endif
