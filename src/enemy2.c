/*
** EPITECH PROJECT, 2023
** enemy2
** File description:
** enemy2
*/

#include "../include/my_rpg.h"

void move_enemy(sfRenderWindow* window, sfEvent event, data_t* data, int i)
{
    float x = data->link_pos.x - data->enemies[i].position.x;
    float y = data->link_pos.y - data->enemies[i].position.y;
    if (x >= 0 && y < 0) {
        data->enemies[i].dir = which_direction(x, y, 0);
    }
    if (x >= 0 && y >= 0) {
        data->enemies[i].dir = which_direction(x, y, 1);
    }
    if (x < 0 && y >= 0) {
        data->enemies[i].dir = which_direction(x, y, 2);
    }
    if (x < 0 && y < 0) {
        data->enemies[i].dir = which_direction(x, y, 3);
    }
}

int which_direction(float x, float y, int cuadrante)
{
    int which = 0;
    x = fabs(x);
    y = fabs(y);
    if (x > y) {
        which = switch_x(cuadrante);
    } else {
        which = switch_y(cuadrante);
    }
    return which;
}

int switch_x(int cuadrante)
{
    int dir = 0;
    switch (cuadrante) {
        case 0:
        case 1:
            dir = 1;
            break;
        case 2:
        case 3:
            dir = 0;
            break;
    }
    return dir;
}

int switch_y(int cuadrante)
{
    int dir = 0;
    switch (cuadrante) {
        case 0:
        case 3:
            dir = 2;
            break;
        case 1:
        case 2:
            dir = 3;
            break;
    }
    return dir;
}
