/*
** EPITECH PROJECT, 2023
** sprites2
** File description:
** sprites2
*/

#include "../include/my_rpg.h"

sfRectangleShape* init_rectangleshape(sfVector2f position, sfVector2f size)
{
    sfRectangleShape* rect = malloc(sizeof(sfRectangleShape*));
    rect = sfRectangleShape_create();
    if (rect == NULL) {
        return;
    }
    sfRectangleShape_setSize(rect, size);
    sfRectangleShape_setPosition(rect, position);
    return rect;
}

void initialise_rect(sfRenderWindow* window, sfEvent event, data_t* data)
{
    data->rect.height = 32;
    data->rect.width = 31;
    data->rect.left = 5;
    data->rect.top = 242;
    data->rect4.height = 350;
    data->rect4.width = 990;
    data->rect4.left = 0;
    data->rect4.top = 0;
    data->rectgun.height = 39;
    data->rectgun.width = 36;
    data->rectgun.left = 11;
    data->rectgun.top = 11;
    initialise_rect2(window, event, data);
}

void initialise_rect2(sfRenderWindow* window, sfEvent event, data_t* data)
{
    data->recth.height = 16;
    data->recth.width = 17;
    data->recth.left = 33;
    data->recth.top = 0;
    data->rect_lifebar.height = 4;
    data->rect_lifebar.width = 28;
    data->rect_lifebar.left = 4;
    data->rect_lifebar.top = 3;
    data->rect_loadbar.height = 4;
    data->rect_loadbar.width = 28;
    data->rect_loadbar.left = 4;
    data->rect_loadbar.top = 59;
    sfSprite_setTextureRect(data->link, data->rect);
    sfSprite_setTextureRect(data->lifeBar, data->rect_loadbar);
    sfSprite_setTextureRect(data->load, data->rect_lifebar);
    sfSprite_setTextureRect(data->hearts, data->recth);
    sfSprite_setTextureRect(data->gun, data->rectgun);
}

void red_rectangle(sfRenderWindow* window, sfEvent event, data_t* d)
{
    sfVector2f sizered = {58, 58};
    d->redRectangle = init_rectangleshape(d->redvector, sizered);
    sfColor c = sfColor_fromRGBA(255, 0, 0, 100);
    sfRectangleShape_setFillColor(d->redRectangle, c);
}

void create_linksprites(sfRenderWindow* window, sfEvent event, data_t* d)
{
    sfVector2f p1 = {0, 0};
    sfVector2f p2 = {2, 10};
    sfVector2f pi = {800, 950};
    sfVector2f si = {4,4};
    red_rectangle(window, event, d);
    d->s.x = 3; d->s.y = 3;
    sfVector2f g = {12,12};
    sfVector2f s = {3.5, 3.5};
    sfVector2f a = {1,1};
    sfVector2f pos = {780,850};
    d->lifeBar = crea(sfTexture_createFromFile("c/life.png", NULL), p2, d->s);
    d->load = crea(sfTexture_createFromFile("c/life.png", NULL), pos, g);
    d->link = crea(sfTexture_createFromFile("c/link3.png", NULL), p1, d->s);
    d->people = crea(sfTexture_createFromFile("c/npcs.png", NULL), p1, s);
    d->enemies_sp = crea(sfTexture_createFromFile("c/en3.png", NULL), p1, s);
    d->gun = crea(sfTexture_createFromFile("c/guns2.png", NULL), p1, d->s);
    d->gun2 = crea(sfTexture_createFromFile("c/guns2.png", NULL), p1, d->s);
    d->hearts = crea(sfTexture_createFromFile("c/hearts.png", NULL), p2, d->s);
    d->inventary = crea(sfTexture_createFromFile("c/inv.png", NULL), pi, si);
    initialise_rect(window, event, d);
}
