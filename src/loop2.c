/*
** EPITECH PROJECT, 2023
** loop2
** File description:
** loop2
*/

#include "../include/my_rpg.h"

void changing_display(sfRenderWindow* window, sfEvent event, data_t* data)
{
    if (data->charge == 1) {
        sfTime t = sfClock_getElapsedTime(data->charging);
        float s = sfTime_asSeconds(t);
        if (s > 1.5) {
            data->charge = 0;
            sfClock_restart(data->charging);
            sfClock_restart(data->charging2);
            data->rect_loadbar.top = 59;
        } else {
            changing_display2(window, event, data);
        }
    }
}

void changing_display2(sfRenderWindow* window, sfEvent event, data_t* data)
{
    sfTime t2 = sfClock_getElapsedTime(data->charging2);
        float s2 = sfTime_asSeconds(t2);
        if (s2 > 0.17) {
            if (data->rect_loadbar.top == 3) {
                data->rect_loadbar.top = 59;
            } else {
                data->rect_loadbar.top -= 7;
            }
            sfClock_restart(data->charging2);
        }
        sfSprite_setTextureRect(data->load, data->rect_loadbar);
        sfRenderWindow_drawSprite(window, data->cargar, NULL);
        sfRenderWindow_drawSprite(window, data->load, NULL);
}

void change_zelda(data_t* data)
{
    data->zelda_rect.left = 0;
    data->zelda_rect.top = 0;
    data->iteration = 21;
    data->zelda_pos.x = 1600;
    data->zelda_pos.y = 650;
}

void change_zelda2(data_t* data)
{
    data->zelda_rect.left = 0;
    data->zelda_rect.top = 58;
    data->iteration = 24;
    data->zelda_pos.x = 1600;
    data->zelda_pos.y = 650;
}

void over_function(sfRenderWindow* window, sfEvent event, data_t* data)
{
    if (data->first == 0 && data->over == 1){
        sfClock_restart(data->levelupclock);
        sfClock_restart(data->levelupclock2);
        data->first = 1;
        change_zelda2(data);
        sfSprite_setPosition(data->zelda,data->zelda_pos);
        sfSprite_setTextureRect(data->zelda, data->zelda_rect);
    }
    if (data->over == 1) {
        if (data->pressed == 1) {
            data->iteration++;
            data->pressed = 0;
        }
        if (data->iteration > 27) {
            data->over = 0;
            data->display = 2;
        } else {
            over_story(window, event, data);
        }
    }
}
