/*
** EPITECH PROJECT, 2023
** array2,c
** File description:
** array2.c
*/

#include "../include/my_rpg.h"

void array2_pos(int** array)
{
    array[0][0] = 44;
    array[0][1] = 922;
    array[0][2] = 139;
    array[0][3] = 1013;
    array[1][0] = 1799;
    array[1][1] = 924;
    array[1][2] = 1896;
    array[1][3] = 1012;
}

int** buttons_pos2(sfRenderWindow* window, sfEvent event, data_t* data)
{
    int **array = malloc(sizeof(int*) * 2);
    for (int i = 0; i < 2; i++) {
        array[i] = malloc(sizeof(int) * 4);
    }
    array2_pos(array);
    return array;
}

int is_button_pos2(data_t* d)
{
    int i = 0;
    int a = d->mouse_pos.x;
    int b = d->mouse_pos.y;
    d->f1 = 0; d->f2 = 0;
    while (i < 2 && (d->f1 == 0 || d->f2 == 0)) {
        d->f1 = 0; d->f2 = 0;
        if (a >= d->array2[i][0] && a < d->array2[i][2]) {
            d->f1 = 1;
        }
        if (b >= d->array2[i][1] && b < d->array2[i][3]) {
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
