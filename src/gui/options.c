/*
** EPITECH PROJECT, 2022
** my_world
** File description:
** options
*/

#include "../../include/my.h"

void options(window_t *w)
{
	if ((*w).options == 1) {
		sfVector2f vecteur = {200, 150};

		(*w).t_popup = sfTexture_createFromFile("assets/options.png", NULL);
		(*w).popup = sfSprite_create();
		sfSprite_setTexture((*w).popup, (*w).t_popup, sfTrue);
		sfSprite_setPosition ((*w).popup, vecteur);
		sfRenderWindow_drawSprite((*w).window, (*w).popup, NULL);
		volume(w);
		volume_bis(w);
		reset_button(w);
		close_options(w);
	}
}

void volume(window_t *w)
{
	if ((*w).volume == 0) {
		(*w).t_popup = sfTexture_createFromFile(
			"assets/volume/zero.png", NULL);
		sfMusic_setVolume ((*w).bg_music, 0);
	}
	if ((*w).volume == 1) {
		(*w).t_popup = sfTexture_createFromFile(
			"assets/volume/twentyfive.png", NULL);
		sfMusic_setVolume ((*w).bg_music, 25);
	}
	if ((*w).volume == 2) {
		(*w).t_popup = sfTexture_createFromFile(
			"assets/volume/fifty.png", NULL);
		sfMusic_setVolume ((*w).bg_music, 50);
	}
	volume_follow(w);
}

void volume_bis(window_t *w)
{
	sfVector2f vecteur = {275, 200};

	(*w).popup = sfSprite_create();
	sfSprite_setTexture((*w).popup, (*w).t_popup, sfTrue);
	sfSprite_setPosition ((*w).popup, vecteur);
	sfRenderWindow_drawSprite((*w).window, (*w).popup, NULL);
}

void reset_button(window_t *w)
{
	sfVector2f vecteur = {275, 300};

	(*w).t_popup = sfTexture_createFromFile("assets/options_reset.png", NULL);
	(*w).popup = sfSprite_create();
	sfSprite_setTexture((*w).popup, (*w).t_popup, sfTrue);
	sfSprite_setPosition ((*w).popup, vecteur);
	sfRenderWindow_drawSprite((*w).window, (*w).popup, NULL);
}

void close_options(window_t *w)
{
	sfVector2f vecteur = {547, 170};

	(*w).t_popup = sfTexture_createFromFile("assets/menu_exit.png", NULL);
	(*w).popup = sfSprite_create();
	sfSprite_setTexture((*w).popup, (*w).t_popup, sfTrue);
	sfSprite_setPosition ((*w).popup, vecteur);
	sfRenderWindow_drawSprite((*w).window, (*w).popup, NULL);
}