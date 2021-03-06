/**
 *\file fonctions_ttf.h
 *\brief Déclaration des fonctions d'affichage de textes.
 *\author MOSELLE Marie-Luc & MATHIEU STEINBACH Hugo
 *\date 31 décembre 2020
*/

#ifndef FONCTIONS_TTF_H
#define FONCTIONS_TTF_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

/**
 * \brief La fonction initialise l'environnement TTF.
*/
void init_ttf();

/**
 * \brief La fonction charge une police.
 * \param path Le chemin du fichier correpondant à la police.
 * \param font_size La taille de la police.
 * \return La police chargée.
*/
TTF_Font *load_font(const char *path, int font_size);

/**
 * \brief La fonction applique un texte dans une certaine police sur le renderer à une certaine position et avec une certaine dimension.
 * \param renderer Le renderer.
 * \param x L'abscisse du coin en haut à gauche du texte.
 * \param y L'ordonnée du coin en haut à gauche du texte.
 * \param w La largeur du message.
 * \param h La hauteur du message.
 * \param text Le texte à afficher.
 * \param font La police.
*/
void apply_text(SDL_Renderer *renderer, int x, int y, int w, int h, const char *text, TTF_Font *font, int r, int g, int b);

/**
 * \brief La fonction libère l'espace mémoire alloué au texte.
 * \param font La police.
*/
void clean_font(TTF_Font *font);

#endif