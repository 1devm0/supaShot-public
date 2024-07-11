/* #include "SDL2/SDL_pixels.h"
#include "SDL2/SDL_surface.h" */
#include "engine.h"
#include <time.h>

void gsdl_init(const gsdl_init_info_t init, gsdl_props_t * props) {
    { // SDL Init

    }
    { // Window 
        u32 window_flags = 0;
        if (init.resizable) {
            #ifdef __APPLE__
                window_flags = window_flags | SDL_WINDOW_RESIZABLE;
            #else
                window_flags = window_flags | SDL_WINDOW_RESIZABLE;
            #endif
        }

        props -> win = SDL_CreateWindow(init.title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, init.w, init.h, window_flags);
        if (!props -> win) {
            logger_log(LOG_ERR, "Error making SDL2 window: %s", SDL_GetError());
        }
    }
    { // Renderer
        u32 renderer_flags = 0;
        if (init.renderer_accel) {
            renderer_flags = renderer_flags | SDL_RENDERER_ACCELERATED;
        }
        if (init.vsync) {
            renderer_flags = renderer_flags | SDL_RENDERER_PRESENTVSYNC;
        }

        props -> renderer = SDL_CreateRenderer(props -> win, -1, renderer_flags);
        if (!props -> renderer) {
            logger_log(LOG_ERR, "Error making SDL2 renderer: %s", SDL_GetError());
        }
    }
    { // FPS + Other Setups
        props -> i_w = init.w;
        props -> i_h = init.h;

        props -> vsync = init.vsync;
        props -> running = 1;

        // warning, lists are not resizable
        props -> texture_storage = list_create(200);
        props -> ptr_storage = list_create(200);
        props -> mb_used = -1;

        #ifndef __EMSCRIPTEN__
            // init.fps = 60;
            /* props -> desired_fps = init.fps;
            props -> desired_ms_delay = 1000 / init.fps; */
            props -> desired_fps = init.fps;
            props -> desired_ms_delay = 1000 / init.fps;
            memset(props -> avg_dt_data, 0, sizeof(props -> avg_dt));
            props -> curr_dt_idx = 0;
            props -> avg_dt = -1;

            props -> hd_last_step = 0;
            props -> relative_dt = 0;
            props -> ms_dt = 0;
            props -> special_dt_ratio = 0;
        #endif

        // game stuff
        props -> game_stage = 0; 
        props -> game_stage_changed = 0; // necessary for transition

        gsdl_create_render_tex(&props -> render_texture, init.w, init.h, 0, props -> renderer, &props -> texture_storage);
        gsdl_create_phys_obj(&props -> render_texture_obj, mk_v2(0, 0), mk_v2(0, 0), mk_v2(0, 0), init.w, init.h);
        gsdl_create_phys_obj(&props -> mouse, mk_v2(0, 0), mk_v2(0, 0), mk_v2(0, 0), 16, 16); 

        props -> ecs = gsdl_create_entt_manager();
        props -> game_controls = ht_create(8);
        gsdl_create_cam(&props -> camera);


        // events
        props -> event_functions_num = init.event_functions_num;
        props -> event_functions = init.event_functions;

        props -> event_type_codes = init.event_type_codes;
        // 128 characters max len
        props -> event_type_strings = init.event_type_strings; 

    }

    // props -> hd_last_step = SDL_GetTicks();

    // props -> hd_curr_step = SDL_GetPerformanceCounter();
    // props -> hd_curr_step = SDL_GetTicks64();
}

void gsdl_destroy(gsdl_props_t * props) {
    // possible problems here
    for (u32 u = 0; u < props -> texture_storage.len; u++) {
        if (props -> texture_storage.data[u]) {
            SDL_DestroyTexture(props -> texture_storage.data[u]);
        }
    } 
    free(props -> texture_storage.data);
    list_rm(&props -> ptr_storage);

    SDL_DestroyRenderer(props -> renderer);
    SDL_DestroyWindow(props -> win);
    Mix_CloseAudio();

    SDL_Quit();
}

void gsdl_start_frame_time_rec(gsdl_props_t * props) {

    // props -> delta_time = (f64) (SDL_GetTicks64() - props -> hd_last_step) * ((f64) 60 / 1000);
    // props -> hd_last_step = SDL_GetTicks64();

    // 60 desired fps
    // from some website, its like sdl2 tutorials like foo.net

    // Finding the frame time difference in a certain format, SDL_GetPerformanceFrequency
    // us to find the relative delta time in a platform-specific unit
    props -> relative_dt = ((f64) (SDL_GetPerformanceCounter() - props -> hd_last_step) / (f64) SDL_GetPerformanceFrequency());
    props -> ms_dt = props -> relative_dt * 1000; // Converting it into ms delay
    props -> special_dt_ratio = props -> relative_dt * props -> desired_fps; // Our special DT ratio
    // printf("%f\n", props -> special_dt_ratio);
    props -> hd_last_step  = SDL_GetPerformanceCounter();

    // printf("%f\n", props -> delta_time);
}

