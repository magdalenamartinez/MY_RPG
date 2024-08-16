/*
** EPITECH PROJECT, 2023
** enemy3
** File description:
** enemy3
*/

#include "../include/my_rpg.h"

void study_numberofenemies(sfRenderWindow* w, sfEvent e, data_t* d, int i)
{
    if (d->enemies[i].life == 0) {
        d->numberofenemies--;
    }
    if (d->numberofenemies == 8 && d->pri == 0) {
        animation_levelup(w, e, d);
        d->pri = 1;
        d->numhearts = 8;
        d->lefthearts = 8;
    }
    if (d->numberofenemies == 5 && d->sec == 0) {
        animation_levelup(w, e, d);
        d->numhearts = 10;
        d->sec = 1;
        d->lefthearts = 10;
    }
    if (d->numberofenemies == 2 && d->ter == 0) {
        animation_levelup(w, e, d);
        d->numhearts = 12;
        d->lefthearts = 12; d->ter = 1;
    }
}

void move_back(data_t* data)
{
    switch (data->dir) {
        case 0:
            data->link_pos.x += 50;
            break;
        case 1:
            data->link_pos.x -= 50;
            break;
        case 2:
            data->link_pos.y += 50;
            break;
        case 3:
            data->link_pos.y -= 50;
            break;
    }
    check_pos(data);
}

void reverse_moveback(data_t* data)
{
    switch (data->dir) {
        case 0:
            data->link_pos.x -= 50;
            break;
        case 1:
            data->link_pos.x += 50;
            break;
        case 2:
            data->link_pos.y -= 50;
            break;
        case 3:
            data->link_pos.y += 50;
            break;
    }
}

void which_map_enemy(sfRenderWindow* window, sfEvent event, data_t* data)
{
    int i = 0;
    switch (data->map) {
        case 0: i = 0; data->max = 3; break;
        case 1: i = 3; data->max = 5; break;
        case 2: i = 5; data->max = 7; break;
        case 3: i = 7; data->max = 9; break;
        case 4: i = 9; data->max = 12; break;
    }
    activate_enemies_2(window, event, data, i);
}
