/*
** EPITECH PROJECT, 2022
** my_world
** File description:
** gui_3
*/

#include "../../include/my.h"

void menu_save(window_t *w)
{
	sfVector2f vecteur = {763, 192};

	(*w).t_save_m = sfTexture_createFromFile(
		"assets/menu_save.png", NULL);
	(*w).save_m = sfSprite_create();
	sfSprite_setTexture((*w).save_m, (*w).t_save_m, sfTrue);
	sfSprite_setPosition ((*w).save_m, vecteur);
	sfRenderWindow_drawSprite((*w).window, (*w).save_m, NULL);
}

void gui_brush(window_t *w)
{
	brush_on(w);
	brush_size_menu(w);
	brush_resize(w);
}

void menu_load(window_t *w)
{
	sfVector2f vecteur = {763, 229};

	(*w).t_load_m = sfTexture_createFromFile(
		"assets/menu_load.png", NULL);
	(*w).load_m = sfSprite_create();
	sfSprite_setTexture((*w).load_m, (*w).t_load_m, sfTrue);
	sfSprite_setPosition ((*w).load_m, vecteur);
	sfRenderWindow_drawSprite((*w).window, (*w).load_m, NULL);
}

void menu_load_na(window_t *w)
{
	sfVector2f vecteur = {763, 229};

	(*w).t_load_m = sfTexture_createFromFile(
		"assets/menu_load_na.png", NULL);
	(*w).load_m = sfSprite_create();
	sfSprite_setTexture((*w).load_m, (*w).t_load_m, sfTrue);
	sfSprite_setPosition ((*w).load_m, vecteur);
	sfRenderWindow_drawSprite((*w).window, (*w).load_m, NULL);
}