i32 gsdl_stop_frame_time_rec(gsdl_props_t * props) {
    i32 idx = props -> curr_dt_idx;
    props -> avg_dt_data[idx] = (i32) props -> ms_dt;
    if (props -> curr_dt_idx < sizeof(props -> avg_dt_data) / sizeof(i32)) {
        props -> curr_dt_idx++;
    } else {
        props -> curr_dt_idx = 0;
    }
    u64 avg = 0;
    for (u16 u = 0; u < sizeof(props -> avg_dt_data) / sizeof(i32); u++) {
        avg += props -> avg_dt_data[u];
    } 
    avg = avg / (sizeof(props -> avg_dt_data) / sizeof(i32));
    props -> avg_dt = avg;
    return props -> avg_dt;
}

i32 gsdl_get_avg_frame_time(gsdl_props_t * props) {
    return props -> avg_dt;
}

void gsdl_get_frame_time_str(const char * frame_time_about, char * int_dest, char * dest, gsdl_props_t * props) {
    i32 dt = gsdl_get_avg_frame_time(props);
    snprintf(int_dest, 24, "%d", dt);
    if (frame_time_about != NULL) {
        strncat(dest, frame_time_about, strlen(frame_time_about));
    }
    strncat(dest, int_dest, strlen(int_dest));
}

#ifdef __WIN32__
    #include <Windows.h>
    #include <psapi.h>
#else
    #include <sys/resource.h>
    #include <unistd.h>
#endif

i32 gsdl_get_mem_used(gsdl_props_t * props) {
    #ifdef __WIN32__
        PROCESS_MEMORY_COUNTERS_EX pmc;
        GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc, sizeof(pmc));
        u64 virtualMemUsedByMe = pmc.PrivateUsage;
        props -> mb_used = (i32) roundl(virtualMemUsedByMe / 1000000);
        return props -> mb_used;
    #else
        struct rusage usage;
        getrusage(RUSAGE_SELF, &usage);
        props -> mb_used = (i32) roundl(usage.ru_maxrss / 1000000);
        return props -> mb_used;
    #endif
}

void gsdl_get_mem_used_str(char * int_dest, char * dest, gsdl_props_t * props) {
    const char * about = "Mem Used (mb): ";
    i32 mem_used = gsdl_get_mem_used(props); 
    snprintf(int_dest, 24, "%d", mem_used);
    strncat(dest, about, strlen(about));
    strncat(dest, int_dest, strlen(int_dest));
}

u08 gsdl_check_key(SDL_Event e, SDL_Scancode key) {
    return (e.key.keysym.scancode == key);
}

void gsdl_load_tex(gsdl_img_t * img, const char * file, u32 x, u32 y, u32 w, u32 h, SDL_Renderer * renderer, list_t * texture_storage, list_t * surf_storage) {
    img -> surf = IMG_Load(file);
    // SDL_SetColorKey(img -> surf, SDL_TRUE, SDL_MapRGBA(SDL_AllocFormat(SDL_PIXELFORMAT_RGB24), 128, 128, 128, 128));
    // SDL_SetColorKey(img -> surf, SDL_TRUE, SDL_MapRGBA(img -> surf -> format, 128, 128, 128, 128));
    SDL_SetColorKey(img -> surf, SDL_TRUE, SDL_MapRGBA(img -> surf -> format, 128, 128, 128, 128));
    if (strcmp(file, "res/player.png") == 0) {
        SDL_SetSurfaceColorMod(img -> surf, 255, 255, 255);
    }

    if (strcmp(file, "res/light.png") == 0) {
        SDL_SetColorKey(img -> surf, SDL_TRUE, SDL_MapRGB(img -> surf -> format, 0, 0, 0));
        // SDL_SetSurfaceColorMod(img -> surf, 140, 255, 240);
        // SDL_SetSurfaceColorMod(img -> surf, 11, 140, 255);
        if (y == 1) {
          //  SDL_SetSurfaceColorMod(img -> surf, 244, 241, 134);
        }
    }

    img -> tex = SDL_CreateTextureFromSurface(renderer, img -> surf);
    // SDL_SetTextureColorMod(img -> tex, 11, 140, 255);
    
    if (!img -> tex) { logger_log(LOG_WARN, "Error Loading %s", file); }
    if (w + h == 0) {
        img -> src.w = w;
        img -> src.h = h;
        img -> src.x = x;
        img -> src.y = y;
    }
    i32 w_, h_;
    SDL_QueryTexture(img -> tex, NULL, NULL, &w_, &h_);

    img -> src.w = w_;
    img -> src.h = h_;
    img -> src.x = x;
    img -> src.y = 0;

    list_insert(texture_storage, img -> tex);
    list_insert(surf_storage, img -> surf);
}

void gsdl_clip_tex(gsdl_img_t * img, u32 x, u32 y, u32 w, u32 h) {
    img -> src.x = x;
    img -> src.y = y;
    img -> src.w = w;
    img -> src.h = h;
}

void gsdl_load_textures(gsdl_img_t * imgs, u16 frames, char * prefix, u32 x, u32 y, u32 w, u32 h, SDL_Renderer * renderer, list_t * texture_storage, list_t * surf_storage) {
    char * curr_image = calloc(512, sizeof(char));
    char * final = calloc(512, sizeof(char));
    char * ext = ".png";
    for (int i = 0; i < frames; i++) {
        char * curr_frame = i32_to_str(i);

        strncat(curr_image, prefix, strlen(prefix));
        strncat(curr_image, curr_frame, strlen(curr_frame));
        strncat(curr_image, ext, strlen(ext));

        memcpy(final, curr_image, strlen(curr_image) + 1);
        final[strlen(curr_image) + 1] = '\0';

        //imgs[i] = mk_le_img(curr_image, 0, 0, w, h);
        gsdl_load_tex(&imgs[i], curr_image, x, y, w, h, renderer, texture_storage, surf_storage);
        memset(curr_image, 0, strlen(curr_image)); 
    }
}


