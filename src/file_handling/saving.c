/*
** EPITECH PROJECT, 2022
** my_world
** File description:
** saving
*/

#include "../../include/my.h"

int save_create(window_t *w)
{
	int fd;
	int read;
	int y;

	fd = open("saves/default.legend",
		O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (84);
	for (y = 0; y < MAP_Y; y++) {
		read = write(fd, (*w).map3d[y], (sizeof(int) * MAP_X));
		if (read == -1)
			return (84);
	}
	(*w).pathload = "saves/default.legend";
	return (0);
}

void saveerror(window_t *w)
{
	sfVector2f vector = {285, 285};
	sfClock *timer;
	sfTime time_c;

	(*w).msg = sfText_create();
	sfText_setString((*w).msg, "SAVING FAILED...");
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

void savecreate_s(window_t *w)
{
	sfVector2f vector = {350, 300};
	sfClock *timer;
	sfTime time_c;

	(*w).msg = sfText_create();
	sfText_setString((*w).msg, "SAVED !");
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

int savingtofile(window_t *w)
{
	int fd;
	int read;
	int y;

	fd = open((*w).pathload,
		O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (84);
	for (y = 0; y < MAP_Y; y++) {
		read = write(fd, (*w).map3d[y], sizeof(int) * MAP_X);
		if (read == -1)
			return (84);
	}
	return (0);
}

int save(window_t *w)
{
	int output = 0;

	if ((*w).pathload == NULL && (*w).has_saved == 0) {
		output = save_create(w);
		if (output != 0) {
			saveerror(w);
			return (84);
		}
	}
	if ((*w).has_saved == 1 && (*w).pathload != NULL) {
		output = savingtofile(w);
		if (output != 0) {
			saveerror(w);
			return (84);
		}
	}
	(*w).has_saved = 1;
	savecreate_s(w);
	return (0);
}