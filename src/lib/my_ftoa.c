/*
** EPITECH PROJECT, 2022
** my_world
** File description:
** my_ftoa
*/

#include "../../include/my.h"

void my_ftoa(float nbr, char *str ,int afterpoint)
{
	int ipart = (int)nbr;
	float fpart = nbr - (float)ipart;
	int i;

	my_itoa(ipart, str, 0);
	i = my_strlen(str);
	if (afterpoint != 0) {
		str[i] = '.';
		fpart = fpart * pow(10, afterpoint);
		my_itoa((int)fpart, str + i + 1, afterpoint);
	}
}

void my_itoa(int nb, char* str, int d)
{
	int i = 0;

	while (nb) {
		str[i++] = (nb % 10) + '0';
		nb = nb / 10;
	}
	while (i < d)
		str[i++] = '0';
	reverse(str, i);
	str[i] = '\0';
}

void reverse(char *str, int len)
{
	int i = 0;
	int j = len - 1;
	char temp;

	while (i < j) {
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}