/*
** EPITECH PROJECT, 2023
** sprites
** File description:
** sprites
*/

#include "../include/my_rpg.h"


void sprites_menu(sfRenderWindow* window, sfEvent event, data_t* data)
{
    sfVector2f p2 = {670, 140};
    sfVector2f pm = {600, 200};
    sfVector2f pn = {500, 670};
    sfVector2f s2 = {0.6, 0.6};
    sfVector2f s8 = {2, 2};
    sfVector2f p6 = {43, 920};
    sfVector2f p1 = {1799, 924};
    sfVector2f s5 = {1, 1};
    sfVector2f s6 = {0.8, 0.8};
    data->volumeicon = crea(sfTexture_createFromFile("c/vi.png", NULL), p6 ,s5);
    data->dialogue_sp = crea(sfTexture_createFromFile("c/d.png", NULL), pn ,s5);
    data->volumeMenu = crea(sfTexture_createFromFile("c/v.jpg", NULL), p2, s2);
    data->set0 = crea(sfTexture_createFromFile("c/set1.png", NULL), p2, s2);
    data->set1 = crea(sfTexture_createFromFile("c/set2.png", NULL), p2, s2);
    data->help_m = crea(sfTexture_createFromFile("c/help.png", NULL), p2, s2);
    data->set_m = crea(sfTexture_createFromFile("c/set.png", NULL), p1, s8);
    data->levelup = crea(sfTexture_createFromFile("c/lup.png", NULL), pm ,s5);
}

void sprites_volume(sfRenderWindow* window, sfEvent event, data_t* data)
{
    sfVector2f p3 = {800, 345}; sfVector2f p4 = {800, 545};
    sfVector2f s3 = {1.5, 1.5};
    data->v0 = crea(sfTexture_createFromFile("c/v0.jpg", NULL), p3, s3);
    data->v1 = crea(sfTexture_createFromFile("c/v1.jpg", NULL), p3, s3);
    data->v2 = crea(sfTexture_createFromFile("c/v2.jpg", NULL), p3, s3);
    data->v3 = crea(sfTexture_createFromFile("c/v3.jpg", NULL), p3, s3);
    data->v4 = crea(sfTexture_createFromFile("c/v4.jpg", NULL), p3, s3);
    data->v5 = crea(sfTexture_createFromFile("c/v5.jpg", NULL), p3, s3);
    data->v6 = crea(sfTexture_createFromFile("c/v6.jpg", NULL), p3, s3);
    data->v7 = crea(sfTexture_createFromFile("c/v7.jpg", NULL), p3, s3);
    data->v8 = crea(sfTexture_createFromFile("c/v8.jpg", NULL), p3, s3);
    data->v00 = crea(sfTexture_createFromFile("c/v0.jpg", NULL), p4, s3);
    data->v11 = crea(sfTexture_createFromFile("c/v1.jpg", NULL), p4, s3);
    data->v22 = crea(sfTexture_createFromFile("c/v2.jpg", NULL), p4, s3);
    data->v33 = crea(sfTexture_createFromFile("c/v3.jpg", NULL), p4, s3);
    data->v44 = crea(sfTexture_createFromFile("c/v4.jpg", NULL), p4, s3);
    data->v55 = crea(sfTexture_createFromFile("c/v5.jpg", NULL), p4, s3);
    data->v66 = crea(sfTexture_createFromFile("c/v6.jpg", NULL), p4, s3);
    data->v77 = crea(sfTexture_createFromFile("c/v7.jpg", NULL), p4, s3);
    data->v88 = crea(sfTexture_createFromFile("c/v8.jpg", NULL), p4, s3);
}

void rect_screen(sfRenderWindow* window, sfEvent event, data_t* data)
{
    data->icon_rect.width = 332;
    data->icon_rect.height = 237;
    data->icon_rect.left = 2201;
    data->icon_rect.top = 62;
    data->icon_pos.x = 620;
    data->icon_pos.y = 300;
    sfSprite_setTextureRect(data->cargar, data->icon_rect);
    sfSprite_setPosition(data->cargar, data->icon_pos);
}

void sprites_screen(sfRenderWindow* window, sfEvent event, data_t* data)
{
    sfVector2f p5 = {0, 0};
    sfVector2f s1 = {1, 0.97};
    sfVector2f s2 = {0.6, 0.6};
    sfVector2f s5 = {1, 1};
    sfVector2f s4 = {2, 2};
    sfVector2f s33 = {0.9, 0.7};
    sfVector2f p9 = {230, 0};
    sfVector2f s3 = { 1.85 ,1.75};
    sfVector2f zp = { 1500 , 500};
    sfVector2f zs = { 12 , 12};
    data->screen0 = crea(sfTexture_createFromFile("c/s0.png", NULL), p5, s1);
    data->castle = crea(sfTexture_createFromFile("c/cl.png", NULL), p5, s33);
    data->cargar = crea(sfTexture_createFromFile("c/link3.png", NULL), p5, s4);
    data->story0 = crea(sfTexture_createFromFile("c/s3.jpg", NULL), p5, s3);
    data->zelda = crea(sfTexture_createFromFile("c/zelda.png", NULL), zp, zs);
    data->screen1 = crea(sfTexture_createFromFile("c/map.png", NULL), p5, s5);
    data->gameover = crea(sfTexture_createFromFile("c/over.png", NULL), p9, s2);
    data->theend = crea(sfTexture_createFromFile("c/Theend.png", NULL), p9, s2);
    rect_screen(window, event, data);
}

void create_sprites(sfRenderWindow* window, sfEvent event, data_t* data)
{
    sfVector2f s4 = {5, 5};
    create_linksprites(window, event, data);
    sprites_menu(window, event, data);
    sprites_screen(window, event, data);
    sprites_clock(window, event, data);
    initialise_music(window, event, data);
    sprites_volume(window, event, data);
    data->rect2.height = 800;
    data->rect2.width = 1700;
    data->rect2.left = 0;
    data->rect2.top = 0;
    sfSprite_setScale(data->screen1, s4);
    sfSprite_setTextureRect(data->screen1, data->rect2);
}
