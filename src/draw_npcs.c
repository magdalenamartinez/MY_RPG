/*
** EPITECH PROJECT, 2023
** draw_npcs.c
** File description:
** draw_npcs
*/

#include "../include/my_rpg.h"

void restart_s(data_t* data, float s)
{
    if (s > 0.8) {
        sfClock_restart(data->clock);
    }
}

void draw_npcs(sfRenderWindow* window, data_t* data, int i, int max)
{
    sfVector2f v;
    sfTime t = sfClock_getElapsedTime(data->clock);
    float s = sfTime_asSeconds(t);
    while (i < max) {
        v = data->npcs[i].position;
        if (s > 0.1) {
            v.y -= 2;
            restart_s(data, s);
        }
        sfSprite_setPosition(data->people, v);
        sfSprite_setTextureRect(data->people, data->npcs[i].rect);
        sfRenderWindow_drawSprite(window, data->people, NULL);
        i++;
    }
    data->rep++;
}

void which_npcs(sfRenderWindow* window, sfEvent event, data_t* data)
{
    int i = 0; int max = 0;
    switch (data->map) {
        case 0: max = 1; break;
        case 1: i = 1; max = 3; break;
        case 2: i = 3; max = 6; break;
        case 3: i = 6; max = 8; break;
        case 4: i = 8; max = 9; break;
    }
    draw_npcs(window, data, i, max);
}

void draw_enemies(sfRenderWindow* window, sfEvent event, data_t* data)
{
    int i = 0;
    while (i < 12) {
        edit_lifebar(data, i);
        sfSprite_setPosition(data->enemies_sp, data->enemies[i].position);
        sfSprite_setTextureRect(data->enemies_sp, data->enemies[i].rect);
        if (data->enemies[i].change_color == 1) {
            sfSprite_setColor(data->enemies_sp, data->enemies[i].color);
        } else {
            sfSprite_setColor(data->enemies_sp, data->colorenemy);
        }
        if (data->enemies[i].life > 0 && data->enemies[i].map == data->map) {
            activ_bar(window, event, data, i);
            sfRenderWindow_drawSprite(window, data->enemies_sp, NULL);
        }
        i++;
    }
}

void gun_selected(sfRenderWindow* window, sfEvent event, data_t* data)
{
    switch (data->numberofgun) {
        case 0:
            data->redvector.x = 804;
            break;
        case 1:
            data->redvector.x = 864;
            break;
        case 2:
            data->redvector.x = 924;
            break;
        case 3:
            data->redvector.x = 984;
            break;
        case 4:
            data->redvector.x = 1044;
            break;
    }
    sfRectangleShape_setPosition(data->redRectangle, data->redvector);
    sfRenderWindow_drawRectangleShape(window, data->redRectangle, NULL);
}
