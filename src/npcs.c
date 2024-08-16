/*
** EPITECH PROJECT, 2023
** npcs.c
** File description:
** npcs
*/

#include "../include/my_rpg.h"

void allocate_npcs(sfRenderWindow* window, sfEvent event, data_t* data)
{
    int i = 0;
    change_ant(data);
    data->npcs = (npcs_t*) malloc(sizeof(npcs_t) * 9);
    while (i < 9) {
        data->npcs[i].circle = malloc(sizeof(sfCircleShape*));
        data->npcs[i].circle = sfCircleShape_create();
        data->npcs[i].name = malloc(sizeof(char)* my_strlen(namesf(i)));
        data->npcs[i].name = namesf(i);
        data->npcs[i].can_speak = 0;
        map_npcs(data, i);
        rectf(data);
        data->npcs[i].rect = data->ant;
        data->npcs[i].position = positionf(i);
        sfCircleShape_setPosition(data->npcs[i].circle, data->npcs[i].position);
        sfCircleShape_setRadius(data->npcs[i].circle, 100);
        i++;
    }
}

void map_npcs(data_t* data, int i)
{
    if (i < 1) {
        data->npcs[i].map = 0;
    }
    if (1 <= i && i < 3) {
        data->npcs[i].map = 1;
    }
    if (3 <= i && i < 6) {
        data->npcs[i].map = 2;
    }
    if (6 <= i && i < 8) {
        data->npcs[i].map = 3;
    }
    if (8 <= i && i < 9) {
        data->npcs[i].map = 4;
    }
}

void rectf(data_t* d)
{
    if (d->ant.left == 218 && d->ant.top < 425) {
        d->ant.left = 26;
        d->ant.top = 160 + d->ant.top;
    } else {
        d->ant.left = (d->ant.left + 96);
    }
}

sfVector2f positionf(int i)
{
    sfVector2f p; p.x = 0; p.y = 0;
    switch (i) {
        case 0: p.x = 365; p.y = 295; break;
        case 1: p.x = 975; p.y = 615; break;
        case 2: p.x = 225; p.y = 775; break;
        case 3: p.x = 990; p.y = 170; break;
        case 4: p.x = 400; p.y = 430; break;
        case 5: p.x = 720; p.y = 705; break;
        case 6: p.x = 1095; p.y = 330; break;
        case 7: p.x = 950; p.y = 610; break;
        case 8: p.x = 1515; p.y = 785; break;
    }
    return p;
}

void change_ant(data_t* data)
{
    data->ant.height = 21;
    data->ant.width = 20;
    data->ant.left = 0;
    data->ant.left = -70;
    data->ant.top = 105;
}
