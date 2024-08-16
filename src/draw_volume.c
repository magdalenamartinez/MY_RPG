/*
** EPITECH PROJECT, 2023
** draw_volume
** File description:
** drawvolume
*/

#include "../include/my_rpg.h"

void draw_volumebar(sfRenderWindow* window, sfEvent event, data_t* data)
{
    sfSprite *a;
    switch (data->volumebar0) {
        case 0: data->music_vol = 0; a = data->v0; break;
        case 1: data->music_vol = 10; a = data->v1; break;
        case 2: data->music_vol = 20; a = data->v2; break;
        case 3: data->music_vol = 30; a = data->v3; break;
        case 4: data->music_vol = 40; a = data->v4; break;
        case 5: data->music_vol = 50; a = data->v5; break;
        case 6: data->music_vol = 60; a = data->v6; break;
        case 7: data->music_vol = 80; a = data->v7; break;
        case 8: data->music_vol = 100; a = data->v8; break;
    }
    sfMusic_setVolume(data->intro, data->music_vol);
    sfMusic_setVolume(data->main_theme, data->music_vol);
    sfMusic_setVolume(data->story_s, data->music_vol);
    sfRenderWindow_drawSprite(window, a, NULL);
}

void draw_volumebar1(sfRenderWindow* window, sfEvent event, data_t* data)
{
    sfSprite *a;
    switch (data->volumebar1) {
        case 0: data->ef_vol = 0; a = data->v00; break;
        case 1: data->ef_vol = 10; a = data->v11; break;
        case 2: data->ef_vol = 20; a = data->v22; break;
        case 3: data->ef_vol = 30; a = data->v33; break;
        case 4: data->ef_vol = 40; a = data->v44; break;
        case 5: data->ef_vol = 50; a = data->v55; break;
        case 6: data->ef_vol = 60; a = data->v66; break;
        case 7: data->ef_vol = 80; a = data->v77; break;
        case 8: data->ef_vol = 100; a = data->v88; break;
    }
    sfSound_setVolume(data->footsteps_sound, data->ef_vol);
    sfSound_setVolume(data->gover_s, data->ef_vol);
    sfSound_setVolume(data->level_s, data->ef_vol);
    sfSound_setVolume(data->hurtlink_sound, data->ef_vol);
    sfSound_setVolume(data->dielink_buf, data->ef_vol);
    sfSound_setVolume(data->hurtenemy_buf, data->ef_vol);
    sfSound_setVolume(data->attack_buf, data->ef_vol);
    sfRenderWindow_drawSprite(window, a, NULL);
}
