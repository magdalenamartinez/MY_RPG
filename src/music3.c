/*
** EPITECH PROJECT, 2023
** music
** File description:
** music
*/

#include "../include/my_rpg.h"


void control_music4(sfRenderWindow* window, sfEvent event, data_t* data)
{
    if (sfMusic_getStatus(data->main_theme) == sfPlaying) {
        sfMusic_stop(data->main_theme);
    }
    if (sfMusic_getStatus(data->attack_music) == sfPlaying) {
        sfMusic_stop(data->attack_music);
    }
    if (sfMusic_getStatus(data->end_m) == sfStopped) {
        sfMusic_play(data->end_m);
    }
}

void control_music5(sfRenderWindow* window, sfEvent event, data_t* data)
{
    if (sfMusic_getStatus(data->main_theme) == sfPlaying) {
        sfMusic_stop(data->main_theme);
    }
    if (sfMusic_getStatus(data->attack_music) == sfPlaying) {
        sfMusic_stop(data->attack_music);
    }
    if (sfMusic_getStatus(data->over_m) == sfStopped) {
        sfMusic_play(data->over_m);
    }
}
