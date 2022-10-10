/*
** EPITECH PROJECT, 2022
** my_world
** File description:
** Human/Interface Interactons
*/

#include "../../include/my.h"

int pencil_tool(window_t *w, int mouseButton)
{
	int x = 0;
	int y = 0;

	while (y < MAP_Y) {
		x = 0;
		while (x < MAP_X) {
			if (abs((*w).map2d[y][x].x - (*w).event.mouseButton.x)
				<= (SCALING_X / 5) &&
				abs((*w).map2d[y][x].y - (*w).event.mouseButton.y)
				<= (SCALING_Y / 5)) {
				(*w).map3d[y][x] += mouseButton;
				update_map(w);
				return (EXIT);
			}
			x++;
		}
		y++;
	}
	return (EXIT);
}

int brush_tool(window_t *w, int mouseButton)
{
	int x = 0;
	int y = 0;
	int i = 0;

	for (y = 0; y < MAP_Y; y++) {
		for (x = 0; x < MAP_X; x++) {
			if (abs((*w).map2d[y][x].x - (*w).event.mouseButton.x)
				<= (SCALING_X * (*w).delta * ((*w).b_size + 1) ) &&
				abs((*w).map2d[y][x].y - (*w).event.mouseButton.y)
				<= (SCALING_Y * (*w).delta * ((*w).b_size + 1))) {
				(*w).map3d[y][x] += mouseButton;
				i++;
				if (i == pow((4 * (*w).b_size), (*w).b_size + 1))
					return (EXIT);
			}
		}
	}
	return (EXIT);
}

void update_map(window_t *w)
{
	free_map2d((*w).map2d);
	(*w).map2d = create_2d_map(w);
	sfRenderWindow_clear((*w).window,
		sfColor_fromRGB(0, 0, 0));
	draw_2d_map((*w).window, (*w).map2d);
	gui(w);
	help(w);
	zoom_info(w);
	options(w);
	free_menu(w);
	sfRenderWindow_display((*w).window);
}

void reset(window_t *w)
{
	free_map3d((*w).map3d);
	(*w).map3d = generate_3d_map();
	(*w).options = 0;
	update_map(w);
}