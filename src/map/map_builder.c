/*
** EPITECH PROJECT, 2022
** map builder
** File description:
** ananas
*/

#include "../../include/my.h"

sfVector2f project_iso_point(int x, int y, int z, window_t *w)
{
	sfVector2f point2d;
	float x2d;
	float y2d;

	x2d = cos((ANGLE_X * 0.0174533)) * x - cos(ANGLE_X * 0.0174533)* y;
	y2d = sin((ANGLE_Y * 0.0174533)) * y + sin(ANGLE_Y * 0.0174533)* x - z;
	x2d += 400;
	x2d += (*w).move_x;
	y2d += (*w).move_y;
	point2d.x = x2d;
	point2d.y = y2d;
	return (point2d);
}

sfVector2f **create_2d_map(window_t *w)
{
	sfVector2f **map2d = malloc(sizeof(sfVector2f *) * (MAP_Y));
	int count_x;
	int count_y;

	for (count_y = 0; count_y < MAP_Y; count_y++)
		map2d[count_y] = malloc(sizeof(sfVector2f) * (MAP_X));
	for (count_y = 0; count_y < MAP_Y; count_y++)
		for (count_x = 0; count_x < MAP_X; count_x++)
			map2d[count_y][count_x] = project_iso_point(
			count_x * SCALING_X * (*w).delta,
			count_y * SCALING_Y * (*w).delta,
			(*w).map3d[count_y][count_x] * SCALING_Z * (*w).delta, w);
	return (map2d);
}

sfVertexArray *create_line(sfVector2f *p1, sfVector2f *p2)
{
	sfVertexArray *vertex_array = sfVertexArray_create();
	sfVertex v1 = {.position = *p1, .color = sfColor_fromRGB(0, 180, 0)};
	sfVertex v2 = {.position = *p2, .color = sfColor_fromRGB(159, 110, 0)};

	sfVertexArray_append(vertex_array, v1);
	sfVertexArray_append(vertex_array, v2);
	sfVertexArray_setPrimitiveType(vertex_array, sfLinesStrip);
	return (vertex_array);
}

int draw_2d_map(sfRenderWindow *window, sfVector2f **map_2d)
{
	int count_x;
	int count_y;

	for (count_y = 0; count_y < MAP_Y; count_y++)
		for (count_x = 0; count_x < MAP_X; count_x++) {
			draw_2d_vertex(window, map_2d, count_x, count_y);
		}
	return (EXIT);
}

int **generate_3d_map(void)
{
	int **map3d = malloc(sizeof(int *) * MAP_Y);
	int y = 0;

	for (y = 0; y < MAP_Y; y++)
		map3d[y] = malloc(sizeof(int) * MAP_X);
	map3d = my_memset_map(map3d, 0, MAP_Y, MAP_X);
	return (map3d);
}