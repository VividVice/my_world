/*
** EPITECH PROJECT, 2022
** map builder
** File description:
** File desctiption:
*/

#include "../../include/my.h"

void draw_2d_vertex(sfRenderWindow *window, sfVector2f **map_2d,int x,int y)
{
    if (x == MAP_X - 1 && y == MAP_Y - 1)
		break;
    if (x == MAP_X - 1) {
		vertex_y(window, map_2d, x, y);
	} else if (y == MAP_Y - 1) {
		vertex_x(window, map_2d, x, y);
	} else {
		vertex_x(window, map_2d, x, y);
		vertex_y(window, map_2d, x, y);
	}
    return;
}