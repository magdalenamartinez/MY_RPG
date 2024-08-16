/*
** EPITECH PROJECT, 2023
** map.c
** File description:
** map.c
*/

#include "../include/my_rpg.h"

void change_map(sfRenderWindow* window, sfEvent event, data_t* data)
{
    data->not_change = 0;
    switch (data->map) {
        case 0: data->not_change = study_pos1(data, 5, -1); break;
        case 1: data->not_change = study_pos1(data, 6, -1); break;
        case 2: data->not_change = study_pos1(data, 10, -1); break;
        case 3: data->not_change = study_pos1(data, 6, -1); break;
        case 4: data->not_change = study_pos1(data, 11, -1); break;
    }
    if (data->not_change == 2) {
        which_map(window, event, data);
    }
}

void which_map(sfRenderWindow* window, sfEvent event, data_t* data)
{
    switch (data->map) {
        case 0: data->rect2.top = 0; break;
        case 1: data->rect2.top = 161; break;
        case 2: data->rect2.top = 345; break;
        case 3:
            data->rect2.top = 652;
            data->rect2.left = 5;
            break;
        case 4:
            data->rect2.top = 872;
            data->rect2.left = 0;
            break;
    }
    data->not_change = 0;
    sfSprite_setTextureRect(data->screen1, data->rect2);
}

int** choose_array(data_t* d)
{
    int** ar;
    if (d->map == 0) {
        ar = d->array_map0;
    }
    if (d->map == 1) {
        ar = d->array_map1;
    }
    if (d->map == 2) {
        ar = d->array_map2;
    }
    if (d->map == 3) {
        ar = d->array_map3;
    }
    if (d->map == 4) {
        ar = d->array_map4;
    }
    return ar;
}

int bucle_while (data_t* d, int max, int a, int b)
{
    int i = 0;
    d->f1 = 0; d->f2 = 0;
    int** ar = choose_array(d);
    while (i < max && (d->f1 == 0 || d->f2 == 0)) {
        d->f1 = 0; d->f2 = 0;
        if (a >= ar[i][0] && a < ar[i][2]) {
            d->f1 = 1;
        }
        if (b >= ar[i][1] && b < ar[i][3]) {
            d->f2 = 1;
        }
        i++;
    }
    return i;
}

int study_pos1(data_t* d, int max, int j)
{
    int a = d->link_pos.x;
    int b = d->link_pos.y;
    if (j != -1) {
        a = d->enemies[j].position.x;
        b = d->enemies[j].position.x;
    }
    int i = bucle_while(d, max, a, b);
    if (d->f1 == 1 && d->f2 == 1 && i != max) {
        return 1;
    }
    if (d->f1 == 1 && d->f2 == 1 && d->map == 4) {
        return 1;
    }
    if (d->f1 == 1 && d->f2 == 1 && i == max && d->map != 4) {
        d->map++; d->link_pos.y = 5; return 2;
    }
    if (b == 0 && d->dir == 2 & d->map > 0) {
        d->map--; d->link_pos.y = 900; return 2;
    }
    return 0;
}
