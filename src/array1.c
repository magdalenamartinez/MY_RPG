/*
** EPITECH PROJECT, 2023
** array1.c
** File description:
** array1.c
*/

#include "../include/my_rpg.h"

int** buttons_pos1(sfRenderWindow* window, sfEvent event, data_t* data)
{
    int **array = malloc(sizeof(int*) * 5);
    for (int i = 0; i < 5; i++) {
        array[i] = malloc(sizeof(int) * 4);
    }
    array1_pos(array);
    return array;
}

void array1_pos(int ** array)
{
    array[0][0] = 710;
    array[0][1] = 328;
    array[0][2] = 772;
    array[0][3] = 391;
    array[1][0] = 1141;
    array[1][1] = 323;
    array[1][2] = 1198;
    array[1][3] = 387;
    array[2][0] = 710;
    array[2][1] = 531;
    array[2][2] = 772;
    array[2][3] = 596;
    array[3][0] = 1136;
    array[3][1] = 531;
    array[3][2] = 1205;
    array[3][3] = 596;
    array[4][0] = 1208;
    array[4][1] = 146;
    array[4][2] = 1261;
    array[4][3] = 194;
}

int is_button_pos1(data_t* d)
{
    int i = 0;
    int a = d->mouse_pos.x;
    int b = d->mouse_pos.y;
    d->f1 = 0; d->f2 = 0;
    while (i < 5 && (d->f1 == 0 || d->f2 == 0)) {
        d->f1 = 0; d->f2 = 0;
        if (a >= d->array1[i][0] && a < d->array1[i][2]) {
            d->f1 = 1;
        }
        if (b >= d->array1[i][1] && b < d->array1[i][3]) {
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
