#pragma once

#include "./engine/utils/utils.h"
#include "./engine/SDL2/SDL.h"
#include "./engine/SDL2/SDL_image.h"
#include "./engine/SDL2/SDL_mixer.h"
#include "./engine/SDL2/SDL_ttf.h"
#include "./engine/sdl_gfx/SDL2_framerate.h"
#include "./engine/sdl_gfx/SDL2_gfxPrimitives.h"
#include "./engine/sdl_gfx/SDL2_gfxPrimitives_font.h"
#include "./engine/sdl_gfx/SDL2_imageFilter.h"
#include "./engine/sdl_gfx/SDL2_rotozoom.h"
#include <string.h>
// ALWAYS USE DBG SYMBOLS especially with emscripten
// Emscripten breaks on microsoft edge
/*
    - preload-files is kinda broken, u gotta use relative paths so copy passte res folder in compilation folder
        - like if build/res and ur loading it as res, then u gotta put it in same folder as where you are building
*/

# ifdef __EMSCRIPTEN__ 
    #include <emscripten.h>
    #include <emscripten/html5.h>
# endif


typedef struct {
    // Window
    SDL_Window * window;
    SDL_Renderer * renderer;
    
    // Events
    SDL_Event event;
    const u08 * keys;
    
    // Fps
    i32 max_fps; // 1000 / max_fps for ms delay
    f64 last_step;
    f64 ms_passed;
    f64 dt;

    // Rendering
    SDL_Texture * render_texture; 
} gfx_program_t;

typedef struct {
    char * title;
    u32 texture_w;
    u32 texture_h;
    u32 window_w;
    u32 window_h;
    u32 window_flags; // SDL_WINDOW_RESIZABLE
    u32 renderer_flags; // SDL_RENDERER_ACCELERATED, SDL_RENDERER_PRESENTVSYNC
    i32 max_fps; // desired fps
} gfx_init_info_t;


u32 gfx_init(const gfx_init_info_t init, gfx_program_t * p) {
    i32 initializers = SDL_Init(SDL_INIT_EVERYTHING) + IMG_Init(IMG_INIT_PNG) 
                     + TTF_Init() + Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);
    // IMG_INIT adds some shit to the initializer, it must be 1 to fail and 0 to succeed
    if ((initializers - IMG_INIT_PNG)) clog("Failed to initialize SDL2: %d", initalizers); 
    
    p -> window = SDL_CreateWindow(init.title, SDL_WINDOWPOS_CENTERED, 
                                   SDL_WINDOWPOS_CENTERED, init.window_w, init.window_h, 
                                   init.window_flags);
    if (!p -> window) clog("Failed to make window: %s", SDL_GetError());

    p -> renderer = SDL_CreateRenderer(p -> window, -1, init.renderer_flags);    
    if (!p -> renderer) clog("Failed to make renderer: %s", SDL_GetError());

    SDL_DisplayMode mode; 
    i32 display_idx = SDL_GetWindowDisplayIndex(p -> window);
    i32 max_fps = 60;

    SDL_GetDesktopDisplayMode(display_idx, &mode);

    if (mode.refresh_rate > max_fps) max_fps = mode.refresh_rate;

    if (init.max_fps == -1) p -> max_fps = max_fps;
    else { p -> max_fps = init.max_fps;  }

    p -> render_texture = SDL_CreateTexture(p -> renderer, mode.format, SDL_TEXTUREACCESS_TARGET, init.texture_w, init.texture_h);
    // SDL_SetTextureBlendMode(p -> render_texture, SDL_BLENDMODE_BLEND);
    SDL_SetRenderTarget(p -> renderer, p -> render_texture);
    p -> last_step = SDL_GetPerformanceCounter();
    p -> dt = 1;
    return mode.format;
}

void gfx_del(gfx_program_t * p) {
    SDL_DestroyRenderer(p -> renderer);
    SDL_DestroyWindow(p -> window);
    Mix_CloseAudio();
    SDL_Quit();
}

void gfx_get_events(gfx_program_t * p) {
    SDL_PollEvent(&p -> event);
    p -> keys = SDL_GetKeyboardState(NULL);
}

// doesn't work as a macro for some reason
u08 gfx_check_key(SDL_Event e, SDL_Scancode s) {
    return e.key.keysym.scancode == s;
}


void gfx_start_render(gfx_program_t * p, u08 r, u08 g, u08 b, u08 a, SDL_Texture * render_target) {
    SDL_SetRenderTarget(p -> renderer, render_target);
    SDL_SetRenderDrawColor(p -> renderer, r, g, b, a);
    SDL_RenderClear(p -> renderer);
}

void gfx_dbg_phys_obj(uphys_obj_t * o, SDL_Renderer * r, uv2_t * scroll) {
    SDL_SetRenderDrawColor(r, 255, 255, 255, 255);

    if (scroll == NULL) {
        SDL_Rect destination = { o -> pos.x, o -> pos.y, o -> size.x, o -> size.y }; 
        // SDL_RenderDrawRect(r, &destination);
        SDL_RenderFillRect(r, &destination);
    } 

    if (scroll != NULL){
        SDL_Rect destination = { o -> pos.x - scroll -> x, o -> pos.y - scroll -> y, o -> size.x, o -> size.y }; 
        // SDL_RenderDrawRect(r, &destination);
        SDL_RenderFillRect(r, &destination);
    }
    SDL_SetRenderDrawColor(r, 0, 0, 0, 0);
}

