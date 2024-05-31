
winflags = -lmingw32 -lpsapi -Lbuild/exe/lib -lSDL2main -lSDL2 -lSDL2_ttf -lSDL2_mixer -lSDL2_image -lm -lgdi32 -luser32 -lkernel32 -lopengl32 
macflags = -framework Cocoa -framework IOKit -framework CoreFoundation -framework OpenGL -framework CoreVideo -lSDL2main -lSDL2 -lSDL2_ttf -lSDL2_mixer -lSDL2_image 
linuxflags = -lm -lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer
emccflags = -s USE_SDL=2 -s USE_SDL_IMAGE=2 -s SDL2_IMAGE_FORMATS="['png']" -s USE_SDL_TTF=2 -s USE_SDL_MIXER=2 -s ALLOW_MEMORY_GROWTH=1 --preload-file res

dbg = -O0 -g
fast = -O3 -DNDEBUG
compile_lvl = $(fast)
includes = -Isrc/engine/
flags = $(includes) -std=c11 $(compile_lvl)

MAIN = src/main.c

ASSET_FILES = 0

win:
	gcc $(MAIN) $(DEP_FILES) $(flags) $(winflags) -o build/exe/game.exe

winmain:
	gcc $(MAIN) build/obj/deps.a $(flags) $(winflags) -o build/exe/game.exe

windeps:
	gcc -c ${flags} $(winflags) src/engine/utils/utils.c -o build/obj/utils.obj
	gcc -c ${flags} $(winflags) src/engine/sdl_gfx/SDL2_gfxPrimitives.c -o build/obj/gfxprim.obj
	gcc -c ${flags} $(winflags) src/engine/sdl_gfx/SDL2_framerate.c -o build/obj/frames.obj
	gcc -c ${flags} $(winflags) src/engine/sdl_gfx/SDL2_imageFilter.c -o build/obj/imgfilter.obj
	gcc -c ${flags} $(winflags) src/engine/sdl_gfx/SDL2_rotozoom.c -o build/obj/roto.obj
	ar -rc build/obj/deps.a build/obj/utils.obj build/obj/gfxprim.obj build/obj/frames.obj build/obj/imgfilter.obj build/obj/roto.obj	

# gcc -c ${flags} $(winflags) src/engine/engine.c -o build/obj/engine.obj
# add engine.obj
web: 	
	emcc $(MAIN) $(DEP_FILES) $(includes) $(emccflags) -o build/web/index.html

webmain:
	emcc $(MAIN) build/obj/deps.a $(flags) $(emccflags) -o build/web/index.html

webdeps:
	emcc -c ${flags} $(includes) $(emccflags) src/engine/utils/utils.c -o build/obj/utils.obj
	emcc -c ${flags} $(includes) $(emccflags) src/engine/sdl_gfx/SDL2_gfxPrimitives.c -o build/obj/gfxprim.obj
	emcc -c ${flags} $(includes) $(emccflags) src/engine/sdl_gfx/SDL2_framerate.c -o build/obj/frames.obj
	emcc -c ${flags} $(includes) $(emccflags) src/engine/sdl_gfx/SDL2_imageFilter.c -o build/obj/imgfilter.obj
	emcc -c ${flags} $(includes) $(emccflags) src/engine/sdl_gfx/SDL2_rotozoom.c -o build/obj/roto.obj
	emar -rc build/obj/deps.a build/obj/utils.obj build/obj/gfxprim.obj build/obj/frames.obj build/obj/imgfilter.obj build/obj/roto.obj	



clean:
	rm main.gcda

