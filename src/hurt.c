/*
** EPITECH PROJECT, 2023
** hurt
** File description:
** hurt
*/

#include "../include/my_rpg.h"

void enemy_is_hurt(sfRenderWindow* window, sfEvent event, data_t* data, int i)
{
    data->enemies[i].change_color = 1;
    data->enemies[i].color = sfColor_fromRGBA(255, 0, 0, 200);
    sfSound_play(data->hurtenemy_sound);
}

void link_is_hurt(sfRenderWindow* window, sfEvent event, data_t* data)
{
    data->lefthearts--;
    move_back(data);
    data->change_color = 1;
    sfSprite_setColor(data->link, sfColor_fromRGBA(255, 0, 0, 200));
    if (data->lefthearts > 0) {
        sfSound_play(data->hurtlink_sound);
    } else {
        sfSound_play(data->dielink_sound);
    }
    change_map(window, event, data);
    if (data->not_change == 1) {
        reverse_moveback(data);
    }
    sfSprite_setPosition(data->link, data->link_pos);
    if (data->map == 4) {
        data->lefthearts--;
    }
    change_2display(window, event, data);
}

void change_2display(sfRenderWindow* window, sfEvent event, data_t* data)
{
    if (data->lefthearts == 0 || data->numberofenemies == 0) {
        if (data->lefthearts == 0) {
            data->over = 1;
            data->display = 5;

        } else {
            data->display = 4;
            data->end = 1;
        }
        sfClock_restart(data->charging);
        sfClock_restart(data->charging2);
        data->charge = 1;
    }
}
