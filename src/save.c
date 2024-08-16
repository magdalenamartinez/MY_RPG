/*
** EPITECH PROJECT, 2023
** save.c
** File description:
** save
*/

#include "../include/my_rpg.h"

void save_game(sfRenderWindow* window, sfEvent event, data_t * data)
{
    data->save = 1;
    int i = 0;
    FILE *archivo = fopen("data.txt", "w");
    if (archivo == NULL) {
        return;
    }
    fwrite(&data->map, sizeof(int), 1, archivo);
    fwrite(&data->dir, sizeof(int), 1, archivo);
    fwrite(&data->numhearts, sizeof(int), 1, archivo);
    fwrite(&data->lefthearts, sizeof(int), 1, archivo);
    fwrite(&data->numberofenemies, sizeof(int), 1, archivo);
    fwrite(&data->link_pos, sizeof(sfVector2f), 1, archivo);
    while (i < 12) {
        fwrite(&data->enemies[i].life, sizeof(int), 1, archivo);
        i++;
    }
    fclose(archivo);
    data->settings = 0;
}

void continue_f(sfRenderWindow* window, sfEvent event, data_t* data)
{
    FILE *archivo = fopen("data.txt", "r"); int i = 0;
    if (archivo == NULL) {
        return;
    }
    fread(&data->map, sizeof(int), 1, archivo);
    fread(&data->dir, sizeof(int), 1, archivo);
    fread(&data->numhearts, sizeof(int), 1, archivo);
    fread(&data->lefthearts, sizeof(int), 1, archivo);
    fread(&data->numberofenemies, sizeof(int), 1, archivo);
    fread(&data->link_pos, sizeof(sfVector2f), 1, archivo);
    while (i < 12) {
        fread(&data->enemies[i].life, sizeof(int), 1, archivo);
        i++;
    }
    fclose(archivo);
    sfSprite_setPosition(data->link, data->link_pos);
    which_map(window, event, data); data->display = 1;
    data->animation = 1; data->charge = 1;
    sfClock_restart(data->charging);
    sfClock_restart(data->charging2);
}
