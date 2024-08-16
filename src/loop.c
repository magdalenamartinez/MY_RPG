/*
** EPITECH PROJECT, 2023
** loop
** File description:
** loop
*/

#include "../include/my_rpg.h"

void initialise_loop(sfRenderWindow* window, sfEvent event, data_t* data)
{
    initialise_arrays(window, event, data);
    initialise_values(data);
    data->charge = 1;
}

void time_function(sfRenderWindow* window, sfEvent event, data_t* data)
{
    sfTime t = sfClock_getElapsedTime(data->npcsclock);
    sfTime t2 = sfClock_getElapsedTime(data->npcsclock2);
    sfTime t3 = sfClock_getElapsedTime(data->levelupclock);
    t = sfClock_getElapsedTime(data->npcsclock);
    t2 = sfClock_getElapsedTime(data->npcsclock2);
    t3 = sfClock_getElapsedTime(data->levelupclock);
    data->npcs_sec = sfTime_asSeconds(t);
    data->npcs_sec2 = sfTime_asSeconds(t2);
    data->upclock_sec = sfTime_asSeconds(t3);
    data->time = sfClock_getElapsedTime(data->clock);
    data->seconds = sfTime_asSeconds(data->time);
}

void if_displaygame(sfRenderWindow* window, sfEvent event, data_t* data)
{
    int a = data->charge;
    int b = data->volume;
    if (data->display == 1 && data->settings == 0 && b == 0 && a == 0) {
        change_attack(window, event, data);
        activate_enemies(window, event, data);
        activate_npcs(window, event, data);
    }
}

void loop(sfRenderWindow* window, sfEvent event, data_t* data)
{
    initialise_loop(window, event, data);
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            close_event(window, event, data);
            button_clicked(window, event, data);
            control_music(window, event, data);
        }
        time_function(window, event, data);
        if_intro(window, event, data);
        if_displaygame(window, event, data);
        if_end(window, event, data);
        sfRenderWindow_clear(window, sfBlack);
        changing_display(window, event, data);
        draw_function(window, event, data);
        data->ataque = 0;
        sfRenderWindow_display(window);
    }
}
