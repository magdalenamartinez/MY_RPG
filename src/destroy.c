/*
** EPITECH PROJECT, 2023
** destroy
** File description:
** destroy
*/

#include "../include/my_rpg.h"

void destroy_data(sfRenderWindow* window, sfEvent event, data_t* data)
{
        sfClock_destroy(data->npcsclock);
        sfClock_destroy(data->npcsclock2);
        sfClock_destroy(data->charging);
        sfClock_destroy(data->charging2);
        sfClock_destroy(data->clock);
        sfClock_destroy(data->levelupclock);
        sfClock_destroy(data->levelupclock2);
        sfSprite_destroy(data->screen0);
        sfSprite_destroy(data->castle);
        sfSprite_destroy(data->hearts);
        destroy_data2(window, event, data);
        destroy_data3(window, event, data);
        destroy_data4(window, event, data);
}

void free_buttons_pos(int **array, int max)
{
    for (int i = 0; i < max; i++) {
        free(array[i]);
    }
    free(array);
}

void destroy_data2(sfRenderWindow* window, sfEvent event, data_t* data)
{
    sfSprite_destroy(data->set0);
    sfSprite_destroy(data->set1);
    sfSprite_destroy(data->lifeBar);
    sfSprite_destroy(data->v0);
    sfSprite_destroy(data->v1);
    sfSprite_destroy(data->v2);
    sfSprite_destroy(data->v3);
    sfSprite_destroy(data->v4);
    sfSprite_destroy(data->v5);
    sfSprite_destroy(data->v6);
    sfSprite_destroy(data->v7);
    sfSprite_destroy(data->v8);
    sfSprite_destroy(data->v00);
    sfSprite_destroy(data->v11);
    sfSprite_destroy(data->v22);
    sfSprite_destroy(data->v33);
    sfSprite_destroy(data->v44);
    sfSprite_destroy(data->v55);
}

void destroy_data3(sfRenderWindow* window, sfEvent event, data_t* data)
{
    sfMusic_destroy(data->story_s);
    sfMusic_destroy(data->attack_music);
    sfMusic_destroy(data->end_m);
    sfMusic_destroy(data->over_m);
    sfMusic_destroy(data->main_theme);
    free_buttons_pos(data->array0, 5);
    free_buttons_pos(data->array1, 5);
    free_buttons_pos(data->array2, 2);
    free_buttons_pos(data->array3, 3);
    free_buttons_pos(data->array4, 4);
    free_buttons_pos(data->array5, 1);
    free_buttons_pos(data->array6, 3);
    free_buttons_pos(data->array7, 2);
    sfFont_destroy(data->font);
    sfSprite_destroy(data->gun2);
    sfSprite_destroy(data->people);
    free_buttons_pos(data->array_map0, 5);
    free_buttons_pos(data->array_map1, 6);
    free_buttons_pos(data->array_map2, 10);
    free_buttons_pos(data->array_map3, 6);
}

void destroy_data4(sfRenderWindow* window, sfEvent event, data_t* data)
{
        sfSprite_destroy(data->levelup);
        sfSprite_destroy(data->dialogue_sp);
        sfSprite_destroy(data->inventary);
        sfSprite_destroy(data->volumeicon);
        sfSprite_destroy(data->enemies_sp);
        sfSprite_destroy(data->screen1);
        sfSprite_destroy(data->story0);
        sfSprite_destroy(data->zelda);
        sfSprite_destroy(data->volumeMenu);
        sfSprite_destroy(data->v66);
        sfSprite_destroy(data->v77);
        sfSprite_destroy(data->v88);
        sfSprite_destroy(data->help_m);
        sfSprite_destroy(data->set_m);
        sfSprite_destroy(data->gameover);
        sfSprite_destroy(data->theend);
        free_buttons_pos(data->array_map4, 11);
        sfMusic_destroy(data->intro);
}
