### Low-level issues
- Need to add a game struct
- Animation improvements:
    - animation offsets as animated_img.state_imgs_offset[IDLE][current_idx]
    - image flipping
    - animation finished and some other improvements
    > or simply use a source rect for the original image and a different physics rect
    - clean up 
- Full hash table and cutils rewrite:
    - optimizations using SIMD
    - hash tables similar to C++ with key value pair 
    - Memory problems and leaks and actual API problems such as hash table collisions
    - unit testing properly
    - Make sure no physics delta time problems from cutils, engine.h and main.c
- Merge ulib with physics for most rendering and stuff
- UI Library for debugging
- Create a pixel art editor project
- Debug tools in-game

### Code issues
- Need to add comments throughout codebase
    - Function structures and commenting 
- Engine.h structure   
- Consistent argument type for cutils and engine
- Make arguments more cohesive, coherent and in-line in the framework

### Actual Code
- Physics rewrite
    - Static Obj and tiles
    - Dynamic obj
    - Macro-based collision handling
- Level editor write
- Physics ENtity
    - Type
    - Position
    - Size
    - Velocity
    - Collisions
    - Action
    - Animation Offset
    - Action
    - Flip
    - Last Movement: Movement that took place in a given frame
        - note that update function is inherently different with movement
        - movement takes place within a frame and then adding velocity
            - i guess movement is pre-computer within game code
        - added movement is seen as the frame movement
        - last_movement keeps track of something like the intent to move through a wall, not the resetting of the movement to 0 as it was a collision persay
