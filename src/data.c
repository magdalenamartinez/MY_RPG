/*
** EPITECH PROJECT, 2023
** data.c
** File description:
** data.c
*/

#include "../include/my_rpg.h"

void create_data(sfRenderWindow* window, sfEvent event)
{
    data_t* data = init_data();
    allocate_memory(window, event, data);
    create_sprites(window, event, data);
    data->colorenemy = sfSprite_getColor(data->enemies_sp);
    data->color = sfSprite_getColor(data->link);
    allocate_txt(window, event, data);
    loop(window, event, data);
    destroy_function(window, event, data);
}

void initialise_gunarray(data_t* data)
{
    data->gun_array = malloc(sizeof(sfIntRect) * 10);
    for (int i = 0; i < 10; i++) {
        data->gun_array[i].height = 39;
        data->gun_array[i].width = 36;
        data->gun_array[i].left = 11;
    }
    data->gun_array[0].top = 11;
    data->gun_array[1].top = 56;
    data->gun_array[2].top = 152;
    data->gun_array[3].top = 100;
    data->gun_array[4].top = 200;
    data->gun_array[5].top = 245;
    data->gun_array[6].top = 335;
    data->gun_array[7].top = 289;
    data->gun_array[8].top = 366;
    data->gun_array[9].top = 408;
}

void allocate_mem_vol(sfRenderWindow* window, sfEvent event, data_t* data)
{
    data->v0 = malloc(sizeof(sfSprite*));
    data->v1 = malloc(sizeof(sfSprite*));
    data->v2 = malloc(sizeof(sfSprite*));
    data->v3 = malloc(sizeof(sfSprite*));
    data->v4 = malloc(sizeof(sfSprite*));
    data->v5 = malloc(sizeof(sfSprite*));
    data->v6 = malloc(sizeof(sfSprite*));
    data->v7 = malloc(sizeof(sfSprite*));
    data->v8 = malloc(sizeof(sfSprite*));
    data->v00 = malloc(sizeof(sfSprite*));
    data->v11 = malloc(sizeof(sfSprite*));
    data->v22 = malloc(sizeof(sfSprite*));
    data->v33 = malloc(sizeof(sfSprite*));
    data->v44 = malloc(sizeof(sfSprite*));
    data->v55 = malloc(sizeof(sfSprite*));
    data->v66 = malloc(sizeof(sfSprite*));
    data->v77 = malloc(sizeof(sfSprite*));
    data->v88 = malloc(sizeof(sfSprite*));
}

data_t* init_data(void)
{
    data_t* data = malloc(sizeof(data_t));
    return data;
}
