#include <engine.h>

typedef struct obj {
    i32 x;
    i32 y;
    char * name;
} obj_t;

i32 main(i32 argv, char ** args) {
    gsdl_props_t * editor = calloc(1, sizeof(gsdl_props_t));
    gsdl_init_info_t info = {
        "Level Editor",
        1280, 720,
        1,
        60, 1,
        0
    };
    gsdl_init(info, editor);

    obj_t * obj;
    file_info_t f = txt_file_query("res/obj.txt");
    i32 tiles = str_to_i32(&f.content[0]);

    // f.content++;
    i32 idxToDel = 0; 
    memmove(&f.content[idxToDel], &f.content[idxToDel + 1], strlen(f.content) - idxToDel);
    for (i32 i = 0; i < strlen(f.content); i++) {
        f.content[i] = f.content[i + 1];
    }

    obj = calloc(tiles, sizeof(obj_t));
    for (i32 s = 0; s < tiles; s++) {
        obj[s].name = calloc(20, sizeof(char));
    }

    for (u32 u = 0; u < tiles; u++) {
        sscanf(f.content, "%d;%d;%s", &obj[u].x, &obj[u].y, obj[u].name);
        while (f.content[0] != '\n') {
            f.content++;
        }
        f.content++;
    }

    for (u32 u = 0; u < tiles; u++) {
        printf("%d %d %s\n", obj[u].x, obj[u].y, obj[u].name);
    }



    while (editor -> running) {
        SDL_PollEvent(&editor -> event);
        switch (editor -> event.type) {
            case SDL_QUIT:
                editor -> running = 0;
                break;
            
            default: 
                break;
        }

        gsdl_start_render(editor, 255, 255, 255, 255, NULL);

        gsdl_end_render(editor);
    }
    
}