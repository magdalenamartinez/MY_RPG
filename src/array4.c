/*
** EPITECH PROJECT, 2023
** array4.c
** File description:
** array4.c
*/

#include "../include/my_rpg.h"

int** buttons_pos4(sfRenderWindow* window, sfEvent event, data_t* data)
{
    int **array = malloc(sizeof(int*) * 4);
    for (int i = 0; i < 4; i++) {
        array[i] = malloc(sizeof(int) * 4);
    }
    array4_pos(array);
    return array;
}

void array4_pos(int ** array)
{
    array[0][0] = 726;
    array[0][1] = 297;
    array[0][2] = 1201;
    array[0][3] = 383;
    array[1][0] = 725;
    array[1][1] = 444;
    array[1][2] = 1199;
    array[1][3] = 530;
    array[2][0] = 723;
    array[2][1] = 597;
    array[2][2] = 1200;
    array[2][3] = 685;
    array[3][0] = 1206;
    array[3][1] = 151;
    array[3][2] = 1260;
    array[3][3] = 203;
}

int is_button_pos4(data_t* d)
{
    int i = 0;
    int a = d->mouse_pos.x;
    int b = d->mouse_pos.y;
    d->f1 = 0; d->f2 = 0;
    while (i < 4 && (d->f1 == 0 || d->f2 == 0)) {
        d->f1 = 0; d->f2 = 0;
        if (a >= d->array4[i][0] && a < d->array4[i][2]) {
            d->f1 = 1;
        }
        if (b >= d->array4[i][1] && b < d->array4[i][3]) {
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
