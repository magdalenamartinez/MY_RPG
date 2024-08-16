/*
** EPITECH PROJECT, 2023
** music
** File description:
** music
*/

#include "../include/my_rpg.h"

void control_music(sfRenderWindow* window, sfEvent event, data_t* data)
{
    if (data->display == 0 ) {
        control_music0(window, event, data);
    }
    if (data->display == 1) {
        control_music1(window, event, data);
    }
    if (data->display == 2) {
        control_music2(window, event, data);
    }
    if (data->display == 3) {
        control_music3(window, event, data);
    }
    if (data->display == 4) {
        control_music4(window, event, data);
    }
    if (data->display == 5) {
        control_music5(window, event, data);
    }
}

void control_music21(sfRenderWindow* window, sfEvent event, data_t* data)
{
    if (sfMusic_getStatus(data->main_theme) == sfPlaying) {
        sfMusic_stop(data->main_theme);
    }
    if (sfMusic_getStatus(data->attack_music) == sfPlaying) {
        sfMusic_stop(data->attack_music);
    }
    if (sfMusic_getStatus(data->over_m) == sfPlaying) {
        sfMusic_stop(data->over_m);
    }
    if (data->charge == 0 && sfSound_getStatus(data->gover_s) == sfStopped) {
        sfSound_play(data->gover_s);
    }
}

void control_music22(sfRenderWindow* window, sfEvent event, data_t* data)
{
    if (sfMusic_getStatus(data->main_theme) == sfPlaying) {
        sfMusic_stop(data->main_theme);
    }
    if (sfMusic_getStatus(data->attack_music) == sfPlaying) {
        sfMusic_stop(data->attack_music);
    }
    if (sfMusic_getStatus(data->end_m) == sfPlaying) {
        sfMusic_stop(data->end_m);
    }
    if (sfMusic_getStatus(data->intro) == sfStopped && data->charge == 0) {
        sfMusic_play(data->intro);
    }
}

void control_music2(sfRenderWindow* window, sfEvent event, data_t* data)
{
    if (data->lefthearts == 0) {
        control_music21(window, event, data);
    }
    if (data->lefthearts != 0) {
        control_music22(window, event, data);
    }
}

void control_music3(sfRenderWindow* window, sfEvent event, data_t* data)
{
    if (sfMusic_getStatus(data->intro) == sfPlaying) {
        sfMusic_stop(data->intro);
    }
    if (data->charge == 0 && sfMusic_getStatus(data->story_s) == sfStopped) {
        sfMusic_play(data->story_s);
    }
}
