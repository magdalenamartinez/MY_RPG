/*
** EPITECH PROJECT, 2023
** levelup
** File description:
** levelup
*/

#include "../include/my_rpg.h"

void animation_levelup(sfRenderWindow* window, sfEvent event, data_t* data)
{
    sfClock_restart(data->levelupclock);
    sfClock_restart(data->levelupclock2);
    sfSound_play(data->level_s);
    sfVector2f v = {600, 200};
    sfVector2f v2 = {1, 1};
    sfSprite_setScale(data->levelup, v2);
    sfSprite_setPosition(data->levelup, v);
    data->level = 1;
}

void level_up_draw(sfRenderWindow* window, sfEvent event, data_t* data)
{
    sfTime t = sfClock_getElapsedTime(data->levelupclock);
    float s = sfTime_asSeconds(t);
    sfTime t2 = sfClock_getElapsedTime(data->levelupclock2);
    float s2 = sfTime_asSeconds(t2);
    if (s2 > 0.2) {
        sfVector2f v = sfSprite_getScale(data->levelup);
        sfVector2f v1 = sfSprite_getScale(data->levelup);
        v.x += 0.10; v.y += 0.10;
        sfSprite_setScale(data->levelup, v);
        sfVector2f diff = {(v.x- v1.x) / 2, (v.y - v1.y) / 2};
        sfVector2f oldPos = sfSprite_getPosition(data->levelup);
        sfVector2f aux = {oldPos.x - diff.x - 20, oldPos.y - diff.y - 20};
        sfSprite_setPosition(data->levelup, aux);
        sfClock_restart(data->levelupclock2);
    }
    sfRenderWindow_drawSprite(window, data->levelup, NULL);
    if (s > 1.0f) {
        data->level = 0;
    }
}
