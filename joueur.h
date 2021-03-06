/**
 *\file joueur.h
 *\brief Déclaration des fonctions du joueur.
 *\author MOSELLE Marie-Luc & MATHIEU STEINBACH Hugo
 *\date 2 novembre 2020
*/

#ifndef JOUEUR_H
#define JOUEUR_H

#define MOVING_STEP 1
#define ORIENTATION_DOWN 0
#define ORIENTATION_RIGHT 4
#define ORIENTATION_UP 8
#define ORIENTATION_LEFT 12
#define NB_ANIMATIONS 4
#define HP_MAX 1000

#include <SDL2/SDL.h>
#include "sprite.h"

typedef struct player_s
{
    sprite_t sprite;        /*!<Le sprite du joueur.*/
    int orientation;        /*!<L'orientation du joueur.*/
    int last_orientation;   /*!<La dernière orientation du joueur.*/
    SDL_Rect animation[16]; /*!<Les sprites découpés des animations du joueur.*/
    int animation_speed;    /*!<La vitesse d'animation.*/
    int current_frame;      /*!<La frame actuelle.*/
    int frames;             /*!<Le nombre de sprites qui compose une animation complète.*/
    int frame;              /*!<Le calcul de la frame suivante.*/
    bool is_moving;         /*!<Le joueur se déplace-t-il ?*/
    int health_point;       /*!<Les points de vie du joueur*/
} player_t;

/**
 *\brief La fonction initialise le joueur.
 *\param player Le player à initialiser.
*/
void init_player(player_t *player, int x, int y);

#endif