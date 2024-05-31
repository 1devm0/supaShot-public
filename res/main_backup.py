import sys, math, random
import pygame as pg
from framework import *
from CONSTANTS import *

pge_init_pg()

window = pge_win(WINDOW_SIZE, "SNJ", pg.RESIZABLE) 
display = pg.Surface(DISPLAY_SIZE)
fader = pge_fader(DISPLAY_SIZE)
fader.set_val(40, 0)

tile_surf = pg.image.load("res/tile_two.png").convert()
tile_images = { '1' : tile_surf, '2' : tile_surf, '3' : tile_surf, '4' : tile_surf }

true_scroll = [0, 0]
scroll = [0, 0]

running = 1

player_img = pge_anim_img(PLAYER_SIZE, PLAYER_IMG_FOLDER, PLAYER_IMG_COLORKEY, PLAYER_STATES, PLAYER_STATE_LIST, scale=0)
player_body = pge_rigidbody2d(PLAYER_SIZE, 100, 100)

player_afterimages_pos = []

lvl = pge_lvl("res/maps/0", tile_images, tile_size=40)
player_body.rect.x, player_body.rect.y = lvl.get_player_pos(6)

enemy_positions = lvl.get_enemy_pos(5)
enemy_img = pge_anim_img(ENEMY_0_SIZE, ENEMY_0_IMG_FOLDER, (0, 0, 0), ENEMY_0_STATES, ENEMY_0_STATE_LIST) 
enemies = []
enemy_health = [] 
for i in enemy_positions:
    enemies.append([pge_rigidbody2d((40, 40), i[0], i[1]), random.randint(10, 30)])


mlbtn_down = 0

dash_multiplier = 1 
dash_timer = 0
jump_timer = 0
jump_count = 0

ability = pge_circle((128, 128, 255), [-10000, -1000], 0)
ability_direction = 0

counter = 0

particles = []

squares_background = []
for i in range(0, 50):
    size = random.randint(10, 30)
    surf = pg.Surface((size, size), pg.SRCALPHA)
    surf.fill((0, 100, 255, random.randint(30, 128)))
    pg.draw.rect(surf, (255, 255, 255, random.randint(0, 128)), pg.Rect(0, 0, size, size), width=1)
    surf = pg.transform.rotate(surf, random.randint(-90, -10))
    squares_background.append([surf, [random.randint(0, DISPLAY_SIZE[0]), random.randint(-DISPLAY_SIZE[1], DISPLAY_SIZE[1])], random.randint(5, 20)])


