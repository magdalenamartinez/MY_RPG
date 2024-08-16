/*
** EPITECH PROJECT, 2023
** enemynpc2
** File description:
** enemynpc2
*/

#include "../include/my_rpg.h"

void depending_of_i(data_t* data, int i)
{
    if (i < 3) {
        data->enemies[i].map = 0;
        data->enemies[i].life = 3;
        data->enemies[i].initial_life = 3;
    }
    if (3 <= i && i < 5) {
        data->enemies[i].map = 1;
        data->enemies[i].life = 4;
        data->enemies[i].initial_life = 4;
    }
    if (5 <= i && i < 7) {
        data->enemies[i].map = 2;
        data->enemies[i].life = 6;
        data->enemies[i].initial_life = 6;
    }
    depending_of_i2(data, i);
}

void depending_of_i2(data_t* data, int i)
{
    if (7 <= i && i < 9) {
        data->enemies[i].map = 3;
        data->enemies[i].life = 8;
        data->enemies[i].initial_life = 8;
    }
    if (9 <= i) {
        data->enemies[i].map = 4;
        data->enemies[i].life = 15;
        data->enemies[i].initial_life = 15;
    }
}
