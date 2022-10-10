/*
** EPITECH PROJECT, 2022
** my_putchar.c
** File description:
** studdf
*/

#include "../../include/my.h"

void my_putchar(char c);

void my_putchar(char c)
{
	write(1, &c, 1);
}