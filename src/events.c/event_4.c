/*
** EPITECH PROJECT, 2022
** my_world
** File description:
** event_4
*/

#include "../../include/my.h"

void load_event(window_t *w)
{
	int l = verify_load(w);

	if (l == 6)
		load(w);
}

void menu_event_bis_snd(window_t *w)
{
	int s = check_snd(w);

	if (s == 6) {
		(*w).pencil = (*w).pencil == 1 ? 0 : 1;
		(*w).brush = 0;
		update_map(w);
	}
}

void brush_size_bis(window_t *w)
{
	int b = check_br(w);

	if (b == 8) {
		(*w).b_size = ((*w).b_size < 9) ? ((*w).b_size + 1) : 9;
		update_map(w);
	}
}

void go_main_menu(window_t *w)
{
	reset(w);
	update_map(w);
	draw_menu(w);
	(*w).menu_page = 0;
	(*w).exit_b = 0;
	main_menu_event(w);
}