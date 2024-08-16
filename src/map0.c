/*
** EPITECH PROJECT, 2023
** map0.c
** File description:
** map0.c
*/

#include "../include/my_rpg.h"

int** arrayf_map0(sfRenderWindow* window, sfEvent event, data_t* data)
{
    int **array = malloc(sizeof(int*) * 5);
    for (int i = 0; i < 5; i++) {
        array[i] = malloc(sizeof(int) * 4);
    }
    map0(array);
    return array;
}

void map0(int** array)
{
    array[0][0] = 0;
    array[0][1] = 370;
    array[0][2] = 1250;
    array[0][3] = 635;
    array[1][0] = 995;
    array[1][1] = 310;
    array[1][2] = 1250;
    array[1][3] = 635;
    array[2][0] = 980;
    array[2][1] = 0;
    array[2][2] = 1255;
    array[2][3] = 190;
    array[3][0] = 325;
    array[3][1] = 215;
    array[3][2] = 415;
    array[3][3] = 295;
    array[4][0] = 615;
    array[4][1] = 935;
    array[4][2] = 745;
    array[4][3] = 960;
}
