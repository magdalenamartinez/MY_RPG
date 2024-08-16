/*
** EPITECH PROJECT, 2023
** allocate
** File description:
** allocate
*/

#include "../include/my_rpg.h"

void allocate_memory(sfRenderWindow* window, sfEvent event, data_t* data)
{
    allocate_npcs(window, event, data);
    allocate_enemies(window, event, data);
    data->link = malloc(sizeof(sfSprite*));
    data->people = malloc(sizeof(sfSprite*));
    data->enemies_sp = malloc(sizeof(sfSprite*));
    data->gun = malloc(sizeof(sfSprite*));
    data->gun2 = malloc(sizeof(sfSprite*));
    data->hearts = malloc(sizeof(sfSprite*));
    data->inventary = malloc(sizeof(sfSprite*));
    data->lifeBar = malloc(sizeof(sfSprite*));
    data->load = malloc(sizeof(sfSprite*));
    allocate_music(data);
    allocate_screen(data);
    allocate_menu(data);
    allocate_clock(data);
    data->redRectangle = malloc(sizeof(sfRectangleShape*));
    data->redRectangle = sfRectangleShape_create();
    initialise_gunarray(data);
    allocate_mem_vol(window, event, data);
}

void allocate_clock(data_t* data)
{
    data->clock = malloc(sizeof(sfClock*));
    data->npcsclock = malloc(sizeof(sfClock*));
    data->npcsclock2 = malloc(sizeof(sfClock*));
    data->levelupclock = malloc(sizeof(sfClock*));
    data->charging = malloc(sizeof(sfClock*));
    data->charging2 = malloc(sizeof(sfClock*));
    data->levelupclock2 = malloc(sizeof(sfClock*));
}

void allocate_screen(data_t* data)
{
    data->screen0 = malloc(sizeof(sfSprite*));
    data->castle = malloc(sizeof(sfSprite*));
    data->story0 = malloc(sizeof(sfSprite*));
    data->zelda = malloc(sizeof(sfSprite*));
    data->screen1 = malloc(sizeof(sfSprite*));
    data->gameover = malloc(sizeof(sfSprite*));
    data->theend = malloc(sizeof(sfSprite*));
    data->levelup = malloc(sizeof(sfSprite*));
    data->dialogue_sp = malloc(sizeof(sfSprite*));
}

void allocate_menu(data_t* data)
{
    data->volumeicon = malloc(sizeof(sfSprite*));
    data->volumeMenu = malloc(sizeof(sfSprite*));
    data->set0 = malloc(sizeof(sfSprite*));
    data->set1 = malloc(sizeof(sfSprite*));
    data->help_m = malloc(sizeof(sfSprite*));
}

void allocate_music(data_t* data)
{
    data->footsteps = malloc(sizeof(sfSoundBuffer*));
    data->gover_b = malloc(sizeof(sfSoundBuffer*));
    data->hurtlink_buf = malloc(sizeof(sfSoundBuffer*));
    data->level_b = malloc(sizeof(sfSoundBuffer*));
    data->dielink_buf = malloc(sizeof(sfSoundBuffer*));
    data->hurtenemy_buf = malloc(sizeof(sfSoundBuffer*));
    data->attack_buf = malloc(sizeof(sfSoundBuffer*));
    data->intro = malloc(sizeof(sfMusic*));
    data->story_s = malloc(sizeof(sfMusic*));
    data->attack_music = malloc(sizeof(sfMusic*));
    data->end_m = malloc(sizeof(sfMusic*));
    data->over_m = malloc(sizeof(sfMusic*));
    data->main_theme = malloc(sizeof(sfMusic*));
}
