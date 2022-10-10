/*
** EPITECH PROJECT, 2022
** map builder
** File description:
** File desctiption:
*/

#include "../../include/my.h"

static void free_men(window_t *w)
{
	if ((*w).menu == 0) {
		sfSprite_destroy((*w).menu_off);
		sfTexture_destroy((*w).t_menu_off);
	}
}

void free_map3d(int **ptr)
{
	int count;

	for (count = 0; count < (MAP_Y); count++)
		free(ptr[count]);
	free(ptr);
}

void free_map2d(sfVector2f **ptr)
{
	int count;

	for (count = 0; count < (MAP_Y); count++)
		free(ptr[count]);
	free(ptr);
}

void free_menu(window_t *w)
{
	if ((*w).menu == 1) {
		sfSprite_destroy((*w).menu_on);
		sfTexture_destroy((*w).t_menu_on);
	}
	free_men(w);
}

void free_everything(window_t *w)
{
	free_map3d((*w).map3d);
	free_map2d((*w).map2d);
	sfRenderWindow_destroy((*w).window);
	sfMusic_destroy((*w).bg_music);
}