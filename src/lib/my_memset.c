/*
** EPITECH PROJECT, 2022
** my_memset
** File description:
** memory
*/

#include "../../include/my.h"

char *my_memset(char *str, char c, int size)
{
	int y;

	for (y = 0; y < size; y++)
		str[y] = c;
	str[y] = '\0';
	return (str);
}

int **my_memset_map(int **map, int c, int size_y, int size_x)
{
	int x = 0;
	int y = 0;

	for (y = 0; y < size_y ; y++)
		for (x = 0; x < size_x; x++)
			map[y][x] = c;
	return (map);
}