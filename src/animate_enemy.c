/*
** EPITECH PROJECT, 2023
** animate_enemy.c
** File description:
** animate
*/

#include "../include/my_rpg.h"

void animate_enemy2(sfRenderWindow* window, sfEvent event, data_t* data, int i)
{
    enemy_is_hurt(window, event, data, i);
    data->enemies[i].life--;
    study_numberofenemies(window, event, data, i);
    study_enemyposition(50, data, i);
}

void animate_enemy(sfRenderWindow* window, sfEvent event, data_t* data, int i)
{
    float x = data->link_pos.x - data->enemies[i].position.x;
    float y = data->link_pos.y - data->enemies[i].position.y;
    if (data->npcs_sec > 0.2) {
        color_function(window, event, data, i);
        if (data->cambiar == 1 && fabs(x) <= 30 && fabs(y) <= 30) {
            first_switch(data, i);
            animate_enemy2(window, event, data, i);
        } else {
            second_switch(data, i);
            study_enemyposition(5, data, i);
        }
    if (data->cambiar == 0 && fabs(x) <= 20 && fabs(y) <= 20) {
        aux_enemy(window, event, data);
    }
    animate_enemy3(window, event, data, i);
    }
}

void aux_enemy(sfRenderWindow* window, sfEvent event, data_t* data)
{
    if (data->npcs_sec2 > 0.3) {
        link_is_hurt(window, event, data);
        sfClock_restart(data->npcsclock2);
    }
}

void animate_enemy3(sfRenderWindow* window, sfEvent event, data_t* data, int i)
{
    sfClock_restart(data->npcsclock);
    sfVector2f p = data->enemies[i].position;
    sfCircleShape_setPosition(data->enemies[i].circle, p);
    change_rect(window, event, data, i);
    data->cambiar = 0;
}
