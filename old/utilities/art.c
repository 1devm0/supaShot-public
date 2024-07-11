#include <engine.h>
// fix lines disappearing
// max resolution is 128

#define SIZE 920 
#define G_W 16 
#define G_H 16

// implement creating colors
// fix problem with different surface formats changing how color is loaded
// fix problem with wrong offset

void grid_update(gsdl_grid_t * grid, i16 cell, SDL_Rect rect, u32 x, u32 y, SDL_Renderer * renderer) {
    if (cell == -1) {
        SDL_Color color = (SDL_Color) {66, 67, 67, 255};
        gsdl_draw_rect(&rect, color.r, color.g, color.b, 255, renderer);
        gsdl_draw_rect_outline(&rect, color.r - 5, color.g - 5, color.b - 5, 255, renderer);
    }

    if (cell == -2) {
        SDL_Color color = (SDL_Color) {128, 128, 128, 128};
        gsdl_draw_rect(&rect, color.r, color.g, color.b, 255, renderer);
        gsdl_draw_rect_outline(&rect, color.r - 5, color.g - 5, color.b - 5, 255, renderer);
        gsdl_set_grid_px(grid, x, y, -1);
    }

}

i32 main(i32 argv, char ** args) {
    gsdl_props_t props;
    gsdl_init_info_t information = (gsdl_init_info_t) {
        "Pixel Art", SIZE, SIZE,
         1, 60, 1, 0
    };   
    gsdl_init(information, &props);

    gsdl_grid_t grid; 
    u08 change_size = 0;
    i08 delta_size;

    gsdl_init_grid(&grid, G_W, G_H, SIZE - 200, SIZE - 200);
    memset(grid.grid, -1, sizeof(i16) * grid.actual_size);
    i32 w = 680;
    i32 h = 720;

    i32 bordered = 1;
    SDL_SetWindowBordered(props.win, bordered);
    u08 draw_tools = 1;
    
    SDL_Surface * palette = IMG_Load("res/endesga_palette.png");
    palette = SDL_ConvertSurface(palette, SDL_AllocFormat(SDL_PIXELFORMAT_RGB24), 0);

    SDL_Color px_color[64];
    memset(px_color, 0, sizeof(px_color));

    assert(palette -> w < 65 && palette -> h < 2);

    i32 col[3];
    i32 color_obj_len = palette -> w;
    for (i32 color = 0; color < palette -> w; color++) {
        px_color[color] = gsdl_get_px_color(palette, color, 0);
    }

    free(palette);

    gsdl_phys_obj_t tool_bar;
    gsdl_create_phys_obj(&tool_bar, mk_v2(SIZE - 180, 0), mk_v2(0, 0), 180, SIZE);

    gsdl_phys_obj_t * color_obj = calloc(color_obj_len, sizeof(gsdl_phys_obj_t));
    i32 x_draw = tool_bar.pos.x + 20;
    i32 y_draw = 0; 
    i32 n = 0;
    u32 size = 30;
    for (i32 u = 0; u < color_obj_len; u++) {
        if (u % 5 == 0) {
            n = 0;
            y_draw += 30;
        }
        gsdl_create_phys_obj(&color_obj[u], mk_v2(x_draw + size * n, y_draw), mk_v2(0, 0), size, size);
        n++;
    }

    i32 current_color = 0;
    
    gsdl_phys_obj_t mouse;
    gsdl_phys_obj_t mouse_two;
    i32 mx = 0, my = 0;
    gsdl_create_phys_obj(&mouse, mk_v2(0, 0), mk_v2(0, 0), grid.tile_size[0], grid.tile_size[1]);
    gsdl_create_phys_obj(&mouse_two, mk_v2(0, 0), mk_v2(0, 0), 1, 1);
    u08 drawing = 0;

    i32 x_idx = 0;
    i32 y_idx = 0;
    logger_log(LOG_SUCCESS, "working");

    // implement mouse button down record x
    // implement up stop recoridng
    // then fill in gaps
    i32 mbtn = -1;
    i32 x = 0;
    i32 y = 0;

    i32 st_x = 0;
    i32 st_y = 0;
    i32 end_x = 0;
    i32 end_y = 0;

    while (props.running) {
        mbtn = SDL_GetMouseState(&mx, &my);
        while (SDL_PollEvent(&props.event)) {
            switch (props.event.type) {
                case SDL_QUIT:
                    props.running = 0;
                    break;

                case SDL_KEYDOWN:
                    if (gsdl_check_key(props.event, SDL_SCANCODE_Q)) {
                        props.running = 0;
                    }

                    if (gsdl_check_key(props.event, SDL_SCANCODE_P)) {
                        draw_tools = !draw_tools;
                    }

                    if (gsdl_check_key(props.event, SDL_SCANCODE_E)) {
                        memset(grid.grid, -1, sizeof(i16) * grid.actual_size);
                    }

                    if (gsdl_check_key(props.event, SDL_SCANCODE_B)) {
                        bordered = !bordered;
                        SDL_SetWindowBordered(props.win, bordered);
                    }

                    if (gsdl_check_key(props.event, SDL_SCANCODE_LEFT)) {
                        x++;
                    }

                    if (gsdl_check_key(props.event, SDL_SCANCODE_RIGHT)) {
                        x--;
                    }

 
                    if (gsdl_check_key(props.event, SDL_SCANCODE_UP)) {
                        y--;
                    }

                    if (gsdl_check_key(props.event, SDL_SCANCODE_DOWN)) {
                        y++;
                    }

                    if (gsdl_check_key(props.event, SDL_SCANCODE_C)) {
                        printf("RGB: (%d %d %d)\n", px_color[current_color].r, px_color[current_color].g, px_color[current_color].b);
                    }

                    if (gsdl_check_key(props.event, SDL_SCANCODE_T)) {
                        printf("%d %d\n", mouse.w, mouse.h);
                        gsdl_create_phys_obj(&mouse, mk_v2(0, 0), mk_v2(0, 0), grid.tile_size[0] * 2, grid.tile_size[1] * 2);
                        printf("%d %d\n", mouse.w, mouse.h);
                    }

                    break;

                case SDL_MOUSEMOTION:
                    if ((mbtn & SDL_BUTTON_LMASK) || (mbtn & SDL_BUTTON_RMASK)) {
                        st_x = mx;
                        st_y = my;
                        end_x = props.event.motion.x;
                        end_y = props.event.motion.y;

                        while (st_x != end_x || st_y != end_y) {
                            if (st_x < end_x) {
                                st_x++;
                            } 

                            if (st_x > end_x) {
                                st_x--;
                            }

                            if (st_y < end_y) {
                                st_y++;
                            }

                            if (st_y > end_y) {
                                st_y--;
                            }

                            x_idx = st_x / grid.tile_size[0];
                            y_idx = st_y / grid.tile_size[1];
                            gsdl_set_grid_px(&grid, x_idx - x, y_idx - y, current_color);
                        }

                    }
                    else {
                        if (gsdl_get_grid_px(&grid, x_idx - x, y_idx - y) == -1) {
                            gsdl_set_grid_px(&grid, x_idx - x, y_idx - y, -2);
                        }
                    }


                case SDL_KEYUP:
                    change_size = 0;
                    break;

                default:
                    break;
            }
        }

        props.keys_pressed = SDL_GetKeyboardState(NULL);

        if (props.keys_pressed[SDL_SCANCODE_A]) {
            current_color = gsdl_get_grid_px(&grid, x_idx - x, y_idx - y);
        }


        if (props.keys_pressed[SDL_SCANCODE_EQUALS]) {
            w += 10;
            h += 10;
        }  
        
        if (props.keys_pressed[SDL_SCANCODE_MINUS]) {
            if (w > 0) {
                w -= 10;
            }
            if (h > 0) {
                h -= 10;   
            }
        }


        mouse.pos.x = mx; // - mouse.w / 2;
        mouse.pos.y = my; //  - mouse.h / 2;
        mouse_two.pos.x = mx;
        mouse_two.pos.y = my;
        x_idx = mouse.pos.x / grid.tile_size[0];
        y_idx = mouse.pos.y / grid.tile_size[1];


        if ((mbtn & SDL_BUTTON_LMASK)) {
            if (gsdl_phys_obj_coll_detect(mouse_two, tool_bar) && draw_tools) {
                for (u32 u = 0; u < color_obj_len; u++) {
                    if (gsdl_phys_obj_coll_detect(mouse_two, color_obj[u])) {
                        current_color = u;
                    }
                }
            }
            else {
                drawing = 1;
            }           
        }  
        if ((mbtn & SDL_BUTTON_RMASK)) {
            if (gsdl_phys_obj_coll_detect(mouse_two, tool_bar) && draw_tools) {
                for (u32 u = 0; u < color_obj_len; u++) {
                    if (gsdl_phys_obj_coll_detect(mouse_two, color_obj[u])) {
                        current_color = u;
                    }
                }
            }
            else {
                drawing = 2;
            }

        } else {
            drawing = 0;

            if (gsdl_get_grid_px(&grid, x_idx - x, y_idx - y) == -1) {
                gsdl_set_grid_px(&grid, x_idx - x, y_idx - y, -2);
            }

            /*
            mouse.pos.x = mx + mouse.w; // - mouse.w / 2;
            mouse.pos.y = my; //  - mouse.h / 2;
            x_idx = mouse.pos.x / grid.tile_size[0];
            y_idx = mouse.pos.y / grid.tile_size[1];

            if (gsdl_get_grid_px(&grid, x_idx - x, y_idx - y) == -1) {
                gsdl_set_grid_px(&grid, x_idx - x, y_idx - y, -2);
            }

            mouse.pos.x = mx; // - mouse.w / 2;
            mouse.pos.y = my + mouse.h; //  - mouse.h / 2;
            x_idx = mouse.pos.x / grid.tile_size[0];
            y_idx = mouse.pos.y / grid.tile_size[1];

            if (gsdl_get_grid_px(&grid, x_idx - x, y_idx - y) == -1) {
                gsdl_set_grid_px(&grid, x_idx - x, y_idx - y, -2);
            }

            mouse.pos.x = mx + mouse.w; // - mouse.w / 2;
            mouse.pos.y = my + mouse.h; //  - mouse.h / 2;
            x_idx = mouse.pos.x / grid.tile_size[0];
            y_idx = mouse.pos.y / grid.tile_size[1];

            if (gsdl_get_grid_px(&grid, x_idx - x, y_idx - y) == -1) {
                gsdl_set_grid_px(&grid, x_idx - x, y_idx - y, -2);
            } */
        }




        if (drawing == 1) {
            /*
            mouse.pos.x = mx;
            mouse.pos.y = my;
            x_idx = mouse.pos.x / grid.tile_size[0];
            y_idx = mouse.pos.y / grid.tile_size[1];
            */
            gsdl_set_grid_px(&grid, x_idx - x, y_idx - y, current_color);
            /*        
            mouse.pos.x = mx + mouse.w; // - mouse.w / 2;
            mouse.pos.y = my; //  - mouse.h / 2;
            x_idx = mouse.pos.x / grid.tile_size[0];
            y_idx = mouse.pos.y / grid.tile_size[1];

            gsdl_set_grid_px(&grid, x_idx - x, y_idx - y, current_color);

            mouse.pos.x = mx; // - mouse.w / 2;
            mouse.pos.y = my + mouse.h; //  - mouse.h / 2;
            x_idx = mouse.pos.x / grid.tile_size[0];
            y_idx = mouse.pos.y / grid.tile_size[1];

            gsdl_set_grid_px(&grid, x_idx - x, y_idx - y, current_color);

            mouse.pos.x = mx + mouse.w; // - mouse.w / 2;
            mouse.pos.y = my + mouse.h; //  - mouse.h / 2;
            x_idx = mouse.pos.x / grid.tile_size[0];
            y_idx = mouse.pos.y / grid.tile_size[1];

            gsdl_set_grid_px(&grid, x_idx - x, y_idx - y, current_color);
            */
        }

        if (drawing == 2) {
            if (x_idx < grid.size[0] && y_idx < grid.size[1]) {
                gsdl_set_grid_px(&grid, x_idx - x, y_idx - y, -1);
            }
        }

        SDL_SetWindowTitle(props.win, i32_to_str(gsdl_get_avg_frame_time(&props))); 

        gsdl_start_frame_time_rec(&props);
        gsdl_start_render(&props, 0, 0, 0, 255, NULL);
            gsdl_draw_grid(&grid, props.renderer, grid_update, 1, w, h, x, y, px_color);
            if (draw_tools) {
                gsdl_draw_phys_obj_rect(&tool_bar, 120, 120, 125, 255, NULL, props.renderer);
                for (i32 u = 0; u < color_obj_len; u++) {
                    col[0] = px_color[u].r;
                    col[1] = px_color[u].g;
                    col[2] = px_color[u].b;
                    gsdl_draw_phys_obj_rect(&color_obj[u], col[0], col[1], col[2], 255, NULL, props.renderer);
                    if (current_color == u) {
                        const SDL_Rect r = {
                            color_obj[u].pos.x - 2, color_obj[u].pos.y,
                            color_obj[u].w + 2, color_obj[u].h
                        };
                        gsdl_draw_rect(&r, 200, 200, 200, 255, props.renderer);
                        gsdl_draw_phys_obj_rect(&color_obj[u], col[0], col[1], col[2], 255, NULL, props.renderer);
                    }
                }
                
            }
            ///gsdl_draw_phys_obj(&render_tex, &render_tex_obj, NULL, props.renderer);
        gsdl_end_render(&props);
        gsdl_stop_frame_time_rec(&props);
    }

    SDL_Surface * surface = SDL_CreateRGBSurface(0, G_W, G_H, 32, 0, 0, 0, 0);
    surface = SDL_ConvertSurface(surface, SDL_AllocFormat(SDL_PIXELFORMAT_RGB24), 0);

    for (u32 y = 0; y < G_H; y++) {
        for (u32 x = 0; x < G_W; x++) {
            i16 curr_pixel = gsdl_get_grid_px(&grid, x, y);
            if (curr_pixel > -1) {
                SDL_Color color = px_color[curr_pixel];
                gsdl_color_px(surface, x, y, color.r, color.g, color.b);
            }
            else {
                SDL_Color color = (SDL_Color) {128, 128, 128, 128};
                gsdl_color_px(surface, x, y, color.r, color.g, color.b);
            }
        }
    }

    //SDL_SetColorKey(surface, SDL_TRUE, SDL_MapRGB(surface -> format, 100, 100, 100));
    // surface = rotozoomSurface(surface, 20, 10, 1);
    IMG_SavePNG(surface, "art.png");
    
    free(color_obj);
    //gsdl_serialize_img(&render_tex, "art.png", props.renderer);
    free(surface);
    gsdl_destroy_grid(&grid);
    gsdl_destroy(&props);
    // make some rpg like dragon city
}
