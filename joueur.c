/**
 *\file joueur.c
 *\brief Définition du joueur.
 *\author MOSELLE Marie-Luc & MATHIEU STEINBACH Hugo
 *\date 2 novembre 2020
*/

#include "affichage.h"
#include "ressources.h"
#include "joueur.h"

// Constantes

SDL_Rect array_sprite_down[NB_ANIMATIONS] = {{0, 0, 16, 32}, {16, 0, 16, 32}, {32, 0, 16, 32}, {48, 0, 16, 32}};
SDL_Rect array_sprite_right[NB_ANIMATIONS] = {{0, 32, 16, 32}, {16, 32, 16, 32}, {32, 32, 16, 32}, {48, 32, 16, 32}};
SDL_Rect array_sprite_up[NB_ANIMATIONS] = {{0, 64, 16, 32}, {16, 64, 16, 32}, {32, 64, 16, 32}, {48, 64, 16, 32}};
SDL_Rect array_sprite_left[NB_ANIMATIONS] = {{0, 96, 16, 32}, {16, 96, 16, 32}, {32, 96, 16, 32}, {48, 96, 16, 32}};

void init_player(player_t *player)
{
    player->orientation = ORIENTATION_DOWN;
    player->last_orientation = ORIENTATION_DOWN;
    for (int i = 0; i < 4; ++i)
    {
        player->animation[i] = array_sprite_down[i];
        player->animation[i + 4] = array_sprite_right[i];
        player->animation[i + 8] = array_sprite_up[i];
        player->animation[i + 12] = array_sprite_left[i];
    }
    player->animation_speed = 30;
    player->current_frame = 0;
    player->frames = 4;
    player->frame = 0;
    player->is_moving = false;
}