void gfx_dbgc_phys_obj(uphys_obj_t * o, SDL_Renderer * r, uv2_t * scroll, u08 col_r, u08 col_g, u08 col_b, u08 col_a) {

    SDL_SetRenderDrawColor(r, col_r, col_g, col_b, col_a);

    if (scroll == NULL) {
        SDL_Rect destination = { o -> pos.x, o -> pos.y, o -> size.x, o -> size.y }; 
        // SDL_RenderDrawRect(r, &destination);
        SDL_RenderFillRect(r, &destination);
    } 

    if (scroll != NULL){
        SDL_Rect destination = { o -> pos.x - scroll -> x, o -> pos.y - scroll -> y, o -> size.x, o -> size.y }; 
        // SDL_RenderDrawRect(r, &destination);
        SDL_RenderFillRect(r, &destination);
    }
    SDL_SetRenderDrawColor(r, 0, 0, 0, 0);
}

// varying this stuff to make it more fun
uv2_t size = {0}; 
uv2_t max_size = {0};
uprof_t final_render_time = {0};
void gfx_end_render(gfx_program_t * p, i32 original_width, i32 original_height, f32 angle, u08 cinematic) {
    uprof_start(&final_render_time);
    i32 w;
    i32 h;
    SDL_GetWindowSize(p -> window, &w, &h);

    f32 x_scale = (f32) w/original_width;
    f32 y_scale = (f32) h/original_height;

    f32 min = min(x_scale, y_scale);

    u16 n_w = original_width * min;
    u16 n_h = original_height * min;

    i32 pos_x = 0;
    i32 pos_y = 0;
    if (n_w < w) {
        pos_x += (w - n_w) / 2;
    }
    if (n_h < h) {
        pos_y += (h - n_h) / 2;
    }

    SDL_Rect old_r = { 0, 0, original_width, original_height  };
    SDL_Rect new_r = { pos_x, pos_y, n_w, n_h  };
    uv2_t nil = {0, 0};

    if (cinematic) {
        uphys_obj_t rects;

        size.x = original_width;
        size.y = min(original_height / 8, size.y + 2);    

        uphys_obj_mk(&rects, uv2_mk(0, 0), uv2_mk(0, 0), size);
        gfx_dbgc_phys_obj(&rects, p -> renderer, &nil, 0, 0, 0, 255);

        uphys_obj_mk(&rects, uv2_mk(0, original_height - size.y), uv2_mk(0, 0), size);
        gfx_dbgc_phys_obj(&rects, p -> renderer, &nil, 0, 0, 0, 255);
    } else {
        size = (uv2_t) {0};
    }

    gfx_start_render(p, 0, 0, 0, 255, NULL);

    // gfx_dbgc_phys_obj(uphys_obj_t *o, SDL_Renderer *r, uv2_t *scroll, u08 col_r, u08 col_g, u08 col_b, u08 col_a);

    SDL_RenderCopyEx(p -> renderer, p -> render_texture, &old_r, &new_r, angle, NULL, SDL_FLIP_NONE);



    // SDL_RenderCopyEx(const double angle, const SDL_Point *center, const SDL_RendererFlip flip);

    SDL_RenderPresent(p -> renderer);
    uprof_end(&final_render_time);
}

void gfx_delay(gfx_program_t * p) {
    p -> dt = (( (f64) (SDL_GetPerformanceCounter() - p -> last_step) ) / (f64) SDL_GetPerformanceFrequency()) * 60; // 60 fps is typical run speed
    p -> ms_passed = (p -> dt / 60) * 1000; // this is possibly wrong
    
    f64 test = (((f64)(SDL_GetPerformanceCounter() - p -> last_step) ) / (f64) SDL_GetPerformanceFrequency());

    p -> last_step = SDL_GetPerformanceCounter(); 


    // vsync check
    // f64 delay = (1000.0 / p -> max_fps) - p -> ms_passed;
    // if (delay > ((1000.0 / p -> max_fps) - 3)) {
    // printf("%d\n", delay);
#ifndef __EMSCRIPTEN__
    //f32 delay = 
    // roundl(((f32) 1000.0 / (p -> max_fps + 5)) - p -> ms_passed);
    // i32 delay = (i32) (1000 / (p -> max_fps + 5)) - p -> ms_passed;
    i32 delay = (i32) ((1000 / p -> max_fps) - p -> ms_passed) - 1; 
    if (delay > 0) {
        SDL_Delay(delay);
    }
#endif
}

void gfx_set_px_color(SDL_Surface * surf, i32 x, i32 y, u08 r, u08 g, u08 b, u08 a) {
    SDL_LockSurface(surf);
    u08 * pixels = surf -> pixels;
    pixels[y * surf -> pitch + x * surf -> format -> BytesPerPixel + 0] = r;
    pixels[y * surf -> pitch + x * surf -> format -> BytesPerPixel + 1] = g;             
    pixels[y * surf -> pitch + x * surf -> format -> BytesPerPixel + 2] = b;
    pixels[y * surf -> pitch + x * surf -> format -> BytesPerPixel + 3] = a;
    // format changes from platforms abvoe is for mac
    // original one in engine.c

    //u08 * px = pixels + y * surf -> pitch + x;
    //*px = SDL_MapRGB(surf -> format, r, g, b);
    SDL_UnlockSurface(surf);
}


