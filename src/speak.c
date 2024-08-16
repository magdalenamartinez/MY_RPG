/*
** EPITECH PROJECT, 2023
** speak
** File description:
** speak
*/

#include "../include/my_rpg.h"

void activate_npcs(sfRenderWindow* window, sfEvent event, data_t* data)
{
    int i = 0;
    float x = data->link_pos.x;
    float y = data->link_pos.y;
    int d = 0;
    while (i < 9) {
        float c_x = sfCircleShape_getPosition(data->npcs[i].circle).x;
        float c_y = sfCircleShape_getPosition(data->npcs[i].circle).y;
        float d = (x - c_x) * (x - c_x) + (y - c_y) * (y - c_y);
        if (d <= 200 * 200) {
            activate_speak(window, event, data, i);
        } else {
            data->npcs[i].can_speak = 0;
        }
        i++;
    }
}

void activate_speak(sfRenderWindow* window, sfEvent event, data_t* data, int i)
{
    if (data->map == data->npcs[i].map) {
        data->npcs[i].can_speak = 1;
    } else {
        data->npcs[i].can_speak = 0;
    }
}

char* namesf(int i)
{
    char* aux;
    switch (i) {
        case 0: aux = "Hyliano"; break;
        case 1: aux = "Grahim"; break;
        case 2: aux = "Impa"; break;
        case 3: aux = "Amanda"; break;
        case 4: aux = "Atenea"; break;
        case 5: aux = "Manya"; break;
        case 6: aux = "Dorcon"; break;
        case 7: aux = "Malton"; break;
        case 8: aux = "Alisia"; break;
    }
    return aux;
}
