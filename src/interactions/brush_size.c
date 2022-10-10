/*
** EPITECH PROJECT, 2022
** my_world
** File description:
** brushsize
*/

#include "../../include/my.h"

void brush_resize(window_t *w)
{
	char *str;
	sfVector2f vector = {680, 77};

	if ((*w).brush == 1 && (*w).menu == 1) {
		str = malloc(sizeof(char) * 2);
		my_itoa((*w).b_size, str, 1);
		(*w).b_zoom = sfText_create();
		sfText_setString((*w).b_zoom, str);
		(*w).b_sans = sfFont_createFromFile("assets/sans.ttf");
		sfText_setFont((*w).b_zoom, (*w).b_sans);
		sfText_setCharacterSize((*w).b_zoom, 30);
		sfText_setPosition((*w).b_zoom, vector);
		sfText_setColor((*w).b_zoom, sfWhite);
		sfRenderWindow_drawText((*w).window, (*w).b_zoom, NULL);
	}
}