void gsdl_create_surf(gsdl_img_t * img, u32 w, u32 h, u08 r, u08 g, u08 b, u08 a, list_t * surf_storage) {
    SDL_Surface * surface = SDL_CreateRGBSurface(0, w, h, 32, 0, 0, 0, 0);
    SDL_PixelFormat * format = SDL_AllocFormat(SDL_PIXELFORMAT_RGB24);
    surface = SDL_ConvertSurface(surface, format, 0);

    for (i32 y = 0; y < h; y++) {
        for (i32 x = 0; x < w; x++) {
            gsdl_color_px(surface, x, y, r, g, b); 
        }
    } 
    
    if (surface == NULL) {
        logger_log(LOG_WARN, "Failed to make surface: %s", SDL_GetError());
    }

    img -> surf = surface;
    list_insert(surf_storage, surface);
}

void gsdl_create_tex(gsdl_img_t * img, u32 w, u32 h, u08 r, u08 g, u08 b, u08 a, SDL_Renderer * renderer, list_t * texture_storage, list_t * surf_storage) {
    gsdl_create_surf(img, w, h, r, g, b, a, surf_storage);
    img -> tex = SDL_CreateTextureFromSurface(renderer, img -> surf);

    if (img -> tex == NULL) {
        logger_log(LOG_WARN, "Failed to make texture: %s", SDL_GetError());
    }

    img -> src = (SDL_Rect) { 0, 0, w, h };
    img -> alpha = a;         
    SDL_SetTextureBlendMode(img -> tex, SDL_BLENDMODE_BLEND);
    SDL_SetTextureAlphaMod(img -> tex, a);
    list_insert(texture_storage, img -> tex);
}

void gsdl_create_render_tex(gsdl_img_t * img, u32 w, u32 h, u08 a, SDL_Renderer * renderer, list_t * texture_storage) {
    img -> tex = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_TARGET, w, h);
    img -> src = (SDL_Rect) { 0, 0, w, h };
    SDL_SetTextureBlendMode(img -> tex, SDL_BLENDMODE_BLEND);
    img -> alpha = a;
    img -> angle = 0;
    img -> center = NULL;
    img -> flip = 0;
    img -> serialized = 0;
    list_insert(texture_storage, img -> tex);
    SDL_SetRenderTarget(renderer, img -> tex);
}


void gsdl_init_animated_img(gsdl_animated_img_t * img, gsdl_anim_data_t * data, u32 data_len) {
    img -> data = data;
    img -> data_len = data_len;
    img -> animations = ht_create(14); 
    img -> frames_passed = 0;
    img -> state = calloc(64, sizeof(char));
    img -> changed_state = 1;
}

void gsdl_load_animations(gsdl_animated_img_t * img, SDL_Renderer * renderer, list_t * tex_storage, list_t * surf_storage, i32 alpha) {
    for (u32 u = 0; u < img -> data_len; u++) {
        ht_insert(&img -> animations, img -> data[u].name, calloc(img -> data[u].frames, sizeof(gsdl_img_t)));
        gsdl_load_textures(ht_get(&img -> animations, img -> data[u].name), img -> data[u].frames, img -> data[u].path, 0, 0, 0, 0, renderer, tex_storage, surf_storage);
        if (alpha != -1) {
            gsdl_set_img_alpha(((gsdl_img_t *) ht_get(&img -> animations, img -> data[u].name)), alpha);
        }
    }
} 

void gsdl_set_animation_state(gsdl_animated_img_t * img, char * state) {
    if (strcmp(img -> state, state) != 0) {
        img -> changed_state = 1;
        img -> state = state;
    }
}

void gsdl_update_animations(gsdl_animated_img_t * img, f64 dt) {
    img -> frames_passed += 1 * dt;
    u64 idx = 0;
    gsdl_anim_data_t current;
    for (u32 u = 0; u < img -> data_len; u++) {
        if (strcmp(img -> data[u].name, img -> state) == 0) {
            idx = u;
            current = img -> data[u];
            break;
        } 
    }
    u08 flip_save = img -> current_img.flip;

    if ((i32) img -> frames_passed > current.duration || img -> changed_state) {
        if (current.frames > 1) {
            current.current_frame++;
            if (current.current_frame >= current.frames) {
                current.current_frame = 0;
            }
            img -> data[idx] = current;
            img -> current_img = ((gsdl_img_t *) ht_get(&img -> animations, img -> state))[current.current_frame];
        } else {
            img -> current_img = *((gsdl_img_t *) ht_get(&img -> animations, img -> state));
        }

        img -> frames_passed = 0;
        img -> current_img.flip = flip_save;
        img -> changed_state = 0;
    }
}

void gsdl_load_music(gsdl_music_t * music, const char * path, list_t * music_storage) {
    music -> music = Mix_LoadMUS(path);
    list_insert(music_storage, music -> music);
}

