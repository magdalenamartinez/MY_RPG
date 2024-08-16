/*
** EPITECH PROJECT, 2023
** event.c
** File description:
** event.c
*/

#include "../include/my_rpg.h"

void close_event(sfRenderWindow* window, sfEvent event, data_t *data)
{
    if (event.type == sfEvtClosed || data->close == 1) {
        sfRenderWindow_close(window);
    }
}

void button_clicked(sfRenderWindow* window, sfEvent event, data_t* data)
{
    data->mouse_pos = sfMouse_getPosition(window);
    zero_screen(window, event, data);
    first_screen(window, event, data);
    second_screen(window, event, data);
    int c = data->charge;
    int v = data->volume;
    if (data->display != 2 && data->settings == 0 && v == 0 && c == 0) {
        study_movement(window, event, data);
    }
}

void second_screen(sfRenderWindow* window, sfEvent event, data_t* data)
{
    int pos = 0;
    int c = data->charge;
    if (event.type == sfEvtMouseButtonPressed && data->display == 2 && c == 0) {
        if (data->lefthearts == 0) {
            pos = is_button_pos6(data);
            which_button6(window, event, data, pos);
        } else {
            pos = is_button_pos7(data);
            which_button7(window, event, data, pos);
        }
    }
}

void zero_screen(sfRenderWindow* window, sfEvent event, data_t* data)
{
    int pos = 0;
    int c = data->charge;
    if (event.type == sfEvtMouseButtonPressed && data->display == 0 && c == 0) {
        if (data->volume == 0 && data->settings == 0) {
            pos = is_button_pos(data);
            which_button0(window, event, data, pos);
        }
        if (data->volume == 1) {
            pos = is_button_pos1(data);
            which_button1(window, event, data, pos);
        }
        if (data->settings == 1) {
            pos = is_button_pos3(data);
            which_button3(window, event, data, pos);
        }
        if (data->help == 1) {
            pos = is_button_pos5(data);
            which_button5(window, event, data, pos);
        }
    }
}

void first_screen(sfRenderWindow* window, sfEvent event, data_t* data)
{
    int pos = 0;
    int c = data->charge;
    if (event.type == sfEvtMouseButtonPressed && data->display == 1 && c == 0) {
        if (data->volume == 0 && data->settings == 0) {
            pos = is_button_pos2(data);
            which_button2(window, event, data, pos);
        }
        if (data->volume == 1){
            pos = is_button_pos1(data);
            which_button1(window, event, data, pos);
        }
        if (data->settings == 1) {
            pos = is_button_pos4(data);
            which_button4(window, event, data, pos);
        }
    }
}
