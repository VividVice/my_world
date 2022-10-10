/*
** EPITECH PROJECT, 2022
** my_world
** File description:
** gui
*/

#include "../../include/my.h"

//TODO
void gui(window_t *w)
{
	if ((*w).menu == 0) {
		menu_off(w);
	}
	if ((*w).menu == 1) {
		menu_on(w);
		if ((*w).pencil == 0)
			pencil_off(w);
		if ((*w).pencil == 1)
			pencil_on(w);
		if ((*w).brush == 0)
			brush_off(w);
		if ((*w).brush == 1)
			gui_brush(w);
		help_menu(w);
		options_menu(w);
		menu_save(w);
		if ((*w).pathload == NULL)
			menu_load_na(w);
		if ((*w).pathload != NULL || (*w).has_saved == 1)
			menu_load(w);
	}
}

void menu_off(window_t *w)
{
	sfVector2f vecteur = {763, 5};

	(*w).t_menu_off = sfTexture_createFromFile("assets/menu_mini.png", NULL);
	(*w).menu_off = sfSprite_create();
	sfSprite_setTexture((*w).menu_off, (*w).t_menu_off, sfTrue);
	sfSprite_setPosition ((*w).menu_off, vecteur);
	sfRenderWindow_drawSprite((*w).window, (*w).menu_off, NULL);
}

void menu_on(window_t *w)
{
	sfVector2f vecteur = {763, 5};

	(*w).t_menu_on = sfTexture_createFromFile(
		"assets/menu_mini_on.png", NULL);
	(*w).menu_on = sfSprite_create();
	sfSprite_setTexture((*w).menu_on, (*w).t_menu_on, sfTrue);
	sfSprite_setPosition ((*w).menu_on, vecteur);
	sfRenderWindow_drawSprite((*w).window, (*w).menu_on, NULL);
}

void pencil_off(window_t *w)
{
	sfVector2f vecteur = {763, 42};

	(*w).t_pencil_off = sfTexture_createFromFile(
		"assets/menu_pencil.png", NULL);
	(*w).pencil_off = sfSprite_create();
	sfSprite_setTexture((*w).pencil_off, (*w).t_pencil_off, sfTrue);
	sfSprite_setPosition ((*w).pencil_off, vecteur);
	sfRenderWindow_drawSprite((*w).window, (*w).pencil_off, NULL);
}

void pencil_on(window_t *w)
{
	sfVector2f vecteur = {763, 42};

	(*w).t_pencil_on = sfTexture_createFromFile(
		"assets/menu_pencil_on.png", NULL);
	(*w).pencil_on = sfSprite_create();
	sfSprite_setTexture((*w).pencil_on, (*w).t_pencil_on, sfTrue);
	sfSprite_setPosition ((*w).pencil_on, vecteur);
	sfRenderWindow_drawSprite((*w).window, (*w).pencil_on, NULL);
}