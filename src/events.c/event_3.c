/*
** EPITECH PROJECT, 2022
** my_world
** File description:
** event_3
*/

#include "../../include/my.h"

void options_menu_events(window_t *w)
{
	volume_event(w);
	reset_map(w);
	close_options_event(w);
}

void reset_map(window_t *w)
{
	int r = check_reset(w);
	int m = verify_to_menu(w);

	if (r == 6) {
		reset(w);
		update_map(w);
	}
	if (m == 6)
		go_main_menu(w);
}

void close_options_event(window_t *w)
{
	int c == check_to_close(w);

	if (c == 7) {
		(*w).options = 0;
		update_map(w);
	}
}

void brush_size(window_t *w)
{
	int b = check_size_of_brush(w);

	if (b == 8) {
		(*w).b_size = ((*w).b_size == 1) ? 1 : ((*w).b_size - 1);
		update_map(w);
	}
	brush_size_bis(w);
}

void save_event(window_t *w)
{
	int s = verify_for_safe(w);

	if (s == 6)
		save(w);
}