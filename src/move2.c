/*
** EPITECH PROJECT, 2023
** move2
** File description:
** move2
*/

#include "../include/my_rpg.h"


void move_1(sfRenderWindow* window, sfEvent event, data_t* data)
{
    data->rect.width = 31;
    change_map(window, event, data);
    if (data->not_change == 0) {
        check_movement(window, event, data);
        directions_check(window, event, data);
        data->ataca = 0;
    }
    if (data->not_change == 1) {
        reverse_change(data);
    }
    data->not_change = 0;
}

void move_2(sfRenderWindow* window, sfEvent event, data_t* data)
{
    attack_move(window, event, data);
    change_gun(window, event, data);
    data->ataca = 1;
    sfSound_play(data->attack_sound);
    data->rect.left = 105;
    data->rect.width = 36;
    data->bucle = 1;
    data->gunbool = 1;
}

void study_movement(sfRenderWindow* window, sfEvent event, data_t* data)
{
    int move = -1;
    if (data->bucle != 1 ) {
        move = check_mov(event, data);
    } else {
        data->m = check_mov(event, data);
    }
    if (move == 1 && data->display == 1) {
        move_1(window, event, data);
    }
    if (move == 0) {
        pause_move0(window, event, data); data->ataca = 0;
    }
    if (move == 2) {
        move_2(window, event, data);
    }
    study_aux(window, event, data, move);
}

void study_aux(sfRenderWindow* w, sfEvent e, data_t* data, int move)
{
    if (move == 3 && data->display == 1) {
        change_gun(w, e, data);
    }
    if (move == 7) {
        reset_function(w, e, data);
    }
}

void attack_move(sfRenderWindow* window, sfEvent event, data_t* data)
{
    sfVector2f v; v.y = data->link_pos.y; v.x = data->link_pos.x;
    switch (data->dir) {
        case 0:
            v.x = data->link_pos.x - 5; data->rect.top = 65;
            data->rectgun.top = 11; break;
        case 1:
            data->rectgun.top = 60; data->rect.top = 148;
            break;
        case 2:
            v.y = data->link_pos.y - 10; v.x = data->link_pos.x;
            data->rectgun.top = 11; data->rect.top = 15;
            break;
        case 3:
            data->rectgun.top = 11; data->rect.top = 110;
            break;
    }
    sfSprite_setTextureRect(data->link, data->rect);
    sfSprite_setPosition(data->gun, v);
}
