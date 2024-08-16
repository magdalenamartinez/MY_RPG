/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** mainc
*/

#include "../include/my_rpg.h"
int main(int argc, char** argv)
{
    create_window();
}

void create_window(void)
{
    sfRenderWindow* window;
    sfVideoMode mode = {1920, 1080, 32};
    window = sfRenderWindow_create(mode, "My RPG", sfResize | sfClose, NULL);
    if (!window) {
        return EXIT_FAILURE;
    } else {
        sfEvent event;
        create_data(window, event);
    }
}

void destroy_function(sfRenderWindow* window, sfEvent event, data_t* data)
{

    for (int i = 0; i < 9; i++) {
        free(data->npcs[i].circle);
    }
    free(data->npcs);
    for (int i = 0; i < 12; i++) {
        free(data->enemies[i].circle);
    }
    free(data->enemies);
    destroy_data(window, event, data);
}
