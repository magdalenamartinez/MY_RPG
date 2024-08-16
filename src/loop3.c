/*
** EPITECH PROJECT, 2023
** loop
** File description:
** loop
*/

#include "../include/my_rpg.h"

void over_story(sfRenderWindow* window, sfEvent event, data_t* data)
{
    sfTime t = sfClock_getElapsedTime(data->levelupclock);
    float s = sfTime_asSeconds(t);
    if (s > 0.3) {
        if (data->zelda_pos.y > 650) {
            data->zelda_pos.y -= 5;
        } else {
            data->zelda_pos.y += 5;
        }
        sfSprite_setPosition(data->zelda, data->zelda_pos);
        sfClock_restart(data->levelupclock);
    }
}

void if_end(sfRenderWindow* window, sfEvent event, data_t* data)
{
    if ((data->display == 4 || data->display == 5) && data->charge == 0) {
        if (data->lefthearts == 0) {
            over_function(window, event, data);
        } else {
            end_function(window, event, data);
        }
    }
}

void end_function(sfRenderWindow* window, sfEvent event, data_t* data)
{
    if (data->first == 0 && data->end == 1) {
        sfClock_restart(data->levelupclock);
        sfClock_restart(data->levelupclock2);
        data->first = 1;
        change_zelda(data);
    }
    if (data->end == 1) {
        sfTime t = sfClock_getElapsedTime(data->levelupclock);
        float s = sfTime_asSeconds(t);
        if (data->pressed == 1) {
            data->iteration++;
            data->pressed = 0;
        }
        if (data->iteration > 23) {
            data->end = 0;
            data->display = 2;
        } else {
            end_story(window, event, data);
        }
    }
}

void end_story(sfRenderWindow* window, sfEvent event, data_t* data)
{
    sfTime t = sfClock_getElapsedTime(data->levelupclock);
    float s = sfTime_asSeconds(t);
    sfSprite_setPosition(data->zelda,data->zelda_pos);
    if (s > 0.3) {
        if (data->zelda_rect.top == 29) {
            data->zelda_rect.top = 0;
            data->zelda_pos.y += 1;
        } else {
            data->zelda_rect.top += 29;
            data->zelda_pos.y -= 1;
        }
        sfSprite_setTextureRect(data->zelda, data->zelda_rect);
        sfClock_restart(data->levelupclock);
    }
}
