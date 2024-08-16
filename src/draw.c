/*
** EPITECH PROJECT, 2023
** draw.c
** File description:
** draw.c
*/

#include "../include/my_rpg.h"

void draw_firstdisplay(sfRenderWindow* window, sfEvent event, data_t* data)
{
    sfRenderWindow_drawSprite(window, data->screen1, NULL);
    which_npcs(window, event, data);
    draw_enemies(window, event, data);
    draw_animation(window, event, data);
    draw_hearts(window, event, data);
    sfRenderWindow_drawSprite(window, data->inventary, NULL);
    draw_inventary(window, event, data);
    gun_selected(window, event, data);
    draw_dialogue(window, event, data);
    sfRenderWindow_drawSprite(window, data->volumeicon, NULL);
    sfRenderWindow_drawSprite(window, data->set_m, NULL);
}

void draw_seconddisplay(sfRenderWindow* window, sfEvent event, data_t* data)
{
    if (data->lefthearts == 0 && data->display == 2) {
        sfRenderWindow_drawSprite(window, data->gameover, NULL);
    } else {
        sfRenderWindow_drawSprite(window, data->theend, NULL);
    }
}

void draw_volumethings(sfRenderWindow* window, sfEvent event, data_t* data)
{
    sfRenderWindow_drawSprite(window, data->volumeMenu, NULL);
    draw_volumebar1(window, event, data);
    draw_volumebar(window, event, data);
}

void draw_settings(sfRenderWindow* window, sfEvent event, data_t* data)
{
    if (data->display == 0 && data->charge == 0) {
        sfRenderWindow_drawSprite(window, data->set0, NULL);
    } else {
        sfRenderWindow_drawSprite(window, data->set1, NULL);
    }
}

void draw_dialogue(sfRenderWindow* window, sfEvent event, data_t* data)
{
    if (data->parler == 1) {
        sfSprite_setTextureRect(data->dialogue_sp, data->rect4);
        sfRenderWindow_drawSprite(window, data->dialogue_sp, NULL);
        draw_txt(window, event, data);
    }
}
