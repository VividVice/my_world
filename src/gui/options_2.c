/*
** EPITECH PROJECT, 2022
** my_world
** File description:
** options_2
*/

#include "../../include/my.h"

void volume_follow(window_t *w)
{
	if ((*w).volume == 3) {
		(*w).t_popup = sfTexture_createFromFile(
			"assets/volume/seventyfive.png", NULL);
		sfMusic_setVolume ((*w).bg_music, 75);
	}
	if ((*w).volume == 4) {
		(*w).t_popup = sfTexture_createFromFile(
			"assets/volume/hundred.png", NULL);
		sfMusic_setVolume ((*w).bg_music, 100);
	}
}