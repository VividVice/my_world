/*
** EPITECH PROJECT, 2022
** my_world
** File description:
** bootsrapons
*/

#include "../include/my.h"

int main(int ac, char **av)
{
	window_t w;

	if (ac > 2) {
		error_msg();
		return (ERROR);
	}
	init_map(&w, av[1]);
	init_menu(&w);
	while (sfRenderWindow_isOpen(w.window)) {
		if (w.menu_page == 1)
			event(&w);
		else
			main_menu_event(&w);
	}
	free_everything(&w);
	return (EXIT);
}

void init_map(window_t *w, char *av)
{
	init_var(w);
	(*w).x1_ready = 1;
	(*w).x2_ready = 1;
	(*w).text_x = 0;
	(*w).pathload = av;
	(*w).map3d = generate_3d_map();
	(*w).map2d = create_2d_map(w);
	(*w).mode = fill_mode();
	(*w).window = sfRenderWindow_create((*w).mode,
		"Our Isometrical World", sfClose, NULL);
	sfRenderWindow_setFramerateLimit((*w).window, 60);
	sfRenderWindow_setVerticalSyncEnabled ((*w).window, sfTrue);
	bg_music(w);
}

void init_var(window_t *w)
{
	(*w).msWh = 0;
	(*w).move_x = 0;
	(*w).move_y = 0;
	(*w).delta = 1;
	(*w).pencil = 0;
	(*w).brush = 0;
	(*w).menu = 0;
	(*w).h_up = 0;
	(*w).options = 0;
	(*w).volume = 2;
	(*w).b_size = 1;
	(*w).has_saved = 0;
	(*w).creat_map_b = 0;
	(*w).menu_page = 0;
	(*w).exit_b = 0;
	(*w).back_b = 1;
	(*w).start_b = 1;
	(*w).text_wait_x = 1;
	(*w).text_wait_y = 1;
}

void bg_music(window_t *w)
{
	(*w).bg_music = sfMusic_createFromFile("assets/bg_music.flac");
	sfMusic_setLoop((*w).bg_music, sfTrue);
	sfMusic_setVolume((*w).bg_music, 50);
	sfMusic_play((*w).bg_music);
}

void error_msg(void)
{
	my_putstr("TOO MUCH ARGUMENTS\n");
	my_putstr("RETRY USING :\n");
	my_putstr("	./my_world $PATHFILETOLOAD or ./my_world\n");
}