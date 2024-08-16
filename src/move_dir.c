/*
** EPITECH PROJECT, 2023
** movedir
** File description:
** movedir
*/

#include "../include/my_rpg.h"

void change_olddirection(sfRenderWindow* window, sfEvent event, data_t* data)
{
    if (data->dir == 0) {
        data->rect.top = 211;
    }
    if (data->dir == 1) {
        data->rect.top = 273;
    }
    if (data->dir == 2) {
        data->rect.top = 182;
    }
    if (data->dir == 3) {
        data->rect.top = 242;
    }
}

void check_direction(sfRenderWindow* window, sfEvent event, data_t* data)
{
    int a = data->dir;
    if (a == 0 || a == 1 || a == 2 || a == 3) {
        sfSprite_setPosition(data->link, data->link_pos);
        sfSprite_setTextureRect(data->link, data->rect);
    }
}

void check_widthrect(data_t* data)
{
    if (data->rect.left > 145) {
        data->rect.left = 5;
    }
}

void check_pos(data_t* data)
{
    if (data->link_pos.x < 0) {
        data->link_pos.x = 0;
    }
    if (data->link_pos.y < 0) {
        data->link_pos.y = 0;
    }
    if (data->link_pos.x > 1910) {
        data->link_pos.x = 1910;
    }
    if (data->link_pos.y > 1010) {
        data->link_pos.y = 1010;
    }
}
