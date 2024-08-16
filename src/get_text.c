/*
** EPITECH PROJECT, 2023
** get_text
** File description:
** get_text
*/
#include "../include/my_rpg.h"
char* get_text(int i);
char* get_text2(int i);
char* get_text3(int i);

char* get_text(int i)
{
    char* aux;
    switch (i) {
        case 0: aux = "Link I'm very scared."; break;
        case 1: aux = "I'm very happy that you came to help us!"; break;
        case 2: aux = "Why do you always wear green clothes...?"; break;
        case 3: aux = "I miss our princess."; break;
        case 4: aux = "I trust you Link, you can save us."; break;
        case 5: aux = "If you need help I will help you to fight. "; break;
        case 6: aux = "What a good day to be outside, but I'm scared"; break;
        case 7: aux = "My father went to your school."; break;
        case 8: aux = "You look tired."; break;
        case 9: aux = "The princess Zelda has been kidnapped"; break;
        case 10: aux = "and the city of Hyrule has been invaded by monsters";
        break;
        default: aux = get_text2(i);
    }
    return aux;
}

char* get_text2(int i)
{
    char* aux;
    switch (i) {
        case 11: aux = "The citizens are terrified,"; break;
        case 12: aux = "They trust you to save them."; break;
        case 13: aux = "You will have to fight against all of them."; break;
        case 14: aux = "If you want to get the freedom of Zelda.";
            break;
        case 15: aux = "Good luck Link, Zelda awaits you."; break;
        case 16: aux = "I can help you, I'm very strong."; break;
        case 17:
            aux = "The city of Hyrule has been invaded by monsters";
            break;
        case 18: aux = "and Zelda has been kidnapped."; break;
        default: aux = get_text3(i); break;
    }
    return aux;
}

char* get_text3(int i)
{
    char * aux;
    switch (i) {
        case 19:
            aux = "The citizens trust you to save them.";
            break;
        case 20: aux = "You are their last hope."; break;
        case 21: aux = "Link, You are the Hero of Hyrule.";
        break;
        case 22: aux = "Thank you for freeing our city and rescuing me.";
        break;
        case 23: aux = "I will always be in debt with you."; break;
        case 24: aux = "Link I trusted you, I thought that you could save me";
        break;
        case 25: aux = "Our city will be destroy."; break;
        case 26: aux = "It was a pleasure to meet you."; break;
        case 27: aux = "Goodbye Link."; break;
    }
    return aux;
}

void draw_txt(sfRenderWindow* window, sfEvent event, data_t* data)
{
    sfText *t = sfText_create();
    sfText_setString(t, data->npcs[data->i].name);
    sfText_setPosition(t, (sfVector2f) {580, 705});
    sfText_setStyle(t, sfTextBold);
    sfText_setCharacterSize(t, 30);
    sfText_setColor(t, sfWhite);
    sfText_setFont(t, data->font);
    sfRenderWindow_drawText(window,  t, NULL);
    sfRenderWindow_drawText(window, data->array_txt[data->i], NULL);
}
