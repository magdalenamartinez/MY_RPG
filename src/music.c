/*
** EPITECH PROJECT, 2023
** music
** File description:
** music
*/

#include "../include/my_rpg.h"


void control_music0(sfRenderWindow* window, sfEvent event, data_t* data)
{
    if (sfMusic_getStatus(data->main_theme) == sfPlaying) {
        sfMusic_stop(data->main_theme);
    }
    if (sfMusic_getStatus(data->intro) == sfStopped && data->charge == 0) {
        sfMusic_play(data->intro);
    }
}

void control_music12(sfRenderWindow* window, sfEvent event, data_t* data)
{
    if (data->activate_fight == 1 && data->ya == 1) {
            sfMusic_stop(data->main_theme);
            sfMusic_play(data->attack_music);
            data->ya = 0;
    } else if (data->ya == 0 && data->activate_fight == 0) {
            sfMusic_stop(data->attack_music);
            sfMusic_play(data->main_theme);
            data->ya = 1;
    }
    data->old_display = 1;
}

void control_nofight(data_t* data)
{
    if (sfMusic_getStatus(data->attack_music) == sfPlaying) {
        sfMusic_stop(data->attack_music);
    }
    if (sfMusic_getStatus(data->main_theme) == sfStopped && data->charge == 0) {
        sfMusic_play(data->main_theme);
    }
}

void control_fight(data_t* data)
{
    if (sfMusic_getStatus(data->main_theme) == sfPlaying) {
        sfMusic_stop(data->main_theme);
    }
    int a = data->charge;
    if (sfMusic_getStatus(data->attack_music) == sfStopped && a == 0) {
        sfMusic_play(data->attack_music);
    }
}

void control_music1(sfRenderWindow* window, sfEvent event, data_t* data)
{
    if (sfMusic_getStatus(data->story_s) == sfPlaying) {
        sfMusic_stop(data->story_s);
    }
    if (sfMusic_getStatus(data->intro) == sfPlaying) {
        sfMusic_stop(data->intro);
    }
    if (data->activate_fight == 0) {
        control_nofight(data);
    } else {
        control_fight(data);
    }
}
