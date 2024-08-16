/*
** EPITECH PROJECT, 2023
** initialise.c
** File description:
** initialise.c
*/

#include "../include/my_rpg.h"

void initialise_values_3(data_t* data)
{
    sfSprite_setPosition(data->link, data->link_pos);
    sfSprite_setPosition(data->gun, data->link_pos);
    data->counter = 0;
    data->level = 0;
    data->upclock_sec = 0;
    data->yes = 0;
    data->sumar = 0;
    data->restar = 0;
    data->newgame = 0;
    data->first = 0;
    data->end = 0;
    data->over = 0;
    data->pressed = 0;
    data->zelda_pos.x = 1500;
    data->zelda_pos.y = 500;
    data->zelda_rect.width = 27;
    data->zelda_rect.height = 29;
    data->zelda_rect.left = 116;
    data->zelda_rect.top = 0;
    data->iteration = 9;
}

void initialise_values_2(data_t* data)
{
    data->help = 0;
    data->volumebar0 = 6;
    data->numhearts = 6;
    data->lefthearts = 6;
    data->poshearts.x = 10;
    data->poshearts.y = 10;
    data->volumebar1 = 7;
    data->link_pos.x = 550;
    data->map = 0;
    data->playing = 0;
    data->link_pos.y = 10;
    data->ataque = 0;
    data->pause = 0;
    data->cambiar = 0;
    data->redvector.y = 954;
    data->redvector.x = 804;
    data->numberofgun = 0;
    data->not_change = 0;
    data->maintheme_play = 0;
    data->activate_fight = 0;
}

void initialise_values(data_t* data)
{
    data->display = 0;
    data->old_display = 0;
    data->olddirection = -1;
    data->f1 = 0;
    data->parler = 0;
    data->f2 = 0;
    data->rep = 0;
    data->sec = 0;
    data->ter = 0;
    data->pri = 0;
    data->m = 0;
    data->numberofenemies = 11;
    data->change_color = 0;
    data->close = 0;
    data->volume = 0;
    data->settings = 0;
    data->yes2 = 0;
    data->ya = 0;
    initialise_values_2(data);
    initialise_values_3(data);
}

void initialise_music(sfRenderWindow* window, sfEvent event, data_t* data)
{
    data->intro = sfMusic_createFromFile("c/intro.ogg");
    data->story_s = sfMusic_createFromFile("c/story_s.ogg");
    data->attack_music = sfMusic_createFromFile("c/fight.ogg");
    data->end_m = sfMusic_createFromFile("c/end_m.ogg");
    data->over_m = sfMusic_createFromFile("c/over_m.ogg");
    data->main_theme = sfMusic_createFromFile("c/maintheme.ogg");
    data->footsteps = sfSoundBuffer_createFromFile("c/footsteps.ogg");
    data->gover_b = sfSoundBuffer_createFromFile("c/gameover_s.ogg");
    data->level_b = sfSoundBuffer_createFromFile("c/level_s.ogg");
    data->hurtlink_buf = sfSoundBuffer_createFromFile("c/hurtlink.ogg");
    data->dielink_buf = sfSoundBuffer_createFromFile("c/dielink.ogg");
    data->hurtenemy_buf = sfSoundBuffer_createFromFile("c/hurtenemy.ogg");
    data->attack_buf = sfSoundBuffer_createFromFile("c/attack.ogg");
    data->footsteps_sound = sfSound_create();
    data->level_s = sfSound_create(); data->gover_s = sfSound_create();
    data->hurtlink_sound = sfSound_create();
    data->dielink_sound = sfSound_create();
    data->hurtenemy_sound = sfSound_create();
    data->attack_sound = sfSound_create();
    initialise_buffer(window, event, data);
}

void initialise_buffer(sfRenderWindow* window, sfEvent event, data_t* data)
{
    sfSound_setBuffer(data->footsteps_sound, data->footsteps);
    sfSound_setBuffer(data->gover_s, data->gover_b);
    sfSound_setBuffer(data->level_s, data->level_b);
    sfSound_setBuffer(data->hurtlink_sound, data->hurtlink_buf);
    sfSound_setBuffer(data->dielink_sound, data->dielink_buf);
    sfSound_setBuffer(data->hurtenemy_sound, data->hurtenemy_buf);
    sfSound_setBuffer(data->attack_sound, data->attack_buf);
    data->rect2.height = 800;
    data->rect2.width = 1700;
    data->rect2.left = 0;
    data->rect2.top = 0;
}