void gsdl_load_sfx(gsdl_sfx_t * sfx, const char * path, list_t * sfx_storage) {
    sfx -> sfx = Mix_LoadWAV(path);
    list_insert(sfx_storage, sfx -> sfx);
}

#define gsdl_load_font(path, size) \
    TTF_OpenFont(path, size) 

void gsdl_create_ui_label(gsdl_ui_label_t * label, i32 x, i32 y, char * text, char * font, u08 r, u08 g, u08 b, u08 a, u32 size, SDL_Renderer * renderer, list_t * texture_storage, list_t * font_storage) {
    label -> pos.x = x;
    label -> pos.y = y;
    label -> label_text = text;
    label -> label_font = gsdl_load_font(font, size);
    label -> text_color.r = r;
    label -> text_color.g = g;
    label -> text_color.b = b;
    label -> text_color.a = a;
    label -> label_tex = SDL_CreateTextureFromSurface(renderer, TTF_RenderText_Blended(label -> label_font,
                                                                                       label -> label_text,
                                                                                       label -> text_color));
    SDL_QueryTexture(label -> label_tex, NULL, NULL, &label -> pos.w, &label -> pos.h);
    // possible problems here
    list_insert(texture_storage, label -> label_tex);
    list_insert(font_storage, label -> label_font);
}

void gsdl_center_ui_label(gsdl_ui_label_t * label) {
    label -> pos.x -= label -> pos.w / 2;
    label -> pos.y -= label -> pos.h / 2;
}

void gsdl_create_phys_obj(gsdl_phys_obj_t * obj, v2_t pos, v2_t acc_delta, v2_t max_acc, u16 w, u16 h) {
    memset(obj, 0, sizeof(gsdl_phys_obj_t));
    obj -> pos = pos;
    obj -> vel = mk_v2(0, 0);
    obj -> acc_delta = acc_delta;
    obj -> acc = obj -> acc_delta;
    obj -> max_acc = max_acc;
    obj -> w = w;
    obj -> h = h;
}

// fixxxxxxxx thissss, make an actual acc based system
// by limiting frame velocity
// also fix obj struct
void gsdl_update_phys_obj_vel(gsdl_phys_obj_t * obj, v2_t vel_reset, f64 dt) {
    if (vel_reset.x == 1) {
        obj -> vel.x = 0; 
    }
    if (vel_reset.y == 1) {
        obj -> vel.y = 0; 
    }

    if (obj -> move_r) {
        /*if (obj -> acc.x < obj -> max_acc.x) {
            obj -> acc.x += obj -> acc_delta.x * dt;
        }*/
        obj -> vel.x += obj -> acc.x * dt;
    }
    if (obj -> move_l) {
        /*if (obj -> acc.x < obj -> max_acc.x) {
            obj -> acc.x += obj -> acc_delta.x * dt;
        }*/
        obj -> vel.x -= obj -> acc.x * dt; 
    }
    if (obj -> move_t) {
        obj -> vel.y += obj -> acc.y * dt;
    }
    if (obj -> move_b) {
        obj -> vel.y -= obj -> acc.y * dt;
    }

    if (obj -> move_r + obj -> move_l + obj -> move_t + obj -> move_b < 1) {
        obj -> no_movement = 1;
    } 
}

void gsdl_update_phys_obj_pos(gsdl_phys_obj_t * o1, const gsdl_phys_obj_t * o2, const u32 o2_len, f64 dt) {
    o1 -> vel.y += o1 -> y_momentum;
    o1 -> pos.x += o1 -> vel.x * dt;
    o1 -> coll_r = 0;
    o1 -> coll_l = 0;

    if (o2) {
        for (u32 i = 0; i < o2_len; i++) {
            if (gsdl_phys_obj_coll_detect((*o1), o2[i])) {
                if (o1 -> vel.x > 0) {
                    // o1 -> pos.x -= o1 -> vel.x * dt;
                    o1 -> pos.x -= fabs(o1 -> vel.x * dt);
                    // if collision breaks, do while loop and subtract
                    o1 -> coll_r = 1;
                    o1 -> coll_l = 0;
                }

                else if (o1 -> vel.x < 0) {
                    // o1 -> pos.x -= o1 -> vel.x * dt;
                    o1 -> pos.x += fabs(o1 -> vel.x * dt);
                    // o1 -> pos.x -= fabsf(o1 -> vel.x) * dt;
                    o1 -> coll_r = 0;
                    o1 -> coll_l = 1;
                } 
            }
        }
    } 

    o1 -> pos.y += o1 -> vel.y * dt;
    o1 -> coll_b = 0;
    o1 -> coll_t = 0;
    
    if (o2) {
        for (u32 i = 0; i < o2_len; i++) {
            if (gsdl_phys_obj_coll_detect((*o1), o2[i])) {
                if (o1 -> vel.y > 0) {
                    // o1 -> pos.y -= fabsf(o1 -> vel.y) * dt;
                    o1 -> pos.y -= fabs(o1 -> vel.y * dt);
                    // o1 -> pos.y -= o1 -> vel.y * dt;
                    //o1 -> pos.y += o1 -> acc.y;
                    o1 -> coll_b = 1;
                    o1 -> coll_t = 0;
                }

                
                else if (o1 -> vel.y < 0) {
                    //o1 -> pos.y += fabsf(o1 -> vel.y * dt * 60);
                    // printf("%f", o1 -> pos.y);
                    // o1 -> pos.y += o2[i].pos.y;

                    o1 -> pos.y += fabs(o1 -> vel.y * dt);
                    // o1 -> pos.y = 
                    //o1 -> pos.y -= o1 -> acc.y;
                    o1 -> coll_b = 0;
                    o1 -> coll_t = 1;
                }               
            
            }
        }
    }

}

