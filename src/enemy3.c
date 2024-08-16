/*
** EPITECH PROJECT, 2023
** enemy3
** File description:
** enemy3
*/

#include "../include/my_rpg.h"

void study_enemyposition(int max, data_t* d, int i)
{
    switch (d->map) {
        case 0: d->not_change = study_pos1(d, 5, i); break;
        case 1: d->not_change = study_pos1(d, 6, i); break;
        case 2: d->not_change = study_pos1(d, 10, i); break;
        case 3: d->not_change = study_pos1(d, 6, i); break;
        case 4: d->not_change = study_pos1(d, 11, i); break;
    }
    if (d->not_change == 1) {
        move_backenemy(max, d, i);
    }
    check_posenemy(d, i);
}

void check_posenemy(data_t* data, int i)
{
    if (data->enemies[i].position.x < 0) {
        data->enemies[i].position.x = 0;
    }
    if (data->enemies[i].position.y < 0) {
        data->enemies[i].position.y = 0;
    }
    if (data->enemies[i].position.x > 1910) {
        data->enemies[i].position.x = 1910;
    }
    if (data->enemies[i].position.y > 1010) {
        data->enemies[i].position.y = 1010;
    }
}

void move_backenemy(int max, data_t* data, int i)
{
    switch (data->enemies[i].dir) {
        case 0:
            data->enemies[i].position.x -= max;
            break;
        case 1:
            data->enemies[i].position.x += max;
            break;
        case 2:
            data->enemies[i].position.y -= max;
            break;
        case 3:
            data->enemies[i].position.y += max;
            break;
    }
}

void change_position(sfRenderWindow* w, sfEvent e, data_t* d, int i)
{
    switch (d->enemies[i].dir) {
        case 0:
            d->enemies[i].rect.left = 216;
            break;
        case 1:
            d->enemies[i].rect.left = 110;
            break;
        case 2:
            d->enemies[i].rect.left = 312;
            break;
        case 3:
            d->enemies[i].rect.left = 11;
            break;
    }
}

void change_rect(sfRenderWindow* w, sfEvent e, data_t* d, int i)
{
    if (d->enemies[i].counter_rect == 1) {
        d->enemies[i].rect.left -= 47;
        d->enemies[i].counter_rect = 0;
    } else {
        d->enemies[i].rect.left += 47;
        d->enemies[i].counter_rect++;
    }
}
