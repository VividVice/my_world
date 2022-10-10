/*
** EPITECH PROJECT, 2022
** my_world
** File description:
** event_2
*/

#include "../../include/my.h"

void menu_event_bis(window_t *w)
{
	int m = ver_menu_bis(w);

	if (m == 7) {
		(*w).brush = (*w).brush == 1 ? 0 : 1;
		(*w).pencil = 0;
		update_map(w);
	}
	if ((*w).event.type == sfEvtKeyPressed
		&& (*w).event.key.code == sfKeyM) {
		(*w).menu = (*w).menu == 1 ? 0 : 1;
		update_map(w);
	}
}

void help_event(window_t *w)
{
	int k = ver_help(w);

	if ((*w).event.type == sfEvtKeyPressed
		&& (*w).event.key.code == sfKeyEscape) {
		(*w).h_up = (*w).h_up == 1 ? 0 : 1;
		update_map(w);
	}
	if (k == 7) {
		(*w).h_up = (*w).h_up == 1 ? 0 : 1;
		update_map(w);
	}
}

void help_event_bis(window_t *w)
{
	int h = check_bis_help(w);

	if (h == 3) {
		(*w).h_up = 0;
		update_map(w);
	}
	menu_event_bis_snd(w);
}

void options_event(window_t *w)
{
	int o = ver_op(w);
	int k = ver_key(w);

	if (o == 7) {
		(*w).options = (*w).options == 1 ? 0 : 1;
		update_map(w);
	}
	if (k == 3) {
		(*w).options = (*w).options == 1 ? 0 : 1;
		update_map(w);
	}
}

void volume_event(window_t *w)
{
	int v = ver_vol(w);
	int s = ver_sound(w);

	if (v == 6) {
		(*w).volume = (*w).volume == 0 ? 0 : (*w).volume - 1;
		update_map(w);
	}
	if (s == 6) {
		(*w).volume = (*w).volume == 4 ? 4 : (*w).volume + 1;
		update_map(w);
	}
}