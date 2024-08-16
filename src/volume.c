/*
** EPITECH PROJECT, 2023
** volume.c
** File description:
** volume.c
*/

#include "../include/my_rpg.h"

void change_volume(data_t* data, int a, int b)
{
    if (a == 0) {
        if (b == 0) {
            data->volumebar0--;
        } else {
            data->volumebar0++;
        }
    }
    if (a == 1) {
        if (b == 0) {
            data->volumebar1--;
        } else {
            data->volumebar1++;
        }
    }
    check_right(data);
}

void check_right(data_t* data)
{
    if (data->volumebar0 < 0) {
        data->volumebar0 = 0;
    }
    if (data->volumebar1 < 0) {
        data->volumebar1 = 0;
    }
    if (data->volumebar0 > 8) {
        data->volumebar0 = 8;
    }
    if (data->volumebar1 > 8) {
        data->volumebar1 = 8;
    }
}