void gsdl_create_cam(gsdl_cam_t * cam) {
    memset(cam, 0, sizeof(gsdl_cam_t));
}

void gsdl_calc_cam_pos(gsdl_cam_t * cam, gsdl_props_t * props, gsdl_phys_obj_t * o, u16 tsx, u16 tsy, f64 dt) {
    SDL_Texture * target = SDL_GetRenderTarget(props -> renderer);
    i32 w;
    i32 h;
    if (!target) {
        SDL_GetWindowSize(props -> win, &w, &h);
    } else {
        u32 format;
        i32 access;
        SDL_QueryTexture(target, &format, &access, &w, &h);
        // get render texture obj
    } 
    w = props -> i_w;
    h = props -> i_h;

    cam -> x += (((o -> pos.x - cam -> x - ((w * 0.5) - (tsx * 0.5))) / 5) * dt);
    cam -> y += (((o -> pos.y - cam -> y - ((h * 0.5) - (tsy * 0.5))) / 5) * dt); 
}

void gsdl_create_circle(gsdl_circle_t * circle, i32 cx, i32 cy, i32 rad, u08 r, u08 g, u08 b, u08 a, u08 fill) {
    circle -> cx = cx;
    circle -> cy = cy;
    circle -> rad = rad;
    circle -> color[0] = r; 
    circle -> color[1] = g; 
    circle -> color[2] = b; 
    circle -> color[3] = a; 
    circle -> fill = fill;
}

void gsdl_start_render(gsdl_props_t * props, u08 r, u08 g, u08 b, u08 a, SDL_Texture * render_texture) {
    SDL_SetRenderTarget(props -> renderer, render_texture);
    SDL_SetRenderDrawColor(props -> renderer, r, g, b, a);        
    SDL_RenderClear(props -> renderer);
}

void gsdl_draw_rect_outline(const SDL_Rect * rect, u08 r, u08 g, u08 b, u08 a, SDL_Renderer * renderer) {
    SDL_SetRenderDrawColor(renderer, r, g, b, a);
    SDL_RenderDrawRect(renderer, rect);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
}

void gsdl_draw_rect(const SDL_Rect * rect, u08 r, u08 g, u08 b, u08 a, SDL_Renderer * renderer) {
    SDL_SetRenderDrawColor(renderer, r, g, b, a);
    SDL_RenderFillRect(renderer, rect);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
}

void gsdl_draw_ui_label(const gsdl_ui_label_t * label, SDL_Renderer * renderer) {
    SDL_RenderCopy(renderer, label -> label_tex, NULL, &label -> pos);
}

void _gsdl_draw_circle(i32 cx, i32 cy, u32 rad, u08 r, u08 g, u08 b, u08 a, u08 fill, SDL_Renderer * renderer) {
    // https://gist.github.com/Gumichan01/332c26f6197a432db91cc4327fcabb1c
    i32 x = cx;
    i32 y = cy;

    i32 x_offset = 0;
    i32 y_offset = rad; 
    i32 d = rad - 1;

    SDL_SetRenderDrawColor(renderer, r, g, b, a);
    if (!fill) {    

        while (y_offset >= x_offset) {
            SDL_RenderDrawPoint(renderer, x + x_offset, y + y_offset);
            SDL_RenderDrawPoint(renderer, x + y_offset, y + x_offset);
            SDL_RenderDrawPoint(renderer, x - x_offset, y + y_offset);
            SDL_RenderDrawPoint(renderer, x - y_offset, y + x_offset);
            SDL_RenderDrawPoint(renderer, x + x_offset, y - y_offset);
            SDL_RenderDrawPoint(renderer, x + y_offset, y - x_offset);
            SDL_RenderDrawPoint(renderer, x - x_offset, y - y_offset);
            SDL_RenderDrawPoint(renderer, x - y_offset, y - x_offset);

            if (d >= 2 * x_offset) {
                d -= 2 * x_offset + 1;
                x_offset += 1;
            }
            else if (d < 2 * (rad - y_offset)) {
                d += 2 * y_offset - 1;
                y_offset -= 1;
            }
            else {
                d += 2 * (y_offset - x_offset - 1);
                y_offset -= 1;
                x_offset += 1;
            }
        }

        return;
    }


    while (y_offset >= x_offset) {

        SDL_RenderDrawLine(renderer, x - y_offset, y + x_offset,
                                     x + y_offset, y + x_offset);
        SDL_RenderDrawLine(renderer, x - x_offset, y + y_offset,
                                     x + x_offset, y + y_offset);
        SDL_RenderDrawLine(renderer, x - x_offset, y - y_offset,
                                     x + x_offset, y - y_offset);
        SDL_RenderDrawLine(renderer, x - y_offset, y - x_offset,
                                     x + y_offset, y - x_offset);

        if (d >= 2 * x_offset) {
            d -= 2 * x_offset + 1;
            x_offset += 1;
        }
        else if (d < 2 * (rad - y_offset)) {
            d += 2 * y_offset - 1;
            y_offset -= 1;
        }
        else {
            d += 2 * (y_offset - x_offset - 1);
            y_offset -= 1;
            x_offset += 1;
        }
    }
    return;


}

