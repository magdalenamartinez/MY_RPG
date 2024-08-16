/*
** EPITECH PROJECT, 2023
** functoins
** File description:
** functions
*/

#include "../include/my_rpg.h"

int escape_funcion(data_t* data)
{
    int opt = 7;
    data->display = 0;
    sfMusic_stop(data->main_theme);
    sfMusic_play(data->intro);
    return opt;
}

int speak_function(data_t* data)
{
    int opt = 10;
    int found = 0;
    int i = 0;
    while (i < 9 && found == 0) {
        if (data->npcs[i].can_speak == 1) {
            data->parler = 1;
            data->i = i;found = 1;
        }
        i++;
    }
    return opt;
}
