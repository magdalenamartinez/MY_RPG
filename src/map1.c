/*
** EPITECH PROJECT, 2023
** map1
** File description:
** map1.c
*/

#include "../include/my_rpg.h"

int** arrayf_map1(sfRenderWindow* window, sfEvent event, data_t* data)
{
    int **array = malloc(sizeof(int*) * 6);
    for (int i = 0; i < 6; i++) {
        array[i] = malloc(sizeof(int) * 4);
    }
    map1(array);
    map1_dos(array);
    return array;
}

void map1(int** array)
{
    array[0][0] = 60;
    array[0][1] = 470;
    array[0][2] = 395;
    array[0][3] = 725;
    array[1][0] = 840;
    array[1][1] = 325;
    array[1][2] = 1215;
    array[1][3] = 588;
    array[2][0] = 860;
    array[2][1] = 750;
    array[2][2] = 1205;
    array[2][3] = 975;
    array[3][0] = 910;
    array[3][1] = 590;
    array[3][2] = 1020;
    array[3][3] = 615;
}

void map1_dos(int** array)
{
    array[4][0] = 165;
    array[4][1] = 730;
    array[4][2] = 275;
    array[4][3] = 770;
    array[5][0] = 620;
    array[5][1] = 950;
    array[5][2] = 740;
    array[5][3] = 970;
}
