/**
 *\file sprite.c
 *\brief Gestion des sprites.
 *\author MOSELLE Marie-Luc & MATHIEU STEINBACH Hugo
 *\date 2 novembre 2020
*/

#include "sprite.h"

void init_sprite(sprite_t *sprite, int x, int y, int w, int h, int s, bool is_visible)
{
    sprite->x = x;
    sprite->y = y;
    sprite->w = w;
    sprite->h = h;
    sprite->s = s;
    sprite->is_visible = is_visible;
}