```python
### Physics Entitty
class PhysicsEntity:
    def __init__(self, game, e_type, pos, size):
        self.game = game
        self.type = e_type
        self.pos = list(pos)
        self.size = size
        self.velocity = [0, 0]
        self.collisions = {'up': False, 'down': False, 'right': False, 'left': False}
        
        self.action = ''
        self.anim_offset = (-3, -3)
        self.flip = False
        self.set_action('idle')
        
        self.last_movement = [0, 0]
    
    def rect(self):
        return pygame.Rect(self.pos[0], self.pos[1], self.size[0], self.size[1])
    
    def set_action(self, action):
        if action != self.action:
            self.action = action
            self.animation = self.game.assets[self.type + '/' + self.action].copy()
        
    def update(self, tilemap, movement=(0, 0)):
        self.collisions = {'up': False, 'down': False, 'right': False, 'left': False}
        
        frame_movement = (movement[0] + self.velocity[0], movement[1] + self.velocity[1])
        
        self.pos[0] += frame_movement[0]
        entity_rect = self.rect()
        for rect in tilemap.physics_rects_around(self.pos):
            if entity_rect.colliderect(rect):
                if frame_movement[0] > 0:
                    entity_rect.right = rect.left
                    self.collisions['right'] = True
                if frame_movement[0] < 0:
                    entity_rect.left = rect.right
                    self.collisions['left'] = True
                self.pos[0] = entity_rect.x
        
        self.pos[1] += frame_movement[1]
        entity_rect = self.rect()
        for rect in tilemap.physics_rects_around(self.pos):
            if entity_rect.colliderect(rect):
                if frame_movement[1] > 0:
                    entity_rect.bottom = rect.top
                    self.collisions['down'] = True
                if frame_movement[1] < 0:
                    entity_rect.top = rect.bottom
                    self.collisions['up'] = True
                self.pos[1] = entity_rect.y
                
        if movement[0] > 0:
            self.flip = False
        if movement[0] < 0:
            self.flip = True
            
        self.last_movement = movement
        
        self.velocity[1] = min(5, self.velocity[1] + 0.1)
        
        if self.collisions['down'] or self.collisions['up']:
            self.velocity[1] = 0
            
        self.animation.update()
        
    def render(self, surf, offset=(0, 0)):
        surf.blit(pygame.transform.flip(self.animation.img(), self.flip, False), (self.pos[0] - offset[0] + self.anim_offset[0], self.pos[1] - offset[1] + self.anim_offset[1]))
      ### Particle
class Particle:
    def __init__(self, game, p_type, pos, velocity=[0, 0], frame=0):
        self.game = game
        self.type = p_type
        self.pos = list(pos)
        self.velocity = list(velocity)
        self.animation = self.game.assets['particle/' + p_type].copy()
        self.animation.frame = frame
    
    def update(self):
        kill = False
        if self.animation.done:
            kill = True
        
        self.pos[0] += self.velocity[0]
        self.pos[1] += self.velocity[1]
        
        self.animation.update()
        
        return kill
    
    def render(self, surf, offset=(0, 0)):
        img = self.animation.img()
        surf.blit(img, (self.pos[0] - offset[0] - img.get_width() // 2, self.pos[1] - offset[1] - img.get_height() // 2))
    
    ### Tilemap
AUTOTILE_MAP = {
    tuple(sorted([(1, 0), (0, 1)])): 0,
    tuple(sorted([(1, 0), (0, 1), (-1, 0)])): 1,
    tuple(sorted([(-1, 0), (0, 1)])): 2, 
    tuple(sorted([(-1, 0), (0, -1), (0, 1)])): 3,
    tuple(sorted([(-1, 0), (0, -1)])): 4,
    tuple(sorted([(-1, 0), (0, -1), (1, 0)])): 5,
    tuple(sorted([(1, 0), (0, -1)])): 6,
    tuple(sorted([(1, 0), (0, -1), (0, 1)])): 7,
    tuple(sorted([(1, 0), (-1, 0), (0, 1), (0, -1)])): 8,
}

NEIGHBOR_OFFSETS = [(-1, 0), (-1, -1), (0, -1), (1, -1), (1, 0), (0, 0), (-1, 1), (0, 1), (1, 1)]
PHYSICS_TILES = {'grass', 'stone'}
AUTOTILE_TYPES = {'grass', 'stone'}

class Tilemap:
    def __init__(self, game, tile_size=16):
        self.game = game
        self.tile_size = tile_size
        self.tilemap = {}
        self.offgrid_tiles = []
        
    def extract(self, id_pairs, keep=False):
        matches = []
        for tile in self.offgrid_tiles.copy():
            if (tile['type'], tile['variant']) in id_pairs:
                matches.append(tile.copy())
                if not keep:
                    self.offgrid_tiles.remove(tile)
                    
        for loc in self.tilemap:
            tile = self.tilemap[loc]
            if (tile['type'], tile['variant']) in id_pairs:
                matches.append(tile.copy())
                matches[-1]['pos'] = matches[-1]['pos'].copy()
                matches[-1]['pos'][0] *= self.tile_size
                matches[-1]['pos'][1] *= self.tile_size
                if not keep:
                    del self.tilemap[loc]
        
        return matches
    
    def tiles_around(self, pos):
        tiles = []
        tile_loc = (int(pos[0] // self.tile_size), int(pos[1] // self.tile_size))
        for offset in NEIGHBOR_OFFSETS:
            check_loc = str(tile_loc[0] + offset[0]) + ';' + str(tile_loc[1] + offset[1])
            if check_loc in self.tilemap:
                tiles.append(self.tilemap[check_loc])
        return tiles
    
    def save(self, path):
        f = open(path, 'w')
        json.dump({'tilemap': self.tilemap, 'tile_size': self.tile_size, 'offgrid': self.offgrid_tiles}, f)
        f.close()
        
    def load(self, path):
        f = open(path, 'r')
        map_data = json.load(f)
        f.close()
        
        self.tilemap = map_data['tilemap']
        self.tile_size = map_data['tile_size']
        self.offgrid_tiles = map_data['offgrid']
        
    def solid_check(self, pos):
        tile_loc = str(int(pos[0] // self.tile_size)) + ';' + str(int(pos[1] // self.tile_size))
        if tile_loc in self.tilemap:
            if self.tilemap[tile_loc]['type'] in PHYSICS_TILES:
                return self.tilemap[tile_loc]
    
    def physics_rects_around(self, pos):
        rects = []
        for tile in self.tiles_around(pos):
            if tile['type'] in PHYSICS_TILES:
                rects.append(pygame.Rect(tile['pos'][0] * self.tile_size, tile['pos'][1] * self.tile_size, self.tile_size, self.tile_size))
        return rects
    
    def autotile(self):
        for loc in self.tilemap:
            tile = self.tilemap[loc]
            neighbors = set()
            for shift in [(1, 0), (-1, 0), (0, -1), (0, 1)]:
                check_loc = str(tile['pos'][0] + shift[0]) + ';' + str(tile['pos'][1] + shift[1])
                if check_loc in self.tilemap:
                    if self.tilemap[check_loc]['type'] == tile['type']:
                        neighbors.add(shift)
            neighbors = tuple(sorted(neighbors))
            if (tile['type'] in AUTOTILE_TYPES) and (neighbors in AUTOTILE_MAP):
                tile['variant'] = AUTOTILE_MAP[neighbors]

    def render(self, surf, offset=(0, 0)):
        for tile in self.offgrid_tiles:
            surf.blit(self.game.assets[tile['type']][tile['variant']], (tile['pos'][0] - offset[0], tile['pos'][1] - offset[1]))
            
        for x in range(offset[0] // self.tile_size, (offset[0] + surf.get_width()) // self.tile_size + 1):
            for y in range(offset[1] // self.tile_size, (offset[1] + surf.get_height()) // self.tile_size + 1):
                loc = str(x) + ';' + str(y)
                if loc in self.tilemap:
                    tile = self.tilemap[loc]
                    surf.blit(self.game.assets[tile['type']][tile['variant']], (tile['pos'][0] * self.tile_size - offset[0], tile['pos'][1] * self.tile_size - offset[1]))  
                ### Level Editor
                
RENDER_SCALE = 2.0

class Editor:
    def __init__(self):
        pygame.init()

        pygame.display.set_caption('editor')
        self.screen = pygame.display.set_mode((640, 480))
        self.display = pygame.Surface((320, 240))

        self.clock = pygame.time.Clock()
        
        self.assets = {
            'decor': load_images('tiles/decor'),
            'grass': load_images('tiles/grass'),
            'large_decor': load_images('tiles/large_decor'),
            'stone': load_images('tiles/stone'),
            'spawners': load_images('tiles/spawners'),
        }
        
        self.movement = [False, False, False, False]
        
        self.tilemap = Tilemap(self, tile_size=16)
        
        try:
            self.tilemap.load('map.json')
        except FileNotFoundError:
            pass
        
        self.scroll = [0, 0]
        
        self.tile_list = list(self.assets)
        self.tile_group = 0
        self.tile_variant = 0
        
        self.clicking = False
        self.right_clicking = False
        self.shift = False
        self.ongrid = True
        
    def run(self):
        while True:
            self.display.fill((0, 0, 0))
            
            self.scroll[0] += (self.movement[1] - self.movement[0]) * 2
            self.scroll[1] += (self.movement[3] - self.movement[2]) * 2
            render_scroll = (int(self.scroll[0]), int(self.scroll[1]))
            
            self.tilemap.render(self.display, offset=render_scroll)
            
            current_tile_img = self.assets[self.tile_list[self.tile_group]][self.tile_variant].copy()
            current_tile_img.set_alpha(100)
            
            mpos = pygame.mouse.get_pos()
            mpos = (mpos[0] / RENDER_SCALE, mpos[1] / RENDER_SCALE)
            tile_pos = (int((mpos[0] + self.scroll[0]) // self.tilemap.tile_size), int((mpos[1] + self.scroll[1]) // self.tilemap.tile_size))
            
            if self.ongrid:
                self.display.blit(current_tile_img, (tile_pos[0] * self.tilemap.tile_size - self.scroll[0], tile_pos[1] * self.tilemap.tile_size - self.scroll[1]))
            else:
                self.display.blit(current_tile_img, mpos)
            
            if self.clicking and self.ongrid:
                self.tilemap.tilemap[str(tile_pos[0]) + ';' + str(tile_pos[1])] = {'type': self.tile_list[self.tile_group], 'variant': self.tile_variant, 'pos': tile_pos}
            if self.right_clicking:
                tile_loc = str(tile_pos[0]) + ';' + str(tile_pos[1])
                if tile_loc in self.tilemap.tilemap:
                    del self.tilemap.tilemap[tile_loc]
                for tile in self.tilemap.offgrid_tiles.copy():
                    tile_img = self.assets[tile['type']][tile['variant']]
                    tile_r = pygame.Rect(tile['pos'][0] - self.scroll[0], tile['pos'][1] - self.scroll[1], tile_img.get_width(), tile_img.get_height())
                    if tile_r.collidepoint(mpos):
                        self.tilemap.offgrid_tiles.remove(tile)
            
            self.display.blit(current_tile_img, (5, 5))
            
            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    pygame.quit()
                    sys.exit()
                    
                if event.type == pygame.MOUSEBUTTONDOWN:
                    if event.button == 1:
                        self.clicking = True
                        if not self.ongrid:
                            self.tilemap.offgrid_tiles.append({'type': self.tile_list[self.tile_group], 'variant': self.tile_variant, 'pos': (mpos[0] + self.scroll[0], mpos[1] + self.scroll[1])})
                    if event.button == 3:
                        self.right_clicking = True
                    if self.shift:
                        if event.button == 4:
                            self.tile_variant = (self.tile_variant - 1) % len(self.assets[self.tile_list[self.tile_group]])
                        if event.button == 5:
                            self.tile_variant = (self.tile_variant + 1) % len(self.assets[self.tile_list[self.tile_group]])
                    else:
                        if event.button == 4:
                            self.tile_group = (self.tile_group - 1) % len(self.tile_list)
                            self.tile_variant = 0
                        if event.button == 5:
                            self.tile_group = (self.tile_group + 1) % len(self.tile_list)
                            self.tile_variant = 0
                if event.type == pygame.MOUSEBUTTONUP:
                    if event.button == 1:
                        self.clicking = False
                    if event.button == 3:
                        self.right_clicking = False
                        
                if event.type == pygame.KEYDOWN:
                    if event.key == pygame.K_a:
                        self.movement[0] = True
                    if event.key == pygame.K_d:
                        self.movement[1] = True
                    if event.key == pygame.K_w:
                        self.movement[2] = True
                    if event.key == pygame.K_s:
                        self.movement[3] = True
                    if event.key == pygame.K_g:
                        self.ongrid = not self.ongrid
                    if event.key == pygame.K_t:
                        self.tilemap.autotile()
                    if event.key == pygame.K_o:
                        self.tilemap.save('map.json')
                    if event.key == pygame.K_LSHIFT:
                        self.shift = True
                if event.type == pygame.KEYUP:
                    if event.key == pygame.K_a:
                        self.movement[0] = False
                    if event.key == pygame.K_d:
                        self.movement[1] = False
                    if event.key == pygame.K_w:
                        self.movement[2] = False
                    if event.key == pygame.K_s:
                        self.movement[3] = False
                    if event.key == pygame.K_LSHIFT:
                        self.shift = False
            
            self.screen.blit(pygame.transform.scale(self.display, self.screen.get_size()), (0, 0))
            pygame.display.update()
            self.clock.tick(60)

Editor().run()  



NEIGHBORING_TILES = [
    (-2, 2), (-1, 2), (0, 2),  (1, 2), (2, 2),
    (-2, 1), (-1, 1), (0, 1),  (1, 1), (2, 1),
    (-2, 0), (-1, 0), (0, 0),  (1, 0), (2, 0),
    (-2,-1), (-1,-1), (0,-1),  (1,-1), (2,-1),
    (-2,-2), (-1,-2), (0,-2),  (1,-2), (2,-2)
]
PHYSICS_TILES = {'1', '2', '3', '4'}


class pge_lvl:
    def __init__(self, filename, tile_images : dict, tile_size=8):
        self.lvl = load_map(filename)
        self.tile_size = tile_size
        self.tilemap = {}
        self.offgrid_tiles = []
        self.tile_images = tile_images

        y_pos = 0
        for y in self.lvl:
            x_pos = 0
            for x in y:
                if x in PHYSICS_TILES:
                    self.tilemap[str(x_pos) + ';' + str(y_pos)] = {'type' : x, 'pos' : [x_pos, y_pos]}
                x_pos += 1
            y_pos += 1

    def get_player_pos(self, player_tile_num):
        y_pos = 0
        for y in self.lvl:
            x_pos = 0
            for x in y:
                if x == str(player_tile_num):
                    return (x_pos * self.tile_size, y_pos * self.tile_size) 
                x_pos += 1
            y_pos += 1

    def get_enemy_pos(self, enemy_tile_num):
        positions = []
        y_pos = 0
        for y in self.lvl:
            x_pos = 0
            for x in y:
                if x == str(enemy_tile_num):
                    positions.append([x_pos * self.tile_size, y_pos * self.tile_size]) 
                x_pos += 1
            y_pos += 1
        return positions

    def get_tiles_around(self, pos):
        tiles = []
        n_pos = [int(pos[0] // self.tile_size), int(pos[1] // self.tile_size)]
        for offset in NEIGHBORING_TILES:
            check_loc = str(n_pos[0] + offset[0]) + ';' + str(n_pos[1] + offset[1])
            if check_loc in self.tilemap:
                tiles.append(self.tilemap[check_loc])
        return tiles
    
    def phys_rects_around(self, pos):
        rects = []
        for t in self.get_tiles_around(pos):
            if t['type'] in PHYSICS_TILES:
                rects.append(pg.Rect(t['pos'][0] * self.tile_size, t['pos'][1] * self.tile_size, self.tile_size, self.tile_size))
        return rects


    def delete_tiles_around_position(self, rect):
        rects_around = self.phys_rects_around([rect.x, rect.y])
        raw_positions = []
        for i in rects_around:
            if i.colliderect(rect):
                raw_positions.append([i.x, i.y])
                try: 
                    pos_string_data = str(int(i.x // self.tile_size)) + ';' +  str(int(i.y // self.tile_size))
                    self.tilemap.pop(pos_string_data)
                except:
                    print("Tile not found")
        
        return raw_positions

    def draw(self, display, scroll):
        for t in self.offgrid_tiles:
            display.blit(self.tile_images[t['type']], (t['pos'][0] - scroll[0], t['pos'][1] - scroll[1])) 

        for x in range(scroll[0] // self.tile_size, (scroll[0] + display.get_width()) // self.tile_size + 1):
            for y in range(scroll[1] // self.tile_size, (scroll[1] + display.get_height()) // self.tile_size + 1):
                loc = str(x) + ";" + str(y) 
                if loc in self.tilemap:
                    t = self.tilemap[loc]
                    rect = pg.Rect(t['pos'][0] * self.tile_size - scroll[0], t['pos'][1] * self.tile_size - scroll[1], 32, 32)
                    display.blit(self.tile_images[t['type']], (t['pos'][0] * self.tile_size - scroll[0], t['pos'][1] * self.tile_size - scroll[1])) 


# greater speed = greater effect and size
class pge_sparks:
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


class pge_circle:
    def __init__(self, color, pos, radius):
        self.color = color
        self.pos = pos
        self.radius = radius

    def draw(self, surf, scroll):
        pg.draw.circle(surf, (255, 255, 255), (self.pos[0] - scroll[0], self.pos[1] - scroll[1]), self.radius + 1)
        pg.draw.circle(surf, self.color, (self.pos[0] - scroll[0], self.pos[1] - scroll[1]), self.radius)  

    def collision(self, otherCircle):
        xDif = self.pos[0] - otherCircle.pos[0]
        yDif = self.pos[1] - otherCircle.pos[1]

        distance = math.sqrt((xDif ** 2) + (yDif ** 2))

        if distance < self.radius:
            return True


class pge_fader:
    def __init__(self, size):
        self.fade = 0
        self.surf = pg.Surface(size)
        self.surf.fill((0, 0, 0))
        self.fade = int 
        self.alpha = int
        self.delta = int
        self.desired = int
    
    def set_val(self, delta, fade=0):
        self.fade = fade
        # fade in
        if self.fade == 0:
            self.alpha = 255
            self.delta = -delta 
            self.desired = 0
            self.surf.set_alpha(self.alpha)
        # fade out
        if self.fade == 1:
            self.alpha = 0
            self.delta = delta
            self.desired = 255
            self.surf.set_alpha(self.alpha)


    def draw(self, screen, pos, dt, start_fade=0):
        if start_fade:
            if self.alpha != self.desired:
                self.alpha += self.delta * dt
                self.surf.set_alpha(self.alpha)
                screen.blit(self.surf, pos)
            else:
                start_fade = 0


"""

PLAYER_IMG_FOLDER = "res/player/"
PLAYER_STATES = 3
PLAYER_STATE_LIST = [("idle", 1), ("run", 2), ("jump", 1)]
PLAYER_IMG_COLORKEY = (128, 128, 128, 255)
PLAYER_SIZE = (16, 16)
PLAYER_SPAWN_POS = (130, 656)
"""


# states list also includes whether to loop or not
class pge_anim_img:
    def __init__(self, size : tuple, img_folder, colorkey, number_of_states, states_list, framerate=30, scale=0):
        self.animated_imgs = {}
        self.states_loop = {}
        self.individual_frame_durations = {}
        self.colorkey = colorkey
        for i in range(0, number_of_states):
            # adding the key into the dictionary
            self.animated_imgs[states_list[i][0]] = []
            # adding all the images 
            for n in range(0, states_list[i][1]):
                # load from folder, i.e res/player/idle/0.png
                img = pg.image.load(img_folder + states_list[i][0] + "/" + str(n) + ".png").convert_alpha()
                if scale:
                    img = pg.transform.scale(img, size)
                ## adding final modified image to the hash table
                self.animated_imgs[states_list[i][0]].append(img)
                self.states_loop[states_list[i][0]] = states_list[i][2]
                self.individual_frame_durations[states_list[i][0]] = states_list[i][3]
                # self.animated_imgs[states_list[i][0]].append()
        self.current_img = None
        self.state = None 
        self.frames_passed = 0
        self.current_frame = 0
        self.flipped = 0
        self.done = 0
        # how many frames 1 image has to be displayed for

    def set_state(self, new_state):
        if self.state != new_state:
            self.state = new_state
            self.current_frame = 0

    def reset_finished_animation(self, state):
        if self.done == 1:
            self.set_state(state)
            self.done = 0
            return 1

    def update(self, dt, state, flipped):
        self.set_state(state)
        self.flipped = flipped

        self.frames_passed += 1    

        if self.frames_passed > self.individual_frame_durations[state]:
            self.frames_passed = 0
            if self.current_frame < len(self.animated_imgs[self.state]) - 1:
                self.current_frame += 1
            else:
                if self.states_loop[state] == 1:
                    self.current_frame = 0
                else:
                    self.current_frame = self.current_frame
                    self.done = 1
        
        self.current_img = (self.animated_imgs[self.state][self.current_frame])
        self.current_img = pg.transform.flip(self.current_img, self.flipped, 0)

    def draw_rotated(self, display, topleft_pos, angle, colorkey):
        rotated_image = pg.transform.rotate(self.current_img, angle)
        rotated_image.set_colorkey(colorkey)
        new_rect = rotated_image.get_rect(center = self.current_img.get_rect(topleft = topleft_pos).center)

        display.blit(rotated_image, new_rect.topleft)

    def draw(self, display, pos):
        self.current_img.set_colorkey(self.colorkey)
        display.blit(self.current_img, pos)


```
