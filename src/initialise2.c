/*
** EPITECH PROJECT, 2023
** initialise2.c
** File description:
** initialise2.c
*/

#include "../include/my_rpg.h"

void initialise_arrays(sfRenderWindow* window, sfEvent event, data_t* data)
{
    data->array0 = buttons_pos(window, event, data);
    data->array1 = buttons_pos1(window, event, data);
    data->array2 = buttons_pos2(window, event, data);
    data->array3 = buttons_pos3(window, event, data);
    data->array4 = buttons_pos4(window, event, data);
    data->array5 = buttons_pos5(window, event, data);
    data->array6 = buttons_pos6(window, event, data);
    data->array7 = buttons_pos7(window, event, data);
    data->array_map0 = arrayf_map0(window, event, data);
    data->array_map1 = arrayf_map1(window, event, data);
    data->array_map2 = arrayf_map2(window, event, data);
    data->array_map3 = arrayf_map3(window, event, data);
    data->array_map4 = arrayf_map4(window, event, data);
}
