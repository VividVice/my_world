/*
** EPITECH PROJECT, 2022
** my_world
** File description:
** event_menu
*/

#include "../../include/my.h"

void main_menu_event(window_t *w)
{
	int check_ex = 0;
	int check_b = 0;

	while (sfRenderWindow_pollEvent((*w).window, &(*w).menu_ev)) {
		main_menu2(w);
		check_ex = check_menu_exit(w);
		if (check_ex == 3) {
			if (exit_map(w) == 1)
				sfRenderWindow_close((*w).window);
		}
		check_b = check_menu_back(w);
		if (check_b == 3) {
			if (back_b(w) == 1)
				menu_back_b(w);
		}
		menu_creat_map(w);
		menu_ex_and_start(w);
	}
}

void imput_x_f(window_t *w)
{
	draw_x_bar(w);
	disp_bar_x(w);
	(*w).exit_b = 1;
	(*w).start_b = 0;
	(*w).text_wait_y = 0;
}
void creat_map_f(window_t *w)
{
	map_size(w);
	disp_bar(w);
	(*w).back_b = 0;
	(*w).exit_b = 1;
	(*w).start_b = 0;
	(*w).text_wait_x = 0;
	(*w).text_wait_y = 0;
}

void menu_creat_map(window_t *w)
{
	int check_w = check_menu_wait(w);
	int check_st = check_menu_start(w);

	if (check_w == 3) {
		if (imput_y(w) == 1) {
			draw_y_bar(w);
			disp_bar_y(w);
			(*w).exit_b = 1;
			(*w).text_wait_x = 0;
		}
	}
	if (check_menu_start == 3) {
		if (check_start_b(w) == 1)
			init_start(w);
	}
}

void menu_back_b(window_t *w)
{
	draw_menu(w);
	(*w).exit_b = 0;
	(*w).start_b = 1;
	(*w).creat_map_b = 0;
	(*w).text_wait_x = 1;
	(*w).text_wait_y = 1;
	main_menu_event(w);
}