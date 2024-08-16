/*
** EPITECH PROJECT, 2023
** text
** File description:
** text
*/

#include "../include/my_rpg.h"
char* get_text(int i);
char* get_text2(int i);
void allocate_txt(sfRenderWindow* window, sfEvent event, data_t* data)
{
    allocate_font(window, event, data);
    int i = 0;
    data->dialogues = (char**)malloc(sizeof(char*) * 28);
    while (i < 28) {
        int length = get_length(i);
        data->dialogues[i] = malloc(sizeof(char) * length);
        data->dialogues[i] = get_text(i);
        i++;
    }
    txt_string(window, event, data);
}

void allocate_font(sfRenderWindow* window, sfEvent event, data_t* data)
{
    data->font = malloc(sizeof(sfFont*));
    data->font = sfFont_createFromFile("c/Minecraft.ttf");
}

void txt_string(sfRenderWindow* window, sfEvent event, data_t* data)
{
    sfVector2f pos = {580, 860};
    data->array_txt = (sfText**)malloc(sizeof(sfText*) * 28);
    for (int i = 0; i < 28; i++) {
        data->array_txt[i] = malloc(sizeof(sfText*));
        data->array_txt[i] = sfText_create();
        sfText_setFont(data->array_txt[i], data->font);
        sfText_setCharacterSize(data->array_txt[i], 30);
        sfText_setColor(data->array_txt[i], sfBlack);
        sfText_setString(data->array_txt[i], data->dialogues[i]);
        sfText_setPosition(data->array_txt[i], pos);
    }
}

int get_length(int i)
{
    int a = 0;
    switch (i) {
        case 0: a = 22; break;
        case 1: a = 41; break;
        case 2: a = 41; break;
        case 3: a = 21; break;
        case 4: a = 35; break;
        case 5: a = 44; break;
        case 6: a = 46; break;
        case 7: a = 31; break;
        case 8: a = 16; break;
        case 9: a = 38; break;
        case 10: a = 52; break;
        case 11: a = 28; break;
        default: get_length2(i); break;
    }
    return a;
}

int get_length2(int i)
{
    int a = 0;
    switch (i) {
        case 12: a = 29; break;
        case 13: a = 44; break;
        case 14: a = 41; break;
        case 15: a = 34; break;
        case 16: a = 33; break;
        case 17: a = 48; break;
        case 18: a = 30; break;
        case 19: a = 37; break;
        case 20: a = 25; break;
        case 21: a = 34; break;
        case 22: a = 48; break;
        case 23: a = 35; break;
        case 24: a = 53; break;
        case 25: a = 26; break;
        case 26: a = 31; break;
        case 27: a = 14; break;
    }
    return a;
}
