/*
** EPITECH PROJECT, 2023
** initial_menu.c
** File description:
** initial_menu.c
*/

#include "../include/my_rpg.h"




void newgame_f(sfRenderWindow* window, sfEvent event, data_t* data)
{
    data->newgame = 1;
    data->display = 3;
    data->charge = 1;
    sfClock_restart(data->charging);
    sfClock_restart(data->charging2);
    sfSprite_setTextureRect(data->screen1, data->rect2);
}

void quitgame_f(sfRenderWindow* window, sfEvent event, data_t* data)
{
    data->close = 1;
}

void volume_f(sfRenderWindow* window, sfEvent event, data_t* data)
{
    data->volume = 1;
}

void settings_f(sfRenderWindow* window, sfEvent event, data_t* data)
{
    data->settings = 1;
}
