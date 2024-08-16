/*
** EPITECH PROJECT, 2023
** switch
** File description:
** switch
*/

#include "../include/my_rpg.h"

void which_button0(sfRenderWindow* window, sfEvent event, data_t* data, int pos)
{
    if (pos == -1) {
        return;
    }
    switch (pos - 1) {
        case 0: continue_f(window, event, data); break;
        case 1: newgame_f(window, event, data); break;
        case 2: quitgame_f(window, event, data); break;
        case 3: volume_f(window, event, data); break;
        case 4: settings_f(window, event, data); break;
    }
}

void which_button1(sfRenderWindow* window, sfEvent event, data_t* data, int pos)
{
    if (pos == -1) {
        return;
    }
    switch (pos - 1) {
        case 0: change_volume(data, 0, 0); break;
        case 1: change_volume(data, 0, 1); break;
        case 2: change_volume(data, 1, 0); break;
        case 3: change_volume(data, 1, 1); break;
        case 4: data->volume = 0; break;
    }
}

void which_button2(sfRenderWindow* window, sfEvent event, data_t* data, int pos)
{
    if (pos == -1) {
        return;
    }
    switch (pos - 1) {
        case 0:
            volume_f(window, event, data);
            break;
        case 1:
            settings_f(window, event, data);
            break;
    }
}

void which_button3(sfRenderWindow* window, sfEvent event, data_t* data, int pos)
{
    if (pos == -1) {
        return;
    }
    switch (pos - 1) {
        case 0:
            data->help = 1; data->settings = 0;
            break;
        case 1:
            quitgame_f(window, event, data);
            break;
        case 2:
            data->settings = 0;
            break;
    }
}

void which_button4(sfRenderWindow* window, sfEvent event, data_t* data, int pos)
{
    if (pos == -1) {
        return;
    }
    switch (pos - 1) {
        case 0:
            save_game(window, event, data); break;
        case 1:
            save_game(window, event, data);
            data->settings = 0;
            escape_funcion(data);
            reset_function(window, event, data);
            break;
        case 2:
            data->settings = 0;
            escape_funcion(data);
            reset_function(window, event, data);
            break;
        case 3:
            data->settings = 0; break;
    }
}
