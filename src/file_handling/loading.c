/*
** EPITECH PROJECT, 2022
** my_world
** File description:
** loading
*/

#include "../../include/my.h"

void loaderror(window_t *w)
{
	sfVector2f vector = {285, 285};
	sfClock *timer;
	sfTime time_c;

	(*w).msg = sfText_create();
	sfText_setString((*w).msg, "LOADING FAILED...");
	(*w).m_sans = sfFont_createFromFile("assets/sans.ttf");
	sfText_setFont((*w).msg, (*w).m_sans);
	sfText_setCharacterSize((*w).msg, 30);
	sfText_setPosition((*w).msg, vector);
	sfText_setColor((*w).msg, sfRed);
	sfRenderWindow_drawText((*w).window, (*w).msg, NULL);
	sfRenderWindow_display((*w).window);
	timer = sfClock_create();
	time_c = sfClock_getElapsedTime(timer);
	for (; sfTime_asMilliseconds(time_c) < 1000;
		time_c = sfClock_getElapsedTime(timer));
	sfClock_destroy(timer);
	sfText_destroy((*w).msg);
	sfFont_destroy((*w).m_sans);
	update_map(w);
}

void loadsuccess(window_t *w)
{
	sfVector2f vector = {350, 300};
	sfClock *timer;
	sfTime time_c;

	(*w).msg = sfText_create();
	sfText_setString((*w).msg, "LOADED !");
	(*w).m_sans = sfFont_createFromFile("assets/sans.ttf");
	sfText_setFont((*w).msg, (*w).m_sans);
	sfText_setCharacterSize((*w).msg, 30);
	sfText_setPosition((*w).msg, vector);
	sfText_setColor((*w).msg, sfGreen);
	sfRenderWindow_drawText((*w).window, (*w).msg, NULL);
	sfRenderWindow_display((*w).window);
	timer = sfClock_create();
	time_c = sfClock_getElapsedTime(timer);
	for (; sfTime_asMilliseconds(time_c) < 1000;
		time_c = sfClock_getElapsedTime(timer));
	sfClock_destroy(timer);
	sfText_destroy((*w).msg);
	sfFont_destroy((*w).m_sans);
	update_map(w);
}

int load(window_t *w)
{
	int fd;
	int rd;
	int y;

	fd = open((*w).pathload, O_RDONLY);
	if (fd == -1) {
		loaderror(w);
		return (84);
	}
	for (y = 0; y < MAP_Y; y++) {
		rd = read(fd, (*w).map3d[y], MAP_X * sizeof(int));
		if (rd == -1) {
			loaderror(w);
			return (84);
		}
	}
	loadsuccess(w);
	return (0);
}