SDL_Color gfx_get_px_color(SDL_Surface * surf, i32 x, i32 y) {
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


SDL_PixelFormat * gfx_get_default_img_format(const char * file) {
    SDL_Surface * img = IMG_Load(file);
    u32 format = img -> format -> format;
    free(img);
    return SDL_AllocFormat(format); 
} 

SDL_Texture * gfx_load_img(const char * file, SDL_Renderer * renderer) {
    SDL_Surface * img = IMG_Load(file);
    // Set colorkey here if necessary
    // or color mods

    // SDL_SetColorKey(img, 1, 4286611584);
    #ifndef __EMSCRIPTEN__ 
        SDL_SetColorKey(img, 1, SDL_MapRGBA(img -> format, 128, 128, 128, 255));
        // -8355712
    #endif
    SDL_Texture * t = SDL_CreateTextureFromSurface(renderer, img); 
    free(img);
    return t;
}

SDL_Surface * gfx_load_surf(const char * file) {
    return IMG_Load(file);
}

void gfx_load_imgs(SDL_Texture ** imgs, u16 frames, char * prefix, SDL_Renderer * renderer) {
    char * curr_image = calloc(512, sizeof(char));
    char * final = calloc(512, sizeof(char));
    char * ext = ".png";
    char * curr_frame = calloc(12, sizeof(char));
    for (int i = 0; i < frames; i++) {
        curr_frame = ui32_to_str(i, curr_frame, 12);

        strncat(curr_image, prefix, strlen(prefix));
        strncat(curr_image, curr_frame, strlen(curr_frame));
        strncat(curr_image, ext, strlen(ext));

        // need to set it to 0 pls come back ehre
        memcpy(final, curr_image, strlen(curr_image) + 1);
        final[strlen(curr_image) + 1] = '\0';

        //imgs[i] = mk_le_img(curr_image, 0, 0, w, h);
        imgs[i] = gfx_load_img(curr_image, renderer);
        memset(curr_image, 0, strlen(curr_image)); 
    }

}

void gfx_load_lvl_imgs(SDL_Surface ** imgs, u16 lvl_num, char * prefix) {
    char * curr_image = calloc(512, sizeof(char));
    char * final = calloc(512, sizeof(char));
    char * ext = ".png";
    char * curr_frame = calloc(12, sizeof(char));
    for (int i = 0; i < lvl_num; i++) {
        curr_frame = ui32_to_str(i, curr_frame, 12);

        strncat(curr_image, prefix, strlen(prefix));
        strncat(curr_image, curr_frame, strlen(curr_frame));
        strncat(curr_image, ext, strlen(ext));

        // need to set it to 0 pls come back ehre
        memcpy(final, curr_image, strlen(curr_image) + 1);
        final[strlen(curr_image) + 1] = '\0';

        //imgs[i] = mk_le_img(curr_image, 0, 0, w, h);
        imgs[i] = gfx_load_surf(curr_image);
        printf("%p %s\n", imgs[i], final);
        memset(curr_image, 0, strlen(curr_image)); 
    }

}

/*
    - Fix for collisions:
        - Godot-style
        - Centered drawing:
            - 2 different rects, 1 for physics and 1 for drawing
            - Take center of physics and offset it for drawing
*/
void gfx_draw_phys_obj(uphys_obj_t * o, f64 rotation, SDL_Texture * img, SDL_Renderer * r, uv2_t * scroll) {
    if (scroll == NULL) {
        SDL_Rect destination = { o -> pos.x, o -> pos.y, o -> size.x, o -> size.y }; 
        SDL_RenderCopyEx(r, img, NULL, &destination, rotation, NULL, o -> flip);
    } 

    if (scroll != NULL ){
        SDL_Rect destination = { o -> pos.x - scroll -> x, o -> pos.y - scroll -> y, o -> size.x, o -> size.y }; 
        SDL_RenderCopyEx(r, img, NULL, &destination, rotation, NULL, o -> flip);
    }

}

typedef struct {
    i32 state_enum;
    u32 frames;
    f32 duration;
    u32 current_frame;
    char * prefix;
    u08 loop;
    u08 finished;
} gfx_anim_data_t;

typedef struct {
    gfx_anim_data_t * data;
    u32 state_number;
    SDL_Texture *** imgs;
    f64 time_passed; 
    i32 current_state_enum;
    i08 changed_state;
    SDL_Texture * current;
    i32 default_state;
} gfx_anim_img_t;


// data must be laid out in same order
void gfx_set_animations(gfx_anim_img_t * animated_img, SDL_Renderer * renderer) {
    animated_img -> imgs = calloc(animated_img -> state_number, sizeof(SDL_Texture**));

    for (u32 u = 0; u < animated_img -> state_number; u++) {
        animated_img -> imgs[u] = calloc(animated_img -> data[u].frames, sizeof(SDL_Texture*));
        gfx_load_imgs(animated_img -> imgs[u], animated_img -> data[u].frames, animated_img -> data[u].prefix, renderer);
    }
}

void gfx_set_animated_img_state(gfx_anim_img_t * animated_img, i32 state) {
    if (animated_img -> current_state_enum != state) {
        animated_img -> changed_state = 1;
        animated_img -> current_state_enum = state;
    }
}

void gfx_init_animated_img(gfx_anim_img_t * img, gfx_anim_data_t * data, u32 data_len, i32 default_state, SDL_Renderer * renderer) {
    img -> data = data;
    img -> state_number = data_len;
    img -> time_passed = 0;
    img -> changed_state = 1;
    gfx_set_animations(img, renderer);
    img -> default_state = default_state;
    gfx_set_animated_img_state(img, img -> default_state);
}

uprof_t a_profiler = {0};
void gfx_update_animation(gfx_anim_img_t * img, f64 dt) {
    uprof_start(&a_profiler);

    img -> time_passed += 1 * dt;
    u64 idx = 0;
    gfx_anim_data_t current = img -> data[img -> current_state_enum];

    if (img -> changed_state) {
        img -> changed_state = 0;
        img -> time_passed = 0;
        current.current_frame = 0;

        img -> data[img -> current_state_enum] = current;
        img -> current = img -> imgs[img -> current_state_enum][current.current_frame];
    }

    if (img -> time_passed > current.duration * dt) {
        if (current.frames > 1) {
            current.current_frame++;
            if (current.current_frame >= current.frames && current.loop) {
                current.current_frame = 0;
            }
            if (current.current_frame >= current.frames && !current.loop) {
                current.current_frame--;
                // current.finished = 1;
                gfx_set_animated_img_state(img, img -> default_state);
            }
            img -> data[img -> current_state_enum] = current;
            img -> current = img -> imgs[img -> current_state_enum][current.current_frame];
        } else {
            img -> current = img -> imgs[img -> current_state_enum][0];
        }
        
        img -> time_passed = 0;
    }
    uprof_end(&a_profiler);
}


void gfx_get_scaled_mouse_pos(uv2_t * pos, uv2_t win_size, uv2_t surf_size) {
    i32 x, y;
    SDL_GetMouseState(&x, &y);

    pos -> x = x / (win_size.x / surf_size.x); 
    pos -> y = y / (win_size.y / surf_size.y); 
}

void gfx_draw_circle(f32 cx, f32 cy, u32 rad, u08 r, u08 g, u08 b, u08 a, u08 fill, SDL_Renderer * renderer) {
    // https://gist.github.com/Gumichan01/332c26f6197a432db91cc4327fcabb1c
    if (rad > 0) {
        f32 x = cx;
        f32 y = cy;

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
}
/*
circle collision code from py:
    def collision(self, otherCircle):
        xDif = self.pos[0] - otherCircle.pos[0]
        yDif = self.pos[1] - otherCircle.pos[1]

        distance = math.sqrt((xDif ** 2) + (yDif ** 2))

        if distance < self.radius:
            return True
*/

// Transitions and visual effects

CHT_DEF(uphys_obj_t, lvl_tiles);
CHT_IMPL(uphys_obj_t, lvl_tiles);

CHT_DEF(SDL_Texture*, sdl_textures);
CHT_IMPL(SDL_Texture*, sdl_textures);

OCSHT_DEF(uv2_t, u16, lvl_tiles);
OCSHT_IMPL(uv2_t, sizeof(uv2_t), u16, lvl_tiles);

// to move to a chained hash table, just replace above to CHD_HT_DEF and all the tsuht_ to uchdht_
typedef struct {
    char * content; 
    uv2_t tile_size;

    u08 * new_tmap;

    uht_sdl_textures_t tile_images;
    uv2_t size;

    u32 tile_len;
    char * x_pos_str;
    char * y_pos_str;
    char * pos_str;
    uphys_obj_t * arbitrary_obj;
    uphys_obj_t * neighbors; 
    u32 current_tile; 
    uphys_obj_t * enemies;
    u32 enemy_num; 
    SDL_Texture * enemy_img;
    // store custom update function
} gfx_lvl_t;
// PHYSICS_TILES = "12345"
uv2_t gfx_load_lvl(gfx_lvl_t * l, char * PHYS_TILES, u32 PHYS_TILES_LEN, uv2_t tile_size, uv2_t surf_size, SDL_Surface * level) {
    l -> tile_size = tile_size;

   l -> arbitrary_obj = calloc(1, sizeof(uphys_obj_t));
    u32 tiles_x = surf_size.x / tile_size.x + 30;
    u32 tiles_y = surf_size.y / tile_size.y + 30;
    //uv2_t position = { 21, 25 };
    //u64 hash = uhash_id(&position);
    printf("MAKING HASH TABLE\n");
    l -> new_tmap = calloc(level -> w * level -> h, sizeof(u08));

    printf("%u %u %u %f %f %d %d\n", tiles_x, tiles_y, tiles_x * tiles_y, surf_size.x, surf_size.y, level -> w, level -> h);
    printf("NEIGHBORS ALLOCATION\n");
    l -> neighbors = calloc(tiles_x * tiles_y, sizeof(uphys_obj_t));

    l -> current_tile = 0;

    uv2_t player_pos = {39 * l -> tile_size.x, 36 * l -> tile_size.y};
    u32 tile_num = 0;

    l -> enemies = calloc(2e4, sizeof(uphys_obj_t));
    l -> enemy_num = 0;

    // ENEMY IMAGE IS SET IN MAIN
    u08 p_set = 0;
    uv2_t * p = calloc(1, sizeof(uv2_t));

    uprof_t time_loader;

    uprof_start(&time_loader);
    l -> size = (uv2_t) {0, 0};
    for (u32 y = 0; y < level -> h; y++) {
        for (u32 x = 0; x < level -> w; x++) {
            SDL_Color col = gfx_get_px_color(level, x, y);
            // printf("%d %d %d\n", col.r, col.g, col.b);

            if (col.r == 33 && col.g == 150 && col.b == 243 && !p_set) {
                player_pos.x = x * l -> tile_size.x + 1;
                player_pos.y = y * l -> tile_size.y - 1;
                p_set = 1;
            }
            if (col.r == 244 && col.g == 67 && col.b == 54) {
                uv2_t pos = { x, y };
                l -> new_tmap[x + y * level -> w] = 1; 
                // printf("%s\n", l -> pos_str);
                tile_num++;
            } else { l -> new_tmap[x + y * level -> w] = 0;  } 
            
            if (col.r == 156 && col.g == 39 && col.b == 176) {
                // printf("found enemy\n");
                uphys_obj_mk(&l -> enemies[l -> enemy_num], uv2_mk(x * l -> tile_size.x, y * l -> tile_size.y), uv2_mk(0, 0), tile_size);
                l -> enemy_num++;
            }
            // player color: 33, 150, 243
            // tiles: 244, 67, 54
            // destroy: 156, 39, 176 
            if (x > l -> size.x)  l -> size.x = x;
        }
        if (y > l -> size.y)  l -> size.y = y;
    }
    u32 found = 0;
    l -> size = (uv2_t) { level -> w, level -> h };

    uprof_end(&time_loader);
    // printf("%f %f", player_pos.x, player_pos.y);
    printf("TIMING: %f ms\n", time_loader.ms_elapsed);
    printf("TILES LOADED: %u\n", tile_num);


    return (uv2_t) player_pos;
}

uprof_t timer;

void gfx_get_tiles_around(gfx_lvl_t * lvl, uv2_t center_pos, uv2_t size) {
    i32 xpos = (i32) center_pos.x / lvl -> tile_size.x;
    i32 ypos = (i32) center_pos.y / lvl -> tile_size.y;

    i32 x_div = xpos - (2 + (i32) round(size.x / lvl -> tile_size.x));
    i32 x_div_two = xpos + (2 + (i32) round(size.x / lvl -> tile_size.x)); 

    lvl -> current_tile = 0;

    // THESE VALUES MAY CHANGE DEPENDING ON THE SIZE OF PLAYER AND TILE SIZE
    // ideally get center of player
    i32 y_div = ypos - (2 + (i32) size.y / lvl -> tile_size.y);
    i32 y_div_two = ypos + (2 + (i32) size.y / lvl -> tile_size.y); 
    // tiles checkedd = -y + y * -x + x

    // chunking
    f64 avg = 0;
    uprof_start(&timer);

    for (i32 x = x_div; x < x_div_two; x++) {
        for (i32 y = y_div; y < y_div_two; y++) {

            i32 idx = x + y * lvl -> size.x;

            if ((x >= 0 && x < lvl -> size.x) && (y >= 0 && y < lvl -> size.y)) {
                if (lvl -> new_tmap[idx]) {
                    // printf("broken\n");
                    uphys_obj_mk(&lvl -> neighbors[lvl -> current_tile], 
                                 uv2_mk(x * lvl -> tile_size.x, y * lvl -> tile_size.y), uv2_mk(0, 0), 
                                 uv2_mk(lvl -> tile_size.x, lvl -> tile_size.y));
                    lvl -> current_tile++;               
                } 

            }

        }
    }
    uprof_end(&timer);
    f32 total_tiles_checked = (x_div_two - x_div) * (y_div_two - y_div);
    // if (timer.ms_elapsed > 0.05) printf("AVG PHYSICS LOOKUP TIME: %f milliseconds\n", timer.ms_elapsed);
}

void gfx_del_tiles_around(gfx_lvl_t * lvl, uv2_t center_pos) {
    i32 xpos = (i32) center_pos.x / lvl -> tile_size.x;
    i32 ypos = (i32) center_pos.y / lvl -> tile_size.y;

    i32 x_div = xpos - 1;
    i32 x_div_two = xpos + 1; 


    // THESE VALUES MAY CHANGE DEPENDING ON THE SIZE OF PLAYER AND TILE SIZE
    // ideally get center of player
    i32 y_div = ypos - 1;
    i32 y_div_two = ypos + 1; 
    // tiles checkedd = -y + y * -x + x

    // chunking
    f64 avg = 0;
    uprof_start(&timer);


    // weird thing where world starts to loop without checking x bounds

    i32 idx = xpos + ypos * lvl -> size.x;
    if ((xpos >= 0 && xpos < lvl -> size.x) && (ypos >= 0 && ypos < lvl -> size.y)) {
        if (lvl -> new_tmap[idx]) {
            lvl -> new_tmap[idx] = 0;
        } 
    }

    /*for (i32 x = x_div; x < x_div_two; x++) {
        for (i32 y = y_div; y < y_div_two; y++) {
            i32 idx = x + y * lvl -> size.x;
            if ((x >= 0 && x < lvl -> size.x) && (y >= 0 && y < lvl -> size.y)) {
                if (lvl -> new_tmap[idx]) {
                    lvl -> new_tmap[idx] = 0;
                } 
            }
        }
    } */

    uprof_end(&timer);
    f32 total_tiles_checked = (x_div_two - x_div) * (y_div_two - y_div);
    // if (timer.ms_elapsed > 0.05) printf("AVG PHYSICS LOOKUP TIME: %f milliseconds\n", timer.ms_elapsed);
}

// display size is the surface size
//
uprof_t render_timer;
void gfx_draw_lvl(gfx_lvl_t * lvl, SDL_Renderer * renderer, uv2_t * optional, uv2_t scroll, uv2_t display_size, SDL_Texture * img) {
    i32 x_div = (i32) (scroll.x / lvl -> tile_size.x);
    i32 x_div_two = ((i32) (scroll.x + display_size.x) / lvl -> tile_size.x) + 1; 

    i32 y_div = (i32) (scroll.y / lvl -> tile_size.y);
    i32 y_div_two = ((i32) (scroll.y + display_size.y) / lvl -> tile_size.y) + 1; 
    // chunking
    //
    f64 avg = 0;

    // printf("%d\n", (x_div_two - x_div) * (y_div_two - y_div));
    // VERY USEFUL DBG INFORMATION
        // printf("%d %d\n", x_div, y_div);
    uprof_start(&render_timer);
    for (i32 x = x_div; x < x_div_two; x++) {
        for (i32 y = y_div; y < y_div_two; y++) {
            // printf("reached\n");
            i32 idx = x + y * lvl -> size.x;

            if ((x >= 0 && x < lvl -> size.x) && (y >= 0 && y < lvl -> size.y)) {
                if (lvl -> new_tmap[idx]) {
                    // printf("broken\n");
                    uphys_obj_mk(lvl -> arbitrary_obj, 
                                 uv2_mk(x * lvl -> tile_size.x, y * lvl -> tile_size.y), uv2_mk(0, 0), 
                                 uv2_mk(lvl -> tile_size.x, lvl -> tile_size.y));
                    uphys_obj_t data = *lvl -> arbitrary_obj;

                    SDL_Rect destination = { data.pos.x - scroll.x, 
                                             data.pos.y - scroll.y, 
                                             data.size.x + 2, 
                                             data.size.y + 2 
                    }; 
                    SDL_SetRenderDrawColor(renderer, 41, 41, 41, 255);
                    SDL_RenderFillRect(renderer, &destination);

                    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

                    gfx_draw_phys_obj(&data, 0, img, renderer, &scroll);

                } 

            }
        }
    }
    uprof_end(&render_timer);
    f32 total_tiles_checked = (x_div_two - x_div) * (y_div_two - y_div);
    // printf("AVG STR CONVERSION TIME: %f milliseconds\n", avg / total_tiles_checked);
    // printf("AVG RENDER LOOKUP TIME: %f milliseconds\n", render_timer.ms_elapsed);

    for (u32 u = 0; u < lvl -> enemy_num; u++) {
        gfx_dbgc_phys_obj(&lvl -> enemies[u], renderer, &scroll, 24, 25, 25, 255);
        gfx_draw_phys_obj(&lvl -> enemies[u], 0.0f, lvl -> enemy_img, renderer, &scroll);
    }
}

typedef struct {
    uv2_t pos;
    uv2_t offset_pos; // render pos
    Sint16 arrx[4];
    Sint16 arry[4];
    f32 angle;
    f32 speed;
} gfx_particle_t;

void gfx_mk_particle(gfx_particle_t * s, uv2_t pos, f32 angle, f32 speed) {
    s -> pos = pos;
    s -> angle = angle;
    s -> speed = speed;
}

/*
    - Spark Notes:
        - decreasing the number of u allows for more complete type of particles around a circle
        - random angle in full circle is 4-8
        - increasing the 2 to other numbers makess spirals
            // the fraction of M_PI allowed for the region decides where the particles can go
            // the offset is also decided by the fraction of M_PI used to offset the particles
            // not decreasing speed leads to pemrmanent particles
            f32 angle = ((f32) urandnum_gen(0, 1000) / 1000) * -M_PI * 0.25 - M_PI * 0.75;
            f32 angle = udeg_to_rad(urandnum_gen(0, 90)); // or 360
        - using the same number generated for both angle and speed makes a spiral
 
*/
// speed multiplier should be 1 typically, speed_decrement = 0.1
// spark multiplier is set to 3 by default
// for circular particles, change speed_multiplier to 0.6
// increasing speed multiplier makes sparks travel further, increasing speed decrement decreases distance
void gfx_update_particle(gfx_particle_t * s, uv2_t scroll, f64 speed_multiplier, f64 speed_decrement, f64 dt, u08 spark_pos_update, f32 spark_multiplier) {
    s -> pos.x += (cos(s -> angle) * s -> speed * speed_multiplier) * dt;
    s -> pos.y += (sin(s -> angle) * s -> speed * speed_multiplier) * dt;

    s -> offset_pos = s -> pos;
    s -> offset_pos.x -= scroll.x;
    s -> offset_pos.y -= scroll.y;

    // s -> angle += 0.1; // -> spiral creation, and changing decay can do a lot
#ifndef __EMSCRIPTEN__
    s -> speed = max(0, s -> speed - (speed_decrement * dt));
#else 
    s -> speed = fmax(0, s -> speed - (speed_decrement * dt));
#endif

    // xpos
    // why 3?
    if (spark_pos_update) {
        s -> arrx[0] = s -> pos.x + cos(s -> angle) * s -> speed * spark_multiplier - scroll.x;
        s -> arrx[1] = s -> pos.x + cos(s -> angle + M_PI * 0.5) * s -> speed * 0.5 - scroll.x;
        s -> arrx[2] = s -> pos.x + cos(s -> angle + M_PI) * s -> speed * spark_multiplier - scroll.x;
        s -> arrx[3] = s -> pos.x + cos(s -> angle - M_PI * 0.5) * s -> speed * 0.5 - scroll.x;
            // 3 = long side, 0.5 = small side
        s -> arry[0] = s -> pos.y + sin(s -> angle) * s -> speed * spark_multiplier - scroll.y;
        s -> arry[1] = s -> pos.y + sin(s -> angle + M_PI * 0.5) * s -> speed * 0.5 - scroll.y;
        s -> arry[2] = s -> pos.y + sin(s -> angle + M_PI) * s -> speed * spark_multiplier - scroll.y;
        s -> arry[3] = s -> pos.y + sin(s -> angle - M_PI * 0.5) * s -> speed * 0.5 - scroll.y;
    }

     
}

void gfx_draw_spark_particle(gfx_particle_t * s, SDL_Renderer * r, SDL_PixelFormat * format, u08 col_r, u08 col_g, u08 col_b, u08 col_a) {
    u32 color = SDL_MapRGBA(format, col_r, col_g, col_b, col_a);
    filledPolygonColor(r, s -> arrx, s -> arry, 4, color);
}


/*
NEIGHBORING_TILES = [
    (-3, 3),  (-2, 3), (-1, 3), (0, 3),  (1, 3), (2, 3), (3,  3)
    (-3, 2),  (-2, 2), (-1, 2), (0, 2),  (1, 2), (2, 2), (3,  2)
    (-3, 1),  (-2, 1), (-1, 1), (0, 1),  (1, 1), (2, 1), (3,  1)
    (-3, 0),  (-2, 0), (-1, 0), (0, 0),  (1, 0), (2, 0), (3,  0)
    (-3, -1), (-2,-1), (-1,-1), (0,-1),  (1,-1), (2,-1), (3, -1)
    (-3, -2), (-2,-2), (-1,-2), (0,-2),  (1,-2), (2,-2), (3, -2)
    (-3, -3), (-2,-3), (-1,-3), (0,-3),  (1,-3), (2,-3), (3, -3)
]

 */

/*
uv2_t NEIGHBORING_TILES[49] = { 
    {-3, 3},  {-2, 3}, {-1, 3}, {0, 3},  {1, 3}, {2, 3}, {3,  3},
    {-3, 2},  {-2, 2}, {-1, 2}, {0, 2},  {1, 2}, {2, 2}, {3,  2},
    {-3, 1},  {-2, 1}, {-1, 1}, {0, 1},  {1, 1}, {2, 1}, {3,  1},
    {-3, 0},  {-2, 0}, {-1, 0}, {0, 0},  {1, 0}, {2, 0}, {3,  0},
    {-3, -1}, {-2,-1}, {-1,-1}, {0,-1},  {1,-1}, {2,-1}, {3, -1},
    {-3, -2}, {-2,-2}, {-1,-2}, {0,-2},  {1,-2}, {2,-2}, {3, -2},
    {-3, -3}, {-2,-3}, {-1,-3}, {0,-3},  {1,-3}, {2,-3}, {3, -3}
};

uphys_obj_t tmp = {0};
void gfx_get_tiles_around(gfx_lvl_t * lvl, uv2_t pos, uv2_t scroll, SDL_Renderer * r) {
    lvl -> current_tile = 0;
    memset(lvl -> pos_str, 0, strlen(lvl -> pos_str));

    i32 x_div = (i32) (pos.x / lvl -> tile_size.x);
    i32 y_div = (i32) (pos.y / lvl -> tile_size.y);

    for (u32 u = 0; u < 49; u++) {
        // printf("%f %f\n", NEIGHBORING_TILES[u].x, NEIGHBORING_TILES[u].y);
        x_div = x_div + NEIGHBORING_TILES[u].x;
        y_div = y_div + NEIGHBORING_TILES[u].y;

        lvl -> x_pos_str = ui32_to_str(x_div, lvl -> x_pos_str, 12);
        lvl -> y_pos_str = ui32_to_str(y_div, lvl -> y_pos_str, 12); 

        strncat(lvl -> pos_str, lvl -> x_pos_str, strlen(lvl -> x_pos_str));
        strncat(lvl -> pos_str, ";", 1); 
        strncat(lvl -> pos_str, lvl -> y_pos_str, strlen(lvl -> y_pos_str));

        lvl -> pos_str[strlen(lvl -> x_pos_str) + 1 + strlen(lvl -> y_pos_str)] = '\0';
            
        uht_lvl_tiles_get(&lvl -> tmap, lvl -> pos_str, lvl -> arbitrary_obj);
        if (lvl -> arbitrary_obj != NULL) {
            // uht_sdl_textures_get(uht_sdl_textures_t *t, char *id, SDL_Texture **p);
            //
            // memcpy(&lvl -> neighbors[lvl -> current_tile], *obj[u], sizeof(uphys_obj_t));
            lvl -> neighbors[lvl -> current_tile] = *lvl -> arbitrary_obj;
            gfx_dbg_phys_obj(&lvl -> neighbors[lvl -> current_tile], r, &scroll);
            lvl -> current_tile++;
            
            // gfx_draw_phys_obj(lvl -> arbitrary_obj, 0, img, renderer, &scroll);
        }

        memset(lvl -> pos_str, 0, strlen(lvl -> pos_str));
    }
}

    void game_lvl_create(lvl_t * l, const char * path);
    void game_lvls_create(game_lvls_t * l, const char * lvls_path, u32 lvl_len, gsdl_props_t * p);
    void game_lvls_load_img(lvl_t * l, const char * img_path, u32 u);
    void game_lvl_update(gsdl_phys_obj_t * player);
    void game_lvl_render(game_lvls_t * l, gsdl_props_t * p);

*/

/**
def collision(self, otherCircle):
    xDif = self.pos[0] - otherCircle.pos[0]
    yDif = self.pos[1] - otherCircle.pos[1]

    distance = math.sqrt((xDif ** 2) + (yDif ** 2))

    if distance < self.radius:
        return True

fonts = {}
def text(text, color, size, x, y, font, surface):
    if size not in fonts:
        fonts[size] = pg.font.Font(font, size)

    surface.blit(fonts[size].render(text, False, color), (x, y))

class pge_particles:
    def __init__(self):
        self.particles = [] 
        
    def gen_particles(self, x, y, amt, offset_range: list, min_size, max_size, colors):
        random_col = 0
        if colors == -1:
            random_col = 1
        for i in range(0, amt):
            x_offset = x + random.randint(-offset_range[0], offset_range[0]) * i 
            y_offset = y + random.randint(-offset_range[1], offset_range[1]) * i
            if random_col:
                self.particles.append(pge_circle((random.randint(0, 255), random.randint(0, 255), random.randint(0, 255)), 
                                                 [x_offset, y_offset], random.randint(min_size, max_size))
                                      )
            else:
                self.particles.append(pge_circle(colors, 
                                                 [x_offset, y_offset], random.randint(min_size, max_size))
                                      )
    
    def draw(self, display, scroll):
        for i in self.particles:
            i.draw(display, scroll)
            i.radius -= 0.25


# greater speed = greater effect and size
class pge_particles:
    def __init__(self, pos: list, angle, speed):
        self.pos = pos
        self.angle = angle
        self.speed = speed
    
    def update(self):
        self.pos[0] += math.cos(self.angle) * self.speed
        self.pos[1] += math.sin(self.angle) * self.speed

        # speed is the timer
        self.speed = max(0, self.speed - 0.1)
        return not self.speed
    
    def render(self, surface, scroll):
        # go clockwise, like a cyclic quadrilateral
        render_points = [
            (self.pos[0] + math.cos(self.angle) * self.speed * 3 - scroll[0], self.pos[1] + math.sin(self.angle) * self.speed * 3 - scroll[1]),
            (self.pos[0] + math.cos(self.angle + math.pi * 0.5) * self.speed * 0.5 - scroll[0], self.pos[1] + math.sin(self.angle + math.pi * 0.5) * self.speed * 0.5 - scroll[1]),
            (self.pos[0] + math.cos(self.angle + math.pi) * self.speed * 3 - scroll[0], self.pos[1] + math.sin(self.angle + math.pi) * self.speed * 3 - scroll[1]),
            (self.pos[0] + math.cos(self.angle - math.pi * 0.5) * self.speed * 0.5 - scroll[0], self.pos[1] + math.sin(self.angle - math.pi * 0.5) * self.speed * 0.5 - scroll[1])
        ]
        pg.draw.polygon(surface, (random.randint(0, 255), random.randint(0, 255), random.randint(0, 255)), render_points)

*/


/*
SDL_Surface * gfx_create_surf(u32 w, u32 h, u08 r, u08 g, u08 b, u08 a) {
    SDL_Surface * surface = SDL_CreateRGBSurface(0, w, h, 32, 0, 0, 0, 0);
    SDL_PixelFormat * format = SDL_AllocFormat(SDL_PIXELFORMAT_RGB24);
    surface = SDL_ConvertSurface(surface, format, 0);

    for (i32 y = 0; y < h; y++) {
        for (i32 x = 0; x < w; x++) {
            gsdl_color_px(surface, x, y, r, g, b); 
        }
    } 
    
    return surface;
}

SDL_Texture * gfx_create_tex(u32 w, u32 h, u08 r, u08 g, u08 b, u08 a, SDL_Renderer * renderer) {
    SDL_Surface * surf = gsdl_create_surf(img, w, h, r, g, b, a, surf_storage);
    SDL_Texture * tex = SDL_CreateTextureFromSurface(renderer, surf);
    SDL_SetTextureBlendMode(tex, SDL_BLENDMODE_BLEND);
    SDL_SetTextureAlphaMod(tex, a);
    return tex;
}


*/
