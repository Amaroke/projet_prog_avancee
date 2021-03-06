/**
 *\file affichage.h
 *\brief Déclaration des fonctions d'affichage.
 *\author MOSELLE Marie-Luc & MATHIEU STEINBACH Hugo
 *\date 14 novembre 2020
*/

#ifndef AFFICHAGE_H
#define AFFICHAGE_H

#include <SDL2/SDL.h>
#include <stdbool.h>
#include "ressources.h"
#include "jeu.h"
#include "sprite.h"
#include "fonctions_ttf.h"

/**
 *\brief La fonction initialise le jeu.
 *\param window La fenêtre.
 *\param renderer L'affichage.
 *\param ressources Les ressources.
 *\param game Le jeu.
*/
void init(SDL_Window **window, SDL_Renderer **renderer, ressources_t *ressources, game_t *game);

/**
 *\brief La fonction nettoie le jeu.
 *\param window La fenêtre.
 *\param renderer L'affichage.
 *\param ressources Les ressources.
 *\param game Le jeu.
*/
void clean(SDL_Window *window, SDL_Renderer *renderer, ressources_t *ressources, game_t *game);

/**
 *\brief La fonction rafraîchit l'affichage du jeu.
 *\param renderer L'affichage.
 *\param game Le jeu.
 *\param ressources Les ressources.
*/
void refresh_graphics(SDL_Renderer *renderer, game_t *game, ressources_t *ressources);

/**
 *\brief La fonction applique la texture du sprite sur l'affichage lié à l'écran de jeu.
 *\param renderer L'affichage.
 *\param texture La texture du sprite.
 *\param sprite Le sprite.
 *\param src Le rectangle source.
 *\param x Le décalage sur les abscisses.
 *\param y Le décalage sur les ordonnées.
*/
void apply_sprite(SDL_Renderer *renderer, SDL_Texture *texture, sprite_t *sprite, SDL_Rect src, int x, int y);

/**
 *\brief La fonction applique la texture du fond sur le renderer lié à l'affichage lié à l'écran de jeu.
 *\param renderer L'affichage.
 *\param ressources Les ressources.
*/
void apply_background(SDL_Renderer *renderer, ressources_t *ressources);

/**
 *\brief La fonction applique la texture du bloc sur le renderer lié à l'affichage lié à l'écran de jeu.
 *\param renderer L'affichage.
 *\param texture La texture.
 *\param blocks La matrice de blocs.
*/
void apply_block(SDL_Renderer *renderer, ressources_t ressources, block_t **blocks);

#endif