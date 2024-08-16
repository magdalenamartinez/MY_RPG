/*
** EPITECH PROJECT, 2023
** loopattack
** File description:
** loopattack
*/

#include "../include/my_rpg.h"

void change_attack(sfRenderWindow* window, sfEvent event, data_t* data)
{
    if (data->counter == 7 || data->m == 1) {
        data->bucle = 0;
        data->gunbool = 0;
        data->counter = 0;
        data->rectgun.left = 11;
        data->pause = 0;
        data->cambiar = 1;
        data->m = 0;
        pause_move0(window, event, data);
    } else {
        loop_attack(window, event, data);
    }
}

void loop_attack(sfRenderWindow* window, sfEvent event, data_t* data)
{
    if (data->bucle == 1 && data->seconds > 0.1) {
        data->rect.left += 36;
        data->rectgun.left += 36;
        if (data->dir == 1) {
            change_posgun(window, event, data);
        }
        data->pause = 1;
        sfSprite_setTextureRect(data->link, data->rect);
        sfSprite_setTextureRect(data->gun, data->rectgun);
        sfClock_restart(data->clock);
        data->counter++;
    }
}

void change_posgun(sfRenderWindow* window, sfEvent event, data_t* data)
{
    sfVector2f vector;
    vector.y = data->link_pos.y - 30;
    vector.x = data->link_pos.x + 20;
    sfSprite_setPosition(data->gun, vector);
}
