/*
** EPITECH PROJECT, 2023
** array0.c
** File description:
** array0.c
*/

#include "../include/my_rpg.h"

int** buttons_pos(sfRenderWindow* window, sfEvent event, data_t* data)
{
    int **array = malloc(sizeof(int*) * 5);
    for (int i = 0; i < 5; i++) {
        array[i] = malloc(sizeof(int) * 4);
    }
    array_pos(array);
    return array;
}

void array_pos(int** array)
{
    array[0][0] = 673;
    array[0][1] = 275;
    array[0][2] = 1260;
    array[0][3] = 471;
    array[1][0] = 673;
    array[1][1] = 536;
    array[1][2] = 1260;
    array[1][3] = 730;
    array[2][0] = 673;
    array[2][1] = 793;
    array[2][2] = 1260;
    array[2][3] = 984;
    array[3][0] = 44;
    array[3][1] = 922;
    array[3][2] = 139;
    array[3][3] = 1013;
    array[4][0] = 1800;
    array[4][1] = 924;
    array[4][2] = 1896;
    array[4][3] = 1012;
}

int is_button_pos(data_t* d)
{
    int i = 0;
    int a = d->mouse_pos.x;
    int b = d->mouse_pos.y;
    d->f1 = 0; d->f2 = 0;
    while (i < 5 && (d->f1 == 0 || d->f2 == 0)) {
        d->f1, d->f2 = 0;
        if (a >= d->array0[i][0] && a < d->array0[i][2]) {
            d->f1 = 1;
        }
        if (b >= d->array0[i][1] && b < d->array0[i][3]) {
            d->f2 = 1;
        }
        i++;
    }
    if (d->f1 == 1 && d->f2 == 1) {
        return i;
    } else {
        return -1;
    }
}
