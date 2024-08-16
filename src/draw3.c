/*
** EPITECH PROJECT, 2023
** draw
** File description:
** draw
*/

#include "../include/my_rpg.h"

void initial_animation(sfRenderWindow* window, sfEvent event, data_t* data)
{
    sfRenderWindow_drawSprite(window, data->zelda, NULL);
}

void draw_text(sfRenderWindow* window, sfEvent event, data_t* data)
{
    sfRenderWindow_drawText(window, data->array_txt[data->iteration], NULL);
}

void draw_name(sfRenderWindow* window, sfEvent event, data_t* data)
{
    char* name = NULL;
    sfText* t = sfText_create();
    if (data->end == 1 || data->over == 1) {
        name = "Zelda";
    }
    if (data->newgame == 1) {
        name = "Narrator";
    }
    sfText_setFont(t, data->font);
    sfText_setCharacterSize(t, 30);
    sfText_setColor(t, sfWhite);
    sfText_setString(t, name);
    sfText_setPosition(t, (sfVector2f) {580, 705});
    sfText_setStyle(t, sfTextBold);
    sfRenderWindow_drawText(window, t, NULL);
}
