/*
** EPITECH PROJECT, 2022
** my_world
** File description:
** menu
*/

#include "../../include/my.h"

void init_menu(window_t *w)
{
	(*w).pos_map_menu_x.x = 300;
	(*w).pos_map_menu_x.y = 150;
	(*w).pos_map_menu_y.x = 300;
	(*w).pos_map_menu_y.y = 200;
	(*w).pos_title.x = 20;
	(*w).pos_title.y = 20;
	(*w).load_map_vec.x = 300;
	(*w).load_map_vec.y = 250;
	(*w).t_exit_vec.x = 300;
	(*w).t_exit_vec.y = 350;
	(*w).back_vec.x = 300;
	(*w).back_vec.y = 350;
	(*w).start_vec.x = 300;
	(*w).start_vec.y = 270;
	init_menu2(w);
}

void init_menu2(window_t *w)
{
	(*w).world = sfTexture_createFromFile("assets/world.png", NULL);
	(*w).title = sfTexture_createFromFile("assets/title4.png", NULL);
	(*w).creat_map = sfTexture_createFromFile("assets/creat_map2.png", NULL);
	(*w).t_exit = sfTexture_createFromFile("assets/exit.png", NULL);
	(*w).back = sfTexture_createFromFile("assets/back.png", NULL);
	(*w).load_map = sfTexture_createFromFile("assets/load_map.png", NULL);
	(*w).start = sfTexture_createFromFile("assets/start_b.png", NULL);
	(*w).start_sprite = sfSprite_create();
	(*w).creat_map_sprite = sfSprite_create();
	(*w).back_sprite = sfSprite_create();
	(*w).t_exit_sprite = sfSprite_create();
	(*w).title_sprite = sfSprite_create();
	(*w).world_sprite = sfSprite_create();
	(*w).load_map_sprite = sfSprite_create();
	(*w).map_size = sfTexture_createFromFile("assets/map_size.png", NULL);
	(*w).sprite_map_size_x = sfSprite_create();
	(*w).sprite_map_size_y = sfSprite_create();
	init_menu3(w);
}

void init_menu3(window_t *w)
{
	sfSprite_setTexture((*w).sprite_map_size_x, (*w).map_size, sfTrue);
	sfSprite_setTexture((*w).sprite_map_size_y, (*w).map_size, sfTrue);
	sfSprite_setPosition((*w).sprite_map_size_x, (*w).pos_map_menu_x);
	sfSprite_setPosition((*w).sprite_map_size_y, (*w).pos_map_menu_y);
	sfSprite_setTexture((*w).start_sprite, (*w).start, sfTrue);
	sfSprite_setTexture((*w).world_sprite, (*w).world, sfTrue);
	sfSprite_setTexture((*w).back_sprite, (*w).back, sfTrue);
	sfSprite_setTexture((*w).load_map_sprite, (*w).load_map, sfTrue);
	sfSprite_setTexture((*w).t_exit_sprite, (*w).t_exit, sfTrue);
	sfSprite_setTexture((*w).title_sprite, (*w).title, sfTrue);
	sfSprite_setTexture((*w).creat_map_sprite, (*w).creat_map, sfTrue);
	sfSprite_setPosition((*w).title_sprite, (*w).pos_title);
	sfSprite_setPosition((*w).start_sprite, (*w).start_vec);
	sfSprite_setPosition((*w).t_exit_sprite, (*w).t_exit_vec);
	sfSprite_setPosition((*w).creat_map_sprite, (*w).pos_map_menu_x);
	sfSprite_setPosition((*w).load_map_sprite, (*w).load_map_vec);
	sfSprite_setPosition((*w).back_sprite, (*w).back_vec);
	draw_menu(w);
}
void draw_menu(window_t *w)
{
	sfRenderWindow_drawSprite((*w).window, (*w).world_sprite, NULL);
	sfRenderWindow_drawSprite((*w).window, (*w).t_exit_sprite, NULL);
	sfRenderWindow_drawSprite((*w).window, (*w).title_sprite, NULL);
	sfRenderWindow_drawSprite((*w).window, (*w).creat_map_sprite, NULL);
	sfRenderWindow_drawSprite((*w).window, (*w).load_map_sprite, NULL);
	sfRenderWindow_display((*w).window);
}