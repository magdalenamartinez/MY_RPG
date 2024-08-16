/*
** EPITECH PROJECT, 2023
** array
** File description:
** arra
*/

#include "../include/my_rpg.h"

int** buttons_pos7(sfRenderWindow* window, sfEvent event, data_t* data)
{
    int **array = malloc(sizeof(int*) * 2);
    for (int i = 0; i < 2; i++) {
        array[i] = malloc(sizeof(int) * 4);
    }
    array7_pos(array);
    return array;
}

void array7_pos(int ** array)
{
    array[0][0] = 397;
    array[0][1] = 774;
    array[0][2] = 705;
    array[0][3] = 875;
    array[1][0] = 1203;
    array[1][1] = 734;
    array[1][2] = 1528;
    array[1][3] = 838;
}

int is_button_pos7(data_t* d)
{
    int i = 0;
    int a = d->mouse_pos.x;
    int b = d->mouse_pos.y;
    d->f1 = 0; d->f2 = 0;
    while (i < 2 && (d->f1 == 0 || d->f2 == 0)) {
        d->f1 = 0; d->f2 = 0;
        if (a >= d->array7[i][0] && a < d->array7[i][2]) {
            d->f1 = 1;
        }
        if (b >= d->array7[i][1] && b < d->array7[i][3]) {
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

void which_button7(sfRenderWindow* window, sfEvent event, data_t* data, int pos)
{
    if (pos == -1) {
        return;
    }
    switch (pos - 1) {
        case 0:
            reset_function(window, event, data);
            newgame_f(window, event, data);
            break;
        case 1:
            quitgame_f(window, event, data);
            break;
    }
}
