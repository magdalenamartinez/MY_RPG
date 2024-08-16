/*
** EPITECH PROJECT, 2023
** array6
** File description:
** array
*/

#include "../include/my_rpg.h"

int** buttons_pos6(sfRenderWindow* window, sfEvent event, data_t* data)
{
    int **array = malloc(sizeof(int*) * 3);
    for (int i = 0; i < 3; i++) {
        array[i] = malloc(sizeof(int) * 4);
    }
    array6_pos(array);
    return array;
}

void array6_pos(int ** array)
{
    array[0][0] = 405;
    array[0][1] = 736;
    array[0][2] = 759;
    array[0][3] = 849;
    array[1][0] = 806;
    array[1][1] = 730;
    array[1][2] = 1148;
    array[1][3] = 840;
    array[2][0] = 1203;
    array[2][1] = 734;
    array[2][2] = 1528;
    array[2][3] = 838;
}

int is_button_pos6(data_t* d)
{
    int i = 0;
    int a = d->mouse_pos.x;
    int b = d->mouse_pos.y;
    d->f1 = 0; d->f2 = 0;
    while (i < 3 && (d->f1 == 0 || d->f2 == 0)) {
        d->f1 = 0; d->f2 = 0;
        if (a >= d->array6[i][0] && a < d->array6[i][2]) {
            d->f1 = 1;
        }
        if (b >= d->array6[i][1] && b < d->array6[i][3]) {
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

void which_button6(sfRenderWindow* window, sfEvent event, data_t* data, int pos)
{
    if (pos == -1) {
        return;
    }
    switch (pos - 1) {
        case 0:
            reset_function(window, event, data);
            continue_f(window, event, data);
            break;
        case 1:
            reset_function(window, event, data);
            newgame_f(window, event, data);
            break;
        case 2:
            quitgame_f(window, event, data);
            break;
    }
}
