/*
** EPITECH PROJECT, 2022
** my_world
** File description:
** event_menu4
*/

#include "../../include/my.h"

int create_map(window_t *w)
{
	int c_imp = check_cr_map(w);

	if (c_imp == 6) {
		(*w).creat_map_b = (*w).creat_map_b == 1 ? 0 : 1;
		(*w).exit_b = 0;
		return (1);
	}
	return (0);
}

int back_b(window_t *w)
{
	int c_imp = check_back_b(w);

	if (c_imp == 6) {
		(*w).back_b = (*w).back_b == 1 ? 0 : 1;
		(*w).exit_b = 0;
		(*w).creat_map_b = 1;
		return (1);
	}
	return (0);
}

int check_start_b(window_t *w)
{
	int c_imp = ver_start(w);

	if (c_imp == 6) {
		(*w).start_b = (*w).start_b == 1 ? 0 : 1;
		return (1);
	}
	return (0);
}

int exit_map(window_t *w)
{
	int c_imp = verify_ex(w);

	if (c_imp == 6) {
		(*w).exit_b = (*w).exit_b == 1 ? 0 : 1;
		return (1);
	}
	return (0);
}

void map_size(window_t *w)
{
	sfVector2f vec_x = {320, 155};
	sfVector2f vec_y = {320, 210};
	(*w).text_map_x = sfText_create();
	(*w).text_map_y = sfText_create();
	(*w).sans = sfFont_createFromFile("assets/sans.ttf");
	sfText_setFont((*w).text_map_x, (*w).sans);
	sfText_setFont((*w).text_map_y, (*w).sans);
	sfText_setString((*w).text_map_x, "x : ");
	sfText_setString((*w).text_map_y, "y : ");
	sfText_setPosition((*w).text_map_x, vec_x);
	sfText_setPosition((*w).text_map_y, vec_y);
	sfText_setFont((*w).text_map_x, (*w).sans);
	sfText_setFont((*w).text_map_y, (*w).sans);
	sfText_setCharacterSize((*w).text_map_x, 30);
	sfText_setColor((*w).text_map_y, sfBlack);
	sfText_setColor((*w).text_map_x, sfBlack);
	sfText_setColor((*w).text_map_y, sfBlack);
}