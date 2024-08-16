/*
** EPITECH PROJECT, 2023
** map4.c
** File description:
** map4
*/

#include "../include/my_rpg.h"

int** arrayf_map4(sfRenderWindow* window, sfEvent event, data_t* data)
{
    int **array = malloc(sizeof(int*) * 11);
    for (int i = 0; i < 11; i++) {
        array[i] = malloc(sizeof(int) * 4);
    }
    map4(array);
    map4_dos(array);
    map4_tres(array);
    return array;
}

void map4(int** array)
{
    array[0][0] = 1185;
    array[0][1] = 220;
    array[0][2] = 1385;
    array[0][3] = 425;
    array[1][0] = 805;
    array[1][1] = 370;
    array[1][2] = 875;
    array[1][3] = 700;
    array[2][0] = 530;
    array[2][1] = 640;
    array[2][2] = 875;
    array[2][3] = 700;
    array[3][0] = 40;
    array[3][1] = 110;
    array[3][2] = 865;
    array[3][3] = 370;
    array[4][0] = 10;
    array[4][1] = 645;
    array[4][2] = 370;
    array[4][3] = 700;
}

void map4_dos(int** array)
{
    array[5][0] = 225;
    array[5][1] = 510;
    array[5][2] = 410;
    array[5][3] = 610;
    array[6][0] = 610;
    array[6][1] = 365;
    array[6][2] = 775;
    array[6][3] = 450;
    array[7][0] = 515;
    array[7][1] = 450;
    array[7][2] = 595;
    array[7][3] = 600;
    array[8][0] = 1055;
    array[8][1] = 910;
    array[8][2] = 1900;
    array[8][3] = 950;
}

void map4_tres(int** array)
{
    array[9][0] = 1445;
    array[9][1] = 725;
    array[9][2] = 1560;
    array[9][3] = 780;
    array[10][0] = 10;
    array[10][1] = 370;
    array[10][2] = 90;
    array[10][3] = 715;
}
