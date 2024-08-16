/*
** EPITECH PROJECT, 2023
** map3.c
** File description:
** map3
*/

#include "../include/my_rpg.h"

int** arrayf_map3(sfRenderWindow* window, sfEvent event, data_t* data)
{
    int **array = malloc(sizeof(int*) * 6);
    for (int i = 0; i < 6; i++) {
        array[i] = malloc(sizeof(int) * 4);
    }
    map3(array);
    map3_dos(array);
    return array;
}

void map3(int** array)
{
    array[0][0] = 0;
    array[0][1] = 0;
    array[0][2] = 1305;
    array[0][3] = 280;
    array[1][0] = 1285;
    array[1][1] = 335;
    array[1][2] = 1620;
    array[1][3] = 670;
    array[2][0] = 370;
    array[2][1] = 610;
    array[2][2] = 655;
    array[2][3] = 740;
}

void map3_dos(int** array)
{
    array[3][0] = 1025;
    array[3][1] = 290;
    array[3][2] = 1140;
    array[3][3] = 330;
    array[4][0] = 890;
    array[4][1] = 540;
    array[4][2] = 1000;
    array[4][3] = 605;
    array[5][0] = 0;
    array[5][1] = 935;
    array[5][2] = 1900;
    array[5][3] = 960;
}
