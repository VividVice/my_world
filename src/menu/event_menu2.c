/*
** EPITECH PROJECT, 2022
** my_world
** File description:
** event_menu2
*/

#include "../../include/my.h"

void menu_ex_and_start(window_t *w)
{
	if ((*w).menu_ev.type == sfEvtMouseButtonPressed &&
		(*w).menu_ev.mouseButton.button == sfMouseLeft &&
		(*w).creat_map_b == 0) {
		if (create_map(w) == 1)
			creat_map_f(w);
	}
	else if ((*w).menu_ev.type == sfEvtMouseButtonPressed
		&& (*w).menu_ev.mouseButton.button == sfMouseLeft
		&& (*w).text_wait_x == 0) {
		if (imput_x(w) == 1)
			imput_x_f(w);
	}
}

void main_menu2(window_t *w)
{
	map_size(w);
	if ((*w).menu_ev.type == sfEvtClosed)
		sfRenderWindow_close((*w).window);
}

void draw_x_bar(window_t *w)
{
	(*w).clic_x = sfTexture_createFromFile("assets/cliq.png", NULL);
	(*w).clic_sp_x = sfSprite_create();
	sfSprite_setTexture((*w).clic_sp_x, (*w).clic_x, sfTrue);
	sfSprite_setPosition((*w).clic_sp_x, (*w).pos_map_menu_x);
}

void draw_y_bar(window_t *w)
{
	(*w).clic_y = sfTexture_createFromFile("assets/cliq.png", NULL);
	(*w).clic_sp_y = sfSprite_create();
	sfSprite_setTexture((*w).clic_sp_y, (*w).clic_y, sfTrue);
	sfSprite_setPosition((*w).clic_sp_y, (*w).pos_map_menu_y);
}

void init_start(window_t *w)
{
	(*w).exit_b = 1;
	(*w).back_b = 1;
	(*w).creat_map_b = 0;
	(*w).text_wait_x = 1;
	(*w).text_wait_y = 1;
	(*w).menu_page = 1;
	update_map(w);
}