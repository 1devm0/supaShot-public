cd ../..
gcc -c src/engine/engine.c src/engine/utils/utils.c src/main.c -std=c11 -lm -lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer
mkdir o_files
mv *.o o_files
gcc o_files/*.o -std=c11 -lm -lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer -o build/linux/game
rm -rf o_files
cd build/linux
./game