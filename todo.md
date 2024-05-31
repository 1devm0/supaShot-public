### Optimizations & Fixes
- has and get functions for hassh table
- tile and level functions with repetitive calls to get
- memory usage in various parts of the engine
- string stuff
- game and web build for lower-tier OS
- Repetitively getting tiles each frame is not efficient from hash table
- Optimize storage method of current level and tile types
- Proper world representation using a spatial hash grid similar to Satoru No Jinsei
- Make sure no physics delta time problems
- fix potential memory leaks
- Fix memory allocations
- Efficient memory usage by using spritesheets instead of individual images
- String concatenations & conversions
- Custom single hash table with no string conversion 
- Hash table idx-based look up

### Actual Functionality
- Refer to foof's videos again
    - Spark
    - Course
- Aeroblaster Code + Physics Analysis
- Music & SFX
- Port to android
- Tweak:
    - Other parameters...
    - Spark parameters
    - Acceleration-based movement
- Static enemies:
    - image
    - Enemies with shooting
    - player lives:
        - if hit, live--;
    - deflectinig their bullets
- Level progression & level system:
    - More Levels
    - Level editor for making the levels = grid for pixel art
    - implement lanterns with art
    - if lantern_destroyed → progress:
        - move to next level
    - add more levels
        - at least 6 levels
        - 1 tutorial level
        - create a level editor?
- Tutorial as well
- Lives
- Make course on this game 
- Cooler particles
- Background squares

### Extra Useful Functions
- Serialization functions
    - Saving player current level
    - Saving player times
    - Engine 
- UI Library for debugging
- Proc Gen levels
- Bombs
- Quick Restart
- Merge ulib with physics for most rendering and stuff

### Code Quality 
- Fix game structure and data / variable declarations
    - code:
        - init info struct
        - animations by using enums
        - spatial hash maps
    - better code explanations
- Function structures and commenting 
- Engine.h structure   
- Make arguments more cohesive, coherent and in-line in the framework

