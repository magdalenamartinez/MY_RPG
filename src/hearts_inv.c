/*
** EPITECH PROJECT, 2023
** heartsinv
** File description:
** heartsinv
*/

#include "../include/my_rpg.h"

void draw_hearts(sfRenderWindow* window, sfEvent event, data_t* data)
{
    int i = 0;
    while (data->lefthearts / 2 > i) {
        i = draw_hearts1(window, event, data, i);
    }
    if (data->lefthearts % 2 != 0) {
        i = draw_hearts2(window, event, data, i);
    }
    while (data->numhearts / 2 > i) {
        i = draw_hearts3(window, event, data, i);
    }
    data->poshearts.x = 2;
}

int draw_hearts1(sfRenderWindow* window, sfEvent event, data_t* data, int i)
{
    data->recth.left = 33;
    data->poshearts.x += 50;
    sfSprite_setTextureRect(data->hearts, data->recth);
    sfSprite_setPosition(data->hearts, data->poshearts);
    sfRenderWindow_drawSprite(window, data->hearts, NULL);
    i++;
    return i;
}

int draw_hearts2(sfRenderWindow* window, sfEvent event, data_t* data, int i)
{
    data->poshearts.x += 50;
    data->recth.left = 17;
    sfSprite_setTextureRect(data->hearts, data->recth);
    sfSprite_setPosition(data->hearts, data->poshearts);
    sfRenderWindow_drawSprite(window, data->hearts, NULL);
    i++;
    return i;
}

int draw_hearts3(sfRenderWindow* window, sfEvent event, data_t* data, int i)
{
    data->poshearts.x += 50;
    data->recth.left = 0;
    sfSprite_setTextureRect(data->hearts, data->recth);
    sfSprite_setPosition(data->hearts, data->poshearts);
    sfRenderWindow_drawSprite(window, data->hearts, NULL);
    i++;
    return i;
}

void draw_inventary(sfRenderWindow* window, sfEvent event, data_t* data)
{
    int i = 0;
    sfVector2f pos;
    pos.y = 950;
    pos.x = 815;
    sfIntRect v;
    v.height = 20;
    v.width = 10;
    v.left = 24;
    v.top = 466;
    while (i < 5) {
        sfSprite_setTextureRect(data->gun2, v);
        sfSprite_setPosition(data->gun2, pos);
        sfRenderWindow_drawSprite(window, data->gun2, NULL);
        v.left += 14;
        pos.x += 61;
        i++;
    }
}
