/**
 *\file joueur.c
 *\brief Définition du joueur.
 *\author MOSELLE Marie-Luc & MATHIEU STEINBACH Hugo
 *\date 2 novembre 2020
*/

#include "level.h"


void init_level(game_t *game, level_t level)
{
    init_data(game);
    switch (level)
    {
    case DEBUG:
        game->etat_partie = IN_GAME;
        init_player(game->player, 50, 50);
        init_vortex(game->vortex, 100, 100);
        int_to_block(game->block, txt_to_int("ressources/levels/test_collisions.txt"));
        break;
    case LEVEL_1:
        game->etat_partie = IN_GAME;
        init_player(game->player, 50, 50);
        init_vortex(game->vortex, 100, 100);
        int_to_block(game->block, txt_to_int("ressources/levels/level_1.txt"));
        break;
    case LEVEL_2:
        game->etat_partie = IN_GAME;
        init_player(game->player, 50, 50);
        init_vortex(game->vortex, 100, 100);
        int_to_block(game->block, txt_to_int("ressources/levels/level_2.txt"));
        break;
    case LEVEL_3:
        game->etat_partie = IN_GAME;
        init_player(game->player, 50, 50);
        init_vortex(game->vortex, 100, 100);
        int_to_block(game->block, txt_to_int("ressources/levels/level_3.txt"));
        break;
    case LEVEL_4:
        game->etat_partie = IN_GAME;
        init_player(game->player, 50, 50);
        init_vortex(game->vortex, 100, 100);
        int_to_block(game->block, txt_to_int("ressources/levels/level_4.txt"));
        break;
    case LEVEL_5:
        game->etat_partie = IN_GAME;
        init_player(game->player, 50, 50);
        init_vortex(game->vortex, 100, 100);
        int_to_block(game->block, txt_to_int("ressources/levels/level_5.txt"));
        break;
    case LEVEL_6:
        game->etat_partie = IN_GAME;
        init_player(game->player, 50, 50);
        init_vortex(game->vortex, 100, 100);
        int_to_block(game->block, txt_to_int("ressources/levels/level_6.txt"));
        break;
    }
}

/*   init_data(&game, 100, 100, 300, 100);
            game.etat_partie = LEVEL_1;
            int_to_block(game.block, txt_to_int("ressources/levels/level_1.txt"));
            choix = 0;
            break;
        
        case 2:
            init_data(&game, 100, 100, 300, 100);
            game.etat_partie = LEVEL_2;
            int_to_block(game.block, txt_to_int("ressources/levels/test.txt"));
            choix = 0;
            break;

        case 3:
            init_data(&game, 100, 100, 300, 300);
            game.etat_partie = DEBUG;
            int_to_block(game.block, txt_to_int("ressources/levels/test_collisions.txt"));
            choix = 0;
            break;*/