void gsdl_draw_circle(gsdl_circle_t * circle, SDL_Renderer * renderer) {
    _gsdl_draw_circle(circle -> cx, circle -> cy, circle -> rad, circle -> color[0], circle -> color[1], circle -> color[2], circle -> color[3], circle -> fill, renderer);
}


// XOR the flip for the image
void gsdl_draw_img(const gsdl_img_t * img, i32 x, i32 y, gsdl_cam_t * cam, SDL_Renderer * renderer) {
    SDL_Rect rect;

    if (cam == NULL) {
        rect.x = x;
        rect.y = y;
    } 
    else {
        rect.x = x - cam -> x;
        rect.y = y - cam -> y;
    }

    rect.w = img -> src.w;
    rect.h = img -> src.h;

    SDL_RenderCopyEx(renderer, img -> tex, &img -> src, &rect, img -> angle, img -> center, img -> flip);
}

void gsdl_draw_phys_obj(const gsdl_img_t * img, gsdl_phys_obj_t * obj, gsdl_cam_t * cam, SDL_Renderer * renderer) {
    SDL_Rect rect;

    if (cam == NULL) {
        rect.x = obj -> pos.x;
        rect.y = obj -> pos.y;
    } 
    else {
        rect.x = (i32) obj -> pos.x - cam -> x;
        rect.y = (i32) obj -> pos.y - cam -> y;
    }

    rect.w = obj -> w;
    rect.h = obj -> h;

    SDL_RendererFlip f = SDL_FLIP_NONE;
    if (img -> flip) {
        f = SDL_FLIP_HORIZONTAL;
    }

    SDL_RenderCopyEx(renderer, img -> tex, &img -> src, &rect, img -> angle, img -> center, f);
    //SDL_RenderCopy(renderer, img -> tex, &img -> src, &rect);
}

void gsdl_draw_phys_obj_rect(gsdl_phys_obj_t * obj, u08 r, u08 g, u08 b, u08 a, gsdl_cam_t * cam, SDL_Renderer * renderer) {
    SDL_Rect rect;

    if (cam == NULL) {
        rect.x = obj -> pos.x;
        rect.y = obj -> pos.y; 
    }
    else {
        rect.x = obj -> pos.x - cam -> x;
        rect.y = obj -> pos.y - cam -> y; 
    }

    if (obj -> w > 0 && obj -> h > 0) {
        rect.w = obj -> w;
        rect.h = obj -> h;

        SDL_SetRenderDrawColor(renderer, r, g, b, a);
        SDL_RenderFillRect(renderer, &rect);
    }

}

void gsdl_draw_line(i32 x1, i32 y1, i32 x2, i32 y2, u08 r, u08 g, u08 b, u08 a, SDL_Renderer * renderer) {
    SDL_SetRenderDrawColor(renderer, r, g, b, a);        
    SDL_RenderDrawLine(renderer, x1, y1, x2, y2);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
}
void gsdl_draw_point(i32 x, i32 y, u08 r, u08 g, u08 b, u08 a, SDL_Renderer * renderer) {
    SDL_SetRenderDrawColor(renderer, r, g, b, a);        
    SDL_RenderDrawPoint(renderer, x, y); 
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
}

void gsdl_render_scale(f32 sx, f32 sy, SDL_Renderer * renderer) { 
    SDL_RenderSetScale(renderer, sx, sy);
}

// You MUST get the dt at the start and end of each frame!
void gsdl_end_render(gsdl_props_t * props) {
    SDL_Texture * render_target = SDL_GetRenderTarget(props -> renderer);
    if (!render_target) {
        SDL_RenderPresent(props -> renderer);
        if (!props -> vsync) {
            // bad: SDL_Delay(props -> desired_ms_delay - props -> ms_dt);  
            SDL_Delay(props -> desired_ms_delay);  
            // for performance testing
            // SDL_Delay(0);  
        }
    }
}

void gsdl_render_all(gsdl_props_t * props, u08 r, u08 g, u08 b, u08 a, const gsdl_img_t * img, gsdl_phys_obj_t * obj, gsdl_cam_t * cam, u08 handle_resize, i32 o_w, i32 o_h) {
    i32 w;
    i32 h;
    SDL_GetWindowSize(props -> win, &w, &h);

    obj -> pos.x = -1;
    obj -> pos.y = -1;
    if (obj -> pos.x == -1 && obj -> pos.y == -1) {
        obj -> pos.x = w/2;
        obj -> pos.y = h/2;

        obj -> pos.x -= obj -> w / 2;
        obj -> pos.y -= obj -> h / 2;
    }
   
    f32 x_scale = (f32) w/o_w;
    f32 y_scale = (f32) h/o_h;

    f32 min = 0.0f;

    if (x_scale < y_scale) {
        min = x_scale;
    } else {
        min = y_scale;
    }

    u16 n_w = o_w * min;
    u16 n_h = o_h * min;

    if (obj -> w != n_w) {
        obj -> w = n_w;
    }

    if (obj -> h != n_h) {
        obj -> h = n_h;
    }

    gsdl_start_render(props, r, g, b, a, NULL);
        gsdl_draw_phys_obj(img, obj, cam, props -> renderer);
    gsdl_end_render(props);
}

