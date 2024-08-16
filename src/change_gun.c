/*
** EPITECH PROJECT, 2023
** changegun
** File description:
** changegun
*/

#include "../include/my_rpg.h"

void change_gun(sfRenderWindow* window, sfEvent event, data_t* data)
{
    switch (data->numberofgun) {
        case 0:
            data->rectgun = data->gun_array[0];
            break;
        case 1:
            data->rectgun = data->gun_array[2];
            break;
        case 2:
            data->rectgun = data->gun_array[4];
            break;
        case 3:
            data->rectgun = data->gun_array[6];
            break;
        case 4:
            data->rectgun = data->gun_array[8];
            break;
    }
    change_gun2(window, event, data);
    sfSprite_setTextureRect(data->gun, data->rectgun);
}

void change_gun2(sfRenderWindow* window, sfEvent event, data_t* data)
{
    if (data->dir != 1) {
        return;
    }
    switch (data->numberofgun) {
        case 0:
            data->rectgun = data->gun_array[1];
            break;
        case 1:
            data->rectgun = data->gun_array[3];
            break;
        case 2:
            data->rectgun = data->gun_array[5];
            break;
        case 3:
            data->rectgun = data->gun_array[7];
            break;
        case 4:
            data->rectgun = data->gun_array[9];
            break;
    }
}
