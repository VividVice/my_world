/*
** EPITECH PROJECT, 2022
** my_world
** File description:
** help
*/

#include "../../include/my.h"

int help(window_t *w)

{
	if ((*w).h_up == 1) {
		sfVector2f vecteur = {200, 150};

		(*w).t_p_h = sfTexture_createFromFile("assets/help_p.png", NULL);
		(*w).popup_help = sfSprite_create();
		sfSprite_setTexture((*w).popup_help, (*w).t_p_h, sfTrue);
		sfSprite_setPosition ((*w).popup_help, vecteur);
		sfRenderWindow_drawSprite((*w).window, (*w).popup_help, NULL);
	}
	return (0);
}