/*
** EPITECH PROJECT, 2023
** story.c
** File description:
** story.c
*/

#include "../include/my_rpg.h"

void iteration_function(sfRenderWindow* window, sfEvent event, data_t* data)
{
    data->newgame = 0;
    data->display = 1;
    data->charge = 1;
    data->first = 0;
    sfClock_restart(data->charging);
    sfClock_restart(data->charging2);
    data->animation = 1;
}

void if_intro(sfRenderWindow* window, sfEvent event, data_t* data)
{
    if (data->newgame == 1 && data->first == 0) {
        sfClock_restart(data->levelupclock2);
        sfClock_restart(data->levelupclock);
        data->first = 1;
    }
    if (data->newgame == 1) {
        sfTime t = sfClock_getElapsedTime(data->levelupclock2);
        float s = sfTime_asSeconds(t);
        if (data->pressed == 1) {
            data->iteration++;
            data->pressed = 0;
        }
        if (data->iteration >= 15) {
            iteration_function(window, event, data);
        } else {
            initial_story(window, event, data);
        }
    }
}

void initial_story(sfRenderWindow* window, sfEvent event, data_t* data)
{
    sfTime t = sfClock_getElapsedTime(data->levelupclock);
    float s = sfTime_asSeconds(t);
    if (s > 0.2) {
    if (data->zelda_rect.top == 5 * 29) {
        data->zelda_rect.top = 0;
    } else {
        data->zelda_rect.top += 29;
    }
    rect_zelda(data);
    sfSprite_setTextureRect(data->zelda, data->zelda_rect);
    sfClock_restart(data->levelupclock);
    sfSprite_setPosition(data->zelda, data->zelda_pos);
    }
}

void rect_zelda(data_t* data)
{
    if (data->zelda_pos.x == 200) {
        data->restar = 0;
        data->zelda_rect.left = 177;
        data->sumar = 1;
    } if (data->zelda_pos.x == 1500) {
        data->restar = 1;
        data->sumar = 0;
        data->zelda_rect.left = 116;
    }
    if (data->sumar == 1) {
        data->zelda_pos.x += 10;
    } else {
        data->zelda_pos.x -= 10;
    }
}
