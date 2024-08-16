/*
** EPITECH PROJECT, 2023
** draw_life.c
** File description:
** drawlife
*/

#include "../include/my_rpg.h"

void edit_lifebar(data_t* data, int i)
{
    sfVector2f vector;
    vector = data->enemies[i].position;
    vector.y -= 12;
    vector.x += 10;
    int per = (data->enemies[i].life * 100) / data->enemies[i].initial_life;
    switch (per) {
        case 0 ... 20: data->rect_lifebar.top = 59; break;
        case 21 ... 30: data->rect_lifebar.top = 52; break;
        case 31 ... 39: data->rect_lifebar.top = 45; break;
        case 40 ... 49: data->rect_lifebar.top = 38; break;
        case 50 ... 59: data->rect_lifebar.top = 31; break;
        case 60 ... 69: data->rect_lifebar.top = 24; break;
        case 70 ... 89: data->rect_lifebar.top = 17; break;
        case 90 ... 99: data->rect_lifebar.top = 10; break;
        case 100: data->rect_lifebar.top = 3; break;
    }
    sfSprite_setTextureRect(data->lifeBar, data->rect_lifebar);
    sfSprite_setPosition(data->lifeBar, vector);
}

void activ_bar(sfRenderWindow* window, sfEvent event, data_t* data, int i)
{
    if (data->enemies[i].activ == 1) {
        sfRenderWindow_drawSprite(window, data->lifeBar, NULL);
    }
    if (data->enemies[i].activ == 1) {
        data->activate_fight = 1;
    }
}
