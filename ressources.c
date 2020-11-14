/**
 *\file ressources.c
 *\brief Gestion des ressources.
 *\author MOSELLE Marie-Luc & MATHIEU STEINBACH Hugo
 *\date 2 novembre 2020
*/

#include "ressources.h"

void clean_ressources(ressources_t *ressources)
{
	clean_texture(ressources->background);
	clean_texture(ressources->player);
}

void init_ressources(SDL_Renderer *renderer, ressources_t *ressources)
{
	ressources->background = charger_image("ressources/background.bmp", renderer, 0, 0, 0);
	ressources->player = charger_image("ressources/sprites/player/player.bmp", renderer, 0, 0, 0);
}

