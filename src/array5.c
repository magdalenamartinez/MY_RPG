/*
** EPITECH PROJECT, 2023
** array3.c
** File description:
** array3.c
*/

#include "../include/my_rpg.h"

int** buttons_pos5(sfRenderWindow* window, sfEvent event, data_t* data)
{
    int **array = malloc(sizeof(int*) * 1);
    for (int i = 0; i < 1; i++) {
        array[i] = malloc(sizeof(int) * 4);
    }
    array5_pos(array);
    return array;
}

void array5_pos(int ** array)
{
    array[0][0] = 1206;
    array[0][1] = 151;
    array[0][2] = 1260;
    array[0][3] = 203;
}

int is_button_pos5(data_t* d)
{
    int i = 0;
    int a = d->mouse_pos.x;
    int b = d->mouse_pos.y;
    d->f1 = 0; d->f2 = 0;
    while (i < 1 && (d->f1 == 0 || d->f2 == 0)) {
        d->f1 = 0; d->f2 = 0;
        if (a >= d->array5[i][0] && a < d->array5[i][2]) {
            d->f1 = 1;
        }
        if (b >= d->array5[i][1] && b < d->array5[i][3]) {
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

void which_button5(sfRenderWindow* window, sfEvent event, data_t* data, int pos)
{
    if (pos == -1) {
        return;
    }
    switch (pos - 1) {
        case 0:
            data->help = 0;
            break;
    }
}
