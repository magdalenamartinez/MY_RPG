/*
** EPITECH PROJECT, 2023
** pause
** File description:
** pause
*/

#include "../include/my_rpg.h"


void pause_move0(sfRenderWindow* window, sfEvent event, data_t* data)
{
    int aux = data->rect.top;
    data->rect.width = 31;
    pause_movement(window, event, data);
    sfSprite_setTextureRect(data->link, data->rect);
    data->rect.top = aux;
    data->rect.left = 5;
}

void pause_movement(sfRenderWindow* window, sfEvent event, data_t* data)
{
    switch (data->dir) {
        case 0:
            data->rect.top = 66;
            data->rect.left = 2;
        case 1:
            data->rect.top = 155;
            data->rect.left = 2;
            break;
        case 2:
            data->rect.top = 19;
            data->rect.left = 2;
            break;
        case 3:
            data->rect.top = 113;
            data->rect.left = 2;
            break;
    }
}

void reverse_change(data_t* data)
{
    switch (data->dir) {
        case 0:
            data->link_pos.x += 5;
            break;
        case 1:
            data->link_pos.x -= 5;
            break;
        case 2:
            data->link_pos.y += 5;
            break;
        case 3:
            data->link_pos.y -= 5;
            break;
    }
}

void directions_check(sfRenderWindow* window, sfEvent event, data_t* data)
{
    if (data->olddirection == data->dir) {
        data->rect.left += 31;
    } else {
        change_olddirection(window, event, data);
    }
    check_widthrect(data);
    check_direction(window, event, data);
}

void reset_function(sfRenderWindow* window, sfEvent event, data_t* data)
{
    int i = 0;
    while (i < 12) {
        data->enemies[i].color = data->colorenemy;
        i++;
    }
    sfSprite_setColor(data->link, data->color);
    initialise_values(data);
    allocate_enemies(window, event, data);
    initialise_arrays(window, event, data);
}
