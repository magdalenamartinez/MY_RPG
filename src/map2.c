/*
** EPITECH PROJECT, 2023
** map2.c
** File description:
** map2.c
*/

#include "../include/my_rpg.h"

int** arrayf_map2(sfRenderWindow* window, sfEvent event, data_t* data)
{
    int **array = malloc(sizeof(int*) * 10);
    for (int i = 0; i < 10; i++) {
        array[i] = malloc(sizeof(int) * 4);
    }
    map2(array);
    map2_dos(array);
    return array;
}

void map2(int** array)
{
    array[0][0] = 820;
    array[0][1] = 0;
    array[0][2] = 1170;
    array[0][3] = 145;
    array[1][0] = 180;
    array[1][1] = 125;
    array[1][2] = 545;
    array[1][3] = 400;
    array[2][0] = 590;
    array[2][1] = 580;
    array[2][2] = 780;
    array[2][3] = 680;
    array[3][0] = 605;
    array[3][1] = 775;
    array[3][2] = 760;
    array[3][3] = 910;
    array[4][0] = 1480;
    array[4][1] = 0;
    array[4][2] = 1910;
    array[4][3] = 605;
}

void map2_dos(int** array)
{
    array[5][0] = 990;
    array[5][1] = 820;
    array[5][2] = 1075;
    array[5][3] = 910;
    array[6][0] = 915;
    array[6][1] = 145;
    array[6][2] = 1035;
    array[6][3] = 165;
    array[7][0] = 340;
    array[7][1] = 400;
    array[7][2] = 445;
    array[7][3] = 425;
    array[8][0] = 645;
    array[8][1] = 680;
    array[8][2] = 765;
    array[8][3] = 705;
    array[9][0] = 1735;
    array[9][1] = 955;
    array[9][2] = 1880;
    array[9][3] = 965;
}
