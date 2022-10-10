/*
** EPITECH PROJECT, 2022
** my_world
** File description:
** vertex manager
*/

#include "../../include/my.h"

void vertex_x(sfRenderWindow *window, sfVector2f **map_2d, int x, int y)
{
	sfVertexArray *v;

	v = create_line(&(map_2d[y][x]), &(map_2d[y][x + 1]));
	sfRenderWindow_drawVertexArray(window, v, NULL);
	sfVertexArray_destroy(v);
}

void vertex_y(sfRenderWindow *window, sfVector2f **map_2d, int x, int y)
{
	sfVertexArray *v;

	v = create_line(&(map_2d[y][x]), &(map_2d[y + 1][x]));
	sfRenderWindow_drawVertexArray(window, v, NULL);
	sfVertexArray_destroy(v);
}