void gsdl_serialize_bin(void * ptr, u64 size, const char * path) {
    FILE * fp = fopen(path, "wb");
    if (fwrite(ptr, size, 1, fp) == 0) {
        logger_log(LOG_WARN, "Failed to serialize to %s", path);
    } 
    fclose(fp);    
}

void * gsdl_deserialize_bin(u64 size, const char * path) {
    void * s = calloc(1, size);
    FILE * sp = fopen(path, "rb");
    fread(s, size, 1, sp);
    fclose(sp);
    return s;
}

void gsdl_serialize_img(gsdl_img_t * img, char * file_name, SDL_Renderer * renderer) {
    SDL_PixelFormatEnum format;
    i32 access;

    /* Get information about texture we want to save */
    u08 texture_query = SDL_QueryTexture(img -> tex, &format, &access, NULL, NULL) + 1;
    if (!texture_query) {
        logger_log(LOG_WARN, "Texture query failed, %s", SDL_GetError());
    }
    SDL_Texture * render_texture = SDL_CreateTexture(renderer, format, SDL_TEXTUREACCESS_TARGET, img -> src.w, img -> src.h);
    if (!render_texture) {
        logger_log(LOG_WARN, "Failed to create a render texture: %s", SDL_GetError());
    } 

    u08 render_target_set = SDL_SetRenderTarget(renderer, render_texture) + 1;
    if (!render_target_set) {
        logger_log(LOG_WARN, "Failed to set render target, %s", SDL_GetError());
    }

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
    SDL_RenderClear(renderer);

    u08 render = SDL_RenderCopy(renderer, img -> tex, NULL, NULL) + 1;
    if (!render) {
        logger_log(LOG_WARN, "Failed rendering texture to file, %s", SDL_GetError());
    }

    void * pixels = malloc(img -> src.w * img -> src.h * SDL_BYTESPERPIXEL(format));
    if (!pixels) {
        logger_log(LOG_WARN, "Failed allocating memory for saving texture");
    }

    u08 read_pixels = SDL_RenderReadPixels(renderer, NULL, format, pixels, img -> src.w * SDL_BYTESPERPIXEL(format));
    if (read_pixels) {
        logger_log(LOG_WARN, "Failed reading pixel data, %s", SDL_GetError());
    }

    SDL_Surface * surf = SDL_CreateRGBSurfaceWithFormatFrom(pixels, img -> src.w, img -> src.h, SDL_BITSPERPIXEL(format), img -> src.w * SDL_BYTESPERPIXEL(format), format);
    if (!surf) {
        logger_log(LOG_WARN, "Failed to create a surface for saving %s", SDL_GetError());
    }

    u08 saved = IMG_SavePNG(surf, file_name) + 1;    
    if (!saved) {
        logger_log(LOG_WARN, "Failed to save %s", file_name);
    } 

    img -> serialized = 1;
}


void gsdl_deserialize_img(gsdl_img_t * img, const char * path, SDL_Renderer * renderer, list_t * texture_storage, list_t * surf_storage) {
    gsdl_load_tex(img, path, img -> src.x, img -> src.y, img -> src.w, img -> src.h, renderer, texture_storage, surf_storage);    
    img -> serialized = 0;
}


void gsdl_color_px(SDL_Surface * surf, i32 x, i32 y, u08 r, u08 g, u08 b) {
    SDL_LockSurface(surf);
    u08 * pixels = surf -> pixels;
    pixels[y * surf -> pitch + x * surf -> format -> BytesPerPixel + 0] = r;
    pixels[y * surf -> pitch + x * surf -> format -> BytesPerPixel + 1] = g;             
    pixels[y * surf -> pitch + x * surf -> format -> BytesPerPixel + 2] = b;
    // format changes from platforms abvoe is for mac
    // original one in engine.c

    //u08 * px = pixels + y * surf -> pitch + x;
    //*px = SDL_MapRGB(surf -> format, r, g, b);
    SDL_UnlockSurface(surf);
}

SDL_Color gsdl_get_px_color(SDL_Surface * surf, i32 x, i32 y) {
    SDL_Color color;
    SDL_LockSurface(surf);
    u08 * pixels = surf -> pixels;
    color.r = pixels[y * surf -> pitch + x * surf -> format -> BytesPerPixel + 0];
    color.g = pixels[y * surf -> pitch + x * surf -> format -> BytesPerPixel + 1];             
    color.b = pixels[y * surf -> pitch + x * surf -> format -> BytesPerPixel + 2];
    color.a = 255;
    // format changes from platforms abvoe is for mac
    // original one in engine.c

    //u08 * px = pixels + y * surf -> pitch + x;
    //*px = SDL_MapRGB(surf -> format, r, g, b);
    SDL_UnlockSurface(surf);
    return color;
}

