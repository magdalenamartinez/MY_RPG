/*
** EPITECH PROJECT, 2023
** sprites
** File description:
** sprites
*/

#include "../include/my_rpg.h"

sfSprite* crea(sfTexture* texture, sfVector2f p, sfVector2f s)
{
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, p);
    sfSprite_setScale(sprite, s);
    return sprite;
}

void sprites_clock(sfRenderWindow* window, sfEvent event, data_t* data)
{
    data->clock = sfClock_create();
    data->npcsclock = sfClock_create();
    data->npcsclock2 = sfClock_create();
    data->levelupclock = sfClock_create();
    data->levelupclock2 = sfClock_create();
    data->charging = sfClock_create();
    data->charging2 = sfClock_create();
}