flip = 0 
state = "idle"
while running:
    ### game events
    for e in pg.event.get():
        if e.type == pg.QUIT:
            running = 0
        if e.type == pg.KEYDOWN:
            if str(e.key) in PLAYER_KEYS:
                player_body.movement[PLAYER_KEYS[str(e.key)]] = 1
            if (e.key == pg.K_w or e.key == pg.K_UP) and jump_count < 2:
                player_body.vel[1] = -9
                state = "jump"
                jump_count += 1

            if e.key == pg.K_SPACE and dash_timer == 0:
                dash_multiplier = 7
                player_afterimages_pos.clear()
            if e.key == pg.K_r:
                player_body.rect.x, player_body.rect.y = lvl.get_player_pos(6)

        if e.type == pg.KEYUP:
            if str(e.key) in PLAYER_KEYS:
                player_body.movement[PLAYER_KEYS[str(e.key)]] = 0


        if e.type == pg.MOUSEBUTTONDOWN:
            if e.button == 1:
                mlbtn_down = 1
        if e.type == pg.MOUSEBUTTONUP:
            if e.button == 1:
                mlbtn_down = 0

    ### game update
    true_scroll[0] += (player_body.rect.x - true_scroll[0] - DISPLAY_SIZE[0] / 2 + player_body.rect.w / 2) / 10
    true_scroll[1] += (player_body.rect.y - true_scroll[1] - DISPLAY_SIZE[1] / 2 + player_body.rect.h / 2) / 10 
    scroll = [round(true_scroll[0]), round(true_scroll[1])]

    mpos = get_mouse_scaled_pos(window.get_current_size(), DISPLAY_SIZE)
    mrect = pg.Rect(mpos, (1, 1))

    if dash_multiplier > 1:
        dash_timer += 1 

    if dash_timer > 6:
        dash_multiplier = 1
        dash_timer = -60 * 3

    if dash_timer < 0:
        dash_timer += 1

    # uppdating the position but key remains the same
    if mlbtn_down:
        mpos = (mpos[0] + scroll[0], mpos[1] + scroll[1])
        ability_direction = math.atan2(mpos[1] - player_body.rect.y, mpos[0] - player_body.rect.x)

        ability.pos = [player_body.rect.x + player_body.rect.w / 2, player_body.rect.y + player_body.rect.h / 2]
        ability.pos = [ability.pos[0] + math.cos(ability_direction) * 30, ability.pos[1] + math.sin(ability_direction) * 30]
        ability.color = (95 - random.randint(-10, 10), 0, 160 - random.randint(-10, 10))
        ability.radius += 0.1

    ability.pos = [ability.pos[0] + math.cos(ability_direction) * 5, ability.pos[1] + math.sin(ability_direction) * 5]
    if ability.radius > 15:
        ability.radius = 15

    # get the physics rects around, and then get the colliding tiles. after that, track down the specific tile by storing the respective ids, pop
    if ability.radius > 6:
        rectsss = lvl.phys_rects_around(ability.pos)
        ability_rect = pg.Rect((ability.pos[0] - ability.radius, ability.pos[1] - ability.radius), [ability.radius * 2, ability.radius * 2])
        positions = []
        for i in rectsss:
            if i.colliderect(ability_rect):
                for l in range(20, 30):
                    particles.append(pge_circle((random.randint(0, 255), random.randint(0, 255), random.randint(0, 255)), [i.x + random.randint(-1, 1) * l, i.y  + random.randint(-1, 1) * l], random.randint(6, 12)))
                positions.append(str(int(i.x // lvl.tile_size)) + ';' + str(int(i.y // lvl.tile_size)))
                scroll[0] += random.randint(-8, 8)
                scroll[1] += random.randint(-8, 8)

        for position in positions:
            if position in lvl.tilemap:
                try:
                    lvl.tilemap.pop(position)
                except:
                    pass
        e = 0 
        for i in enemies: 
            if i[0].rect.colliderect(ability_rect):
                enemies.pop(e)
                for l in range(20, 30):
                    particles.append(pge_circle((random.randint(0, 255), random.randint(0, 255), random.randint(0, 255)), [i[0].rect.x + random.randint(-1, 1) * l, i[0].rect.y  + random.randint(-1, 1) * l], random.randint(6, 12)))  
                scroll[0] += random.randint(-8, 8)
                scroll[1] += random.randint(-8, 8)
            e += 1
            """
/mo
            """


    for i in enemies:
        i[0].update(ENEMY_0_MOVE_SPEED * window.dt, lvl.phys_rects_around((i[0].rect.x, i[0].rect.y)))

    if ability.radius:
        counter += 1
    
    if counter > 60 * 8:
        ability = pge_circle((128, 128, 255), [0, 0], 0)
        counter = 0

    if player_body.vel[1] < 0:
        jump_timer += 1

    player_body.update(PLAYER_MOVE_SPEED * dash_multiplier * window.dt, lvl.phys_rects_around((player_body.rect.x, player_body.rect.y)))

    if player_body.collision["down"]:
        jump_timer = 0
        jump_count = 0

    if player_body.movement["right"]:
        flip = 0
    if player_body.movement["left"]:
        flip = 1

    if (player_body.movement["right"] or player_body.movement["left"]) and player_body.collision["down"]:
        state = "run"
        player_img.framerate = 6
        player_body.rect.w = 28
    else:
        if player_body.collision["down"]:
            state = "idle"
            player_img.framerate = 14
            player_body.rect.w = 18
    
    if player_body.vel[1] < 0 and player_body.collision["down"] != True:
        state = "jump"
        player_img.framerate = 300

    player_img.update(window.dt, state, flip)
    enemy_img.update(window.dt, "idle", 0)

    if dash_timer != 0 and len(player_afterimages_pos) < 5:
        img_copies = player_img.current_img
        img_copies.set_alpha(60)
        player_afterimages_pos.append((img_copies, player_body.rect.x, player_body.rect.y))
        i_x = player_body.rect.x 
        i_y = player_body.rect.y 
        for l in range(10, 20):
            particles.append(pge_circle((81, 45, 168), [i_x + random.randint(-1, 1) * l, i_y  + random.randint(-1, 1) * l], random.randint(3, 6)))

    

    ### game display update
    display.fill((135, 206, 235))

    for i in range(0, len(squares_background) - 1):
        display.blit(squares_background[i][0], squares_background[i][1])
        squares_background[i][1][1] += 1
        if squares_background[i][1][1] > DISPLAY_SIZE[1]:
            squares_background[i][1][1] = -DISPLAY_SIZE[1] + 10
    
        
    lvl.draw(display, scroll)


    for i in enemies:
        enemy_img.draw(display, (i[0].rect.x - scroll[0], i[0].rect.y - scroll[1]))
        i[0].dbg_draw(display, scroll)
        pg.draw.rect(display, (255, 50, 50), pg.Rect(i[0].rect.x - scroll[0], i[0].rect.y - scroll[1] - 10, i[1], 5))

    for i in range(0, len(player_afterimages_pos) - 1):
        l = player_afterimages_pos[i]
        if dash_timer < 0:
            l[0].set_alpha(l[0].get_alpha() - 1)
        display.blit(l[0], (l[1] - scroll[0], l[2] - scroll[1]))


    for i in particles:
        i.draw(display, scroll)
        i.radius -= 0.25     

    player_img.draw(display, (player_body.rect.x - scroll[0], player_body.rect.y - scroll[1]))
    player_body.dbg_draw(display, scroll)


    ability.draw(display, scroll)

    mssrect = mrect
    mssrect.x -= scroll[0]
    mssrect.y -= scroll[1]
    pg.draw.rect(display, (255, 255, 255), mssrect, width=1)
    fader.draw(display, (0, 0), window.dt, 255)

    window.draw(display, (0, 0), 1)

    pg.display.set_caption(str(int(window.fps.get_fps())))

pg.quit()
sys.exit()

# implement red, blue with timer