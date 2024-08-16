/*
** EPITECH PROJECT, 2023
** enemy
** File description:
** enemy
*/

#include "../include/my_rpg.h"

void color_function(sfRenderWindow* window, sfEvent event, data_t* data, int i)
{
    if (data->enemies[i].change_color == 1) {
        data->enemies[i].change_color = 0;
    }
    if (data->change_color == 1) {
        sfSprite_setColor(data->link, data->color);
        data->change_color = 0;
    }
}

void first_switch(data_t* data, int i)
{
    switch (data->enemies[i].dir) {
        case 0:
            data->enemies[i].position.x += 50;
            break;
        case 1:
            data->enemies[i].position.x -= 50;
            break;
        case 2:
            data->enemies[i].position.y += 50;
            break;
        case 3:
            data->enemies[i].position.y -= 50;
            break;
    }
}

void second_switch(data_t* data, int i)
{
    switch (data->enemies[i].dir) {
        case 0:
            data->enemies[i].position.x -= 5;
            break;
        case 1:
            data->enemies[i].position.x += 5;
            break;
        case 2:
            data->enemies[i].position.y -= 5;
            break;
        case 3:
            data->enemies[i].position.y += 5;
            break;
    }
}
