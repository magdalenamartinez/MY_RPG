/*
** EPITECH PROJECT, 2023
** array3.c
** File description:
** array3.c
*/

#include "../include/my_rpg.h"

int** buttons_pos3(sfRenderWindow* window, sfEvent event, data_t* data)
{
    int **array = malloc(sizeof(int*) * 3);
    for (int i = 0; i < 3; i++) {
        array[i] = malloc(sizeof(int) * 4);
    }
    array3_pos(array);
    return array;
}

void array3_pos(int ** array)
{
    array[0][0] = 727;
    array[0][1] = 370;
    array[0][2] = 1200;
    array[0][3] = 450;
    array[1][0] = 728;
    array[1][1] = 570;
    array[1][2] = 1202;
    array[1][3] = 661;
    array[2][0] = 1206;
    array[2][1] = 151;
    array[2][2] = 1260;
    array[2][3] = 203;
}

int is_button_pos3(data_t* d)
{
    int i = 0;
    int a = d->mouse_pos.x;
    int b = d->mouse_pos.y;
    d->f1 = 0; d->f2 = 0;
    while (i < 3 && (d->f1 == 0 || d->f2 == 0)) {
        d->f1 = 0; d->f2 = 0;
        if (a >= d->array3[i][0] && a < d->array3[i][2]) {
            d->f1 = 1;
        }
        if (b >= d->array3[i][1] && b < d->array3[i][3]) {
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
