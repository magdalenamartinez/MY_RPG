/*
** EPITECH PROJECT, 2023
** checkmov
** File description:
** checkmov
*/

#include "../include/my_rpg.h"

int check_numberpressed(sfEvent event, int opt, data_t* data)
{
    if (sfKeyboard_isKeyPressed(sfKeyNum1)) {
        opt = 3; data->numberofgun = 0;
    }
    if (sfKeyboard_isKeyPressed(sfKeyNum2)) {
        opt = 3; data->numberofgun = 1;
    }
    if (sfKeyboard_isKeyPressed(sfKeyNum3)) {
        opt = 3; data->numberofgun = 2;
    }
    if (sfKeyboard_isKeyPressed(sfKeyNum4)) {
        opt = 3; data->numberofgun = 3;
    }
    if (sfKeyboard_isKeyPressed(sfKeyNum5)) {
        opt = 3; data->numberofgun = 4;
    }
    return opt;
}

void check_movement1(sfRenderWindow* window, sfEvent event, data_t* data)
{
    data->olddirection = data->dir;
    if (data->ataca == 1) {
        data->olddirection = -1;
    }
}

void check_movement(sfRenderWindow* window, sfEvent event, data_t* data)
{
    int y = 0;
    check_movement1(window, event, data);
    sfVector2f l = data->link_pos;
    if (sfKeyboard_isKeyPressed(sfKeyLeft)) {
        data->link_pos.x -= 5; data->dir = 0; y = 1;
    }
    if (sfKeyboard_isKeyPressed(sfKeyRight)) {
        data->link_pos.x += 5; data->dir = 1; y = 1;
    }
    if (sfKeyboard_isKeyPressed(sfKeyUp)) {
        data->link_pos.y -= 5; data->dir = 2; y = 1;
    }
    if (sfKeyboard_isKeyPressed(sfKeyDown)) {
        data->link_pos.y += 5; data->dir = 3; y = 1;
    }
    if (data->seconds > 0.25) {
        sfSound_play(data->footsteps_sound);
        data->seconds = 0; sfClock_restart(data->clock);
    }
    check_pos(data);
}

int check_mov(sfEvent event, data_t* data)
{
    int opt = 0;
    if (sfKeyboard_isKeyPressed(sfKeyLeft)) {
        opt = 1;
    }
    if (sfKeyboard_isKeyPressed(sfKeyRight)) {
        opt = 1;
    }
    if (sfKeyboard_isKeyPressed(sfKeyUp)) {
        opt = 1;
    }
    if (sfKeyboard_isKeyPressed(sfKeyDown)) {
        opt = 1;
    }
    opt = check_mov2(event, data, opt);
    opt = check_numberpressed(event, opt, data); return opt;
}

int check_mov2(sfEvent event, data_t* data, int opt)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace)) {
        opt = 2; data->ataque = 1;
    }
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        opt = escape_funcion(data);
    }
    if (sfKeyboard_isKeyPressed(sfKeyK)) {
        opt = speak_function(data);
    }
    if (sfKeyboard_isKeyPressed(sfKeyC)) {
        data->parler = 0;
    }
    if (data->newgame == 1 || data->end == 1 || data->over == 1) {
        if (sfKeyboard_isKeyPressed(sfKeyEnter)) {
            data->pressed = 1;
        }
    }
    return opt;
}
