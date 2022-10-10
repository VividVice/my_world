/*
** EPITECH PROJECT, 2022
** my_world
** File description:
** zoom_map
*/

#include "../../include/my.h"

void zoom_map(window_t *w)
{
	(*w).msWh += (*w).event.mouseWheelScroll.delta;
	(*w).delta = is_neg((*w).msWh) == 1 ?
			(((*w).msWh + 0.8) * 1.25) :
			(1 / (1.25 * (- (*w).msWh)));
	update_map(w);
}

void zoom_info(window_t *w)
{
	char *text = malloc(sizeof(char) * 20);
	char *flt = malloc(sizeof(char) * 20);
	char *zoom;

	text[0] = 'x';
	text[1] = '\0';
	my_ftoa((*w).delta, flt, 2);
	if (flt[0] == '.') {
		text[1] = '0';
		text[2] = '\0';
	}
	zoom = my_strcat(text, flt);
	(*w).zoom = sfText_create();
	sfText_setString((*w).zoom, zoom);
	free(text);
	free(flt);
	zoom_info_bis(w);
}

void zoom_info_bis(window_t *w)
{
	sfVector2f vector = {5, 565};

	(*w).sans = sfFont_createFromFile("assets/sans.ttf");
	sfText_setFont((*w).zoom, (*w).sans);
	sfText_setCharacterSize((*w).zoom, 30);
	sfText_setPosition((*w).zoom, vector);
	sfText_setColor((*w).zoom, sfWhite);
	sfRenderWindow_drawText((*w).window, (*w).zoom, NULL);
}