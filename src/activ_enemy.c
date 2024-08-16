/*
** EPITECH PROJECT, 2023
** activenemy.c
** File description:
** activenemy
*/

#include "../include/my_rpg.h"

void activate_enemies(sfRenderWindow* window, sfEvent event, data_t* data)
{
    int i = 0;
    float circle_x;
    float circle_y;
    float x = data->link_pos.x;
    float y = data->link_pos.y;
    float d;
    which_map_enemy(window, event, data);
}

void activate_enemies_3(sfRenderWindow* w, sfEvent event, data_t* data, int i)
{
    if (data->enemies[i].life != 0) {
        data->activate_fight = 1;
        data->maintheme_play = 0;
        data->enemies[i].activ = 1;
        move_enemy(w, event, data, i);
        change_position(w, event, data, i);
        animate_enemy(w, event, data, i);
    }
}

void activate_enemies_2(sfRenderWindow* w, sfEvent event, data_t* data, int i)
{
    float x = data->link_pos.x;
    float y = data->link_pos.y;
    data->activate_fight = 0; int d = 0;
    while (i < data->max) {
        float c_x = sfCircleShape_getPosition(data->enemies[i].circle).x;
        float c_y = sfCircleShape_getPosition(data->enemies[i].circle).y;
        float d = (x - c_x) * (x - c_x) + (y - c_y) * (y - c_y);
        if (d <= 200 * 200) {
            activate_enemies_3(w, event, data, i);
        } else {
            data->enemies[i].activ = 0;
        }
        sfSprite_setTextureRect(data->enemies_sp, data->enemies[i].rect);
        sfSprite_setPosition(data->enemies_sp, data->enemies[i].position);
        i++;
    }
}
