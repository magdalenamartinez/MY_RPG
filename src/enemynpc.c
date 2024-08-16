/*
** EPITECH PROJECT, 2023
** enemynpc
** File description:
** enemynpc
*/

#include "../include/my_rpg.h"

void allocate_enemies(sfRenderWindow* window, sfEvent event, data_t* data)
{
    int i = 0; change_ant2(data);
    data->enemies = (enemy_t*)malloc(sizeof(enemy_t)* 12);
    while (i < 12) {
        data->enemies[i].circle = malloc(sizeof(sfCircleShape*));
        data->enemies[i].circle = sfCircleShape_create();
        data->enemies[i].position = position_e(i);
        data->enemies[i].activ = 0;
        data->enemies[i].counter_rect = 0;
        data->enemies[i].olddir = 0;
        data->enemies[i].dir = 0;
        depending_of_i(data, i);
        rect_e(data);
        data->enemies[i].rect = data->ant2;
        sfVector2f p = data->enemies[i].position;
        sfCircleShape_setPosition(data->enemies[i].circle, p);
        sfCircleShape_setRadius(data->enemies[i].circle, 200);
        data->enemies[i].notmove = 0;
        i++;
    }
}

void change_ant2(data_t* data)
{
    data->ant2.height = 34;
    data->ant2.width = 35;
    data->ant2.left = 11;
    data->ant2.top = 190;
}

sfVector2f position_e(int i)
{
    sfVector2f p; p.x = 0; p.y = 0;
    switch (i) {
        case 0: p.x = 690; p.y = 200; break;
        case 1: p.x = 1340; p.y = 475; break;
        case 2: p.x = 875; p.y = 785; break;
        case 3: p.x = 370; p.y = 180; break;
        case 4: p.x = 660; p.y = 820; break;
        case 5: p.x = 890; p.y = 355; break;
        case 6: p.x = 1330; p.y = 805; break;
        case 7: p.x = 1600; p.y = 125; break;
        case 8: p.x = 1295; p.y = 785; break;
        case 9: p.x = 1175; p.y = 105; break;
        case 10: p.x = 1190; p.y = 590; break;
        case 11: p.x = 1645; p.y = 345; break;
    }
    return p;
}

void rect_e(data_t* d)
{
    if (d->ant2.top < 325) {
        d->ant2.top += 45;
    } else {
        d->ant2.top = 235;
    }
}