void gsdl_init_particles(gsdl_particles_t * particles, u32 size, i32 delta) {
    particles -> arr = calloc(size, sizeof(gsdl_img_t));
    particles -> size = size;
    particles -> delta = delta;
}

void gsdl_update_particles(gsdl_particles_t * particles, i32 r, i32 g, i32 b, i32 a, u08 spawn, i32 cx, i32 cy, i32 w, i32 h, u08 f, i32 rad_min, i32 rad_max) {
    if (spawn) {
        for (u32 u = 0; u < particles -> size; u++) {
            particles -> arr[u].cx = randnum_gen(cx - w, cx);
            particles -> arr[u].cy = randnum_gen(cy, cy + h);
            if (r > 0 && g > 0 && b > 0 && a > 0) {
                particles -> arr[u].color[0] = r;
                particles -> arr[u].color[1] = g;
                particles -> arr[u].color[2] = b;
                particles -> arr[u].color[3] = a;
            } else {
                particles -> arr[u].color[0] = randnum_gen(0, 255);
                particles -> arr[u].color[1] = randnum_gen(0, 255);
                particles -> arr[u].color[2] = randnum_gen(0, 255);
                particles -> arr[u].color[3] = 255;
            }
            particles -> arr[u].fill = f;
            particles -> arr[u].rad = randnum_gen(rad_min, rad_max); 
        }
        particles -> initialized = 1;
    }

    if (particles -> initialized) {
        for (u32 u = 0; u < particles -> size; u++) {
            if (particles -> arr[u].rad > 0) {
                particles -> arr[u].rad += particles -> delta;
            }
        }
    }

}

void gsdl_draw_particles(gsdl_particles_t * particles, gsdl_cam_t * cam, SDL_Renderer * renderer) {
    if (particles -> initialized) {
        for (u32 u = 0; u < particles -> size; u++) {
            if (particles -> arr[u].rad > 0) {
                gsdl_circle_t new = particles -> arr[u];
                new.cx -= cam -> x;
                new.cy -= cam -> y;
                gsdl_draw_circle(&new, renderer);
            } 
        }
    }
}

void gsdl_destroy_particles(gsdl_particles_t * particles) {
    free(particles -> arr);
    particles -> size = 0;
    particles -> delta = 0;
}


void gsdl_init_grid(gsdl_grid_t * g, u16 w, u16 h, u32 s_w, u32 s_h) {
    g -> grid = calloc(w * h, sizeof(i16));
    // matrix[ i ][ j ] = array[ i * m + j ] 
    g -> size[0] = w;
    g -> size[1] = h;
    g -> actual_size = w * h;
    g -> tile_size[0] = s_w / w;
    g -> tile_size[1] = s_h / h;
}

void gsdl_set_grid_px(gsdl_grid_t * g, u32 x, u32 y, i16 val) {
    if (x < g -> size[0] && y < g -> size[1]) {
        g -> grid[y * g -> size[0] + x] = val;
    }
}

i16 gsdl_get_grid_px(gsdl_grid_t * g, u32 x, u32 y) {
    if (x < g -> size[0] && y < g -> size[1]) {
        return g -> grid[y * g -> size[0] + x];
    }
    return -1;
}
void gsdl_destroy_grid(gsdl_grid_t * g) {
    free(g -> grid);
} 

i32 gsdl_draw_grid(gsdl_grid_t * g, SDL_Renderer * renderer, void (*grid_update)(gsdl_grid_t * grid, i16 cell, SDL_Rect rect, u32 x, u32 y, SDL_Renderer * renderer), u08 draw, i32 w, i32 h, i32 _x, i32 _y, SDL_Color * _colors) {
    g -> tile_size[0] = abs(w) / g -> size[0];
    g -> tile_size[1] = abs(h) / g -> size[1];

    SDL_Rect rect;
    for (i32 y = _y; y < g -> size[1] + _y; y++) {
        for (i32 x = _x; x < g -> size[0] + _x; x++) {
            rect = (SDL_Rect) { lroundf(x * (g -> tile_size[0])), 
                                lroundf(y * (g -> tile_size[1])), 
                                lroundf(g -> tile_size[0]), 
                                lroundf(g -> tile_size[1]) }; 

            if (draw) {
                i16 px = gsdl_get_grid_px(g, x - _x, y - _y);
                if (px > -1) {
                    SDL_Color color = _colors[px];
                    gsdl_draw_rect(&rect, color.r, color.g, color.b, 255, renderer);
                }

                if (grid_update != NULL) {
                    grid_update(g, px, rect, x - _x, y - _y, renderer);
                }
            }

        }
    }

    return 1;
}



gsdl_timer_t gsdl_create_timer() {
    return (gsdl_timer_t) {0.00f, 0};
}

u32 gsdl_update_timer(gsdl_timer_t * timer, f64 ms_frame_time) {
    timer -> count += ms_frame_time;
    if (timer -> count > 1000) {
        timer -> actual_time += 1;
        timer -> count = 0;
    }
    return timer -> actual_time;
}

/*
    tips for writing and publishing:
        - find your why (motivation)
        - play to your strengths and be realistic
        - read and note take
        - find a mentor
        - broaden your horizon
        - managing fear
        - have criticism
        - mendeley for referncing
        - zotero for referencing

*/
