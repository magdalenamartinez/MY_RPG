/*
** EPITECH PROJECT, 2023
** drawlink
** File description:
** draw
*/

#include "../include/my_rpg.h"

void draw_animation(sfRenderWindow* window, sfEvent event, data_t* data)
{
    if (data->animation == 1) {
        if (data->gunbool == 1) {
            sfRenderWindow_drawSprite(window, data->gun, NULL);
        }
        sfRenderWindow_drawSprite(window, data->link, NULL);
    }
}
