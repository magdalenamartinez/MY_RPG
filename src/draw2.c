/*
** EPITECH PROJECT, 2023
** draw2
** File description:
** draw2
*/

#include "../include/my_rpg.h"

void draw_function(sfRenderWindow* window, sfEvent event, data_t* data)
{
    if (data->display == 0 && data->charge == 0) {
        sfRenderWindow_drawSprite(window, data->screen0, NULL);
    }
    if (data->newgame == 1 && data->charge == 0) {
        draw_story(window, event, data);
    }
    if (data->display == 1 && data->charge == 0) {
        draw_firstdisplay(window, event, data);
    }
    if (data->volume == 1 && data->charge == 0) {
        draw_volumethings(window, event, data);
    }
    if (data->settings == 1 && data->charge == 0) {
        draw_settings(window, event, data);
    }
    draw_function2(window, event, data);
}

void draw_function2(sfRenderWindow* window, sfEvent event, data_t* data)
{
    if (data->display == 2 && data->charge == 0) {
        draw_seconddisplay(window, event, data);
    }
    if (data->help == 1) {
        sfRenderWindow_drawSprite(window, data->help_m, NULL);
    }
    if (data->level == 1) {
        level_up_draw(window, event, data);
    }
    if (data->display == 4 && data->charge == 0) {
        draw_theend(window, event, data);
    }
    if (data->display == 5 && data->charge == 0) {
        draw_over(window, event, data);
    }
}

void draw_over(sfRenderWindow* window, sfEvent event, data_t* data)
{
    if (data->over == 1) {
        sfRenderWindow_drawSprite(window, data->story0, NULL);
        sfRenderWindow_drawSprite(window, data->zelda, NULL);
        sfRenderWindow_drawSprite(window, data->dialogue_sp, NULL);
        draw_text(window, event, data);
        draw_name(window, event, data);
    }
}

void draw_theend(sfRenderWindow* window, sfEvent event, data_t* data)
{
    if (data->end == 1) {
        sfRenderWindow_drawSprite(window, data->castle, NULL);
        sfRenderWindow_drawSprite(window, data->zelda, NULL);
        sfRenderWindow_drawSprite(window, data->dialogue_sp, NULL);
        draw_text(window, event, data);
        draw_name(window, event, data);
    }
}

void draw_story(sfRenderWindow* window, sfEvent event, data_t* data)
{
    if (data->newgame == 1) {
        sfRenderWindow_drawSprite(window, data->story0, NULL);
        initial_animation(window, event, data);
        sfRenderWindow_drawSprite(window, data->dialogue_sp, NULL);
        draw_text(window, event, data);
        draw_name(window, event, data);
    }
}
