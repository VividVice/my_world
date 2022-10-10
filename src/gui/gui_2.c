/*
** EPITECH PROJECT, 2022
** my_world
** File description:
** gui_2
*/

#include "../../include/my.h"

void brush_off(window_t *w)
{
	sfVector2f vecteur = {763, 81};

	(*w).t_brush_off = sfTexture_createFromFile(
		"assets/menu_brush.png", NULL);
	(*w).brush_off = sfSprite_create();
	sfSprite_setTexture((*w).brush_off, (*w).t_brush_off, sfTrue);
	sfSprite_setPosition ((*w).brush_off, vecteur);
	sfRenderWindow_drawSprite((*w).window, (*w).brush_off, NULL);
}

void brush_on(window_t *w)
{
	sfVector2f vecteur = {763, 81};

	(*w).t_brush_on = sfTexture_createFromFile(
		"assets/menu_brush_on.png", NULL);
	(*w).brush_on = sfSprite_create();
	sfSprite_setTexture((*w).brush_on, (*w).t_brush_on, sfTrue);
	sfSprite_setPosition ((*w).brush_on, vecteur);
	sfRenderWindow_drawSprite((*w).window, (*w).brush_on, NULL);
}

void help_menu(window_t *w)
{
	sfVector2f vecteur = {763, 118};

	(*w).t_help = sfTexture_createFromFile("assets/menu_help.png", NULL);
	(*w).help = sfSprite_create();
	sfSprite_setTexture((*w).help, (*w).t_help, sfTrue);
	sfSprite_setPosition ((*w).help, vecteur);
	sfRenderWindow_drawSprite((*w).window, (*w).help, NULL);
}

void options_menu(window_t *w)
{
	sfVector2f vecteur = {763, 155};

	(*w).t_options_m = sfTexture_createFromFile(
			"assets/menu_options.png", NULL);
	(*w).options_m = sfSprite_create();
	sfSprite_setTexture((*w).options_m, (*w).t_options_m, sfTrue);
	sfSprite_setPosition ((*w).options_m, vecteur);
	sfRenderWindow_drawSprite((*w).window, (*w).options_m, NULL);
}

void brush_size_menu(window_t *w)
{
	sfVector2f vecteur = {619, 81};

	(*w).t_b_size_m = sfTexture_createFromFile(
			"assets/menu_brush_resize.png", NULL);
	(*w).b_size_m = sfSprite_create();
	sfSprite_setTexture((*w).b_size_m, (*w).t_b_size_m, sfTrue);
	sfSprite_setPosition ((*w).b_size_m, vecteur);
	sfRenderWindow_drawSprite((*w).window, (*w).b_size_m, NULL);
}