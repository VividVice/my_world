/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** Macros and Stuff
*/

#ifndef MY_H_
#define MY_H_

#define EXIT 0
#define ERROR 84
#define LEFT 1
#define RIGHT -1
#define MAP_X 33
#define MAP_Y 33
#define ANGLE_X 45
#define ANGLE_Y 35
#define SCALING_X 50
#define SCALING_Y 50
#define SCALING_Z 5

	#include <SFML/Graphics.h>
	#include <SFML/Audio.h>
	#include <SFML/System.h>
	#include <SFML/Audio/Listener.h>
	#include <SFML/Audio/Music.h>
	#include <SFML/Audio/Sound.h>
	#include <SFML/Audio/SoundBuffer.h>
	#include <SFML/Audio/SoundBufferRecorder.h>
	#include <SFML/Audio/SoundRecorder.h>
	#include <SFML/Audio/SoundStatus.h>
	#include <SFML/Audio/SoundStream.h>
	#include <SFML/Graphics/Export.h>
	#include <SFML/Graphics/BlendMode.h>
	#include <SFML/Graphics/Color.h>
	#include <SFML/Graphics/Rect.h>
	#include <SFML/Graphics/Transform.h>
	#include <SFML/Graphics/Types.h>
	#include <SFML/System/Vector2.h>
	#include <SFML/Audio/Export.h>
	#include <SFML/Audio/SoundStatus.h>
	#include <SFML/Audio/Types.h>
	#include <SFML/System/InputStream.h>
	#include <SFML/System/Time.h>
	#include <SFML/System/Vector3.h>
	#include <SFML/Config.h>
	#include <stddef.h>
	#include <stdlib.h>
	#include <sys/types.h>
	#include <sys/stat.h>
	#include <fcntl.h>
	#include <unistd.h>
	#include <math.h>

typedef struct window_s
{
	int **map3d;
	sfVideoMode mode;
	sfVector2f **map2d;
	sfRenderWindow *window;
	sfEvent event;
	float msWh;
	float delta;
	float move_x;
	float move_y;
	int pencil;
	int brush;
	int menu;
	sfSprite *menu_off;
	sfTexture *t_menu_off;
	sfSprite *menu_on;
	sfTexture *t_menu_on;
	sfSprite *pencil_off;
	sfTexture *t_pencil_off;
	sfSprite *pencil_on;
	sfTexture *t_pencil_on;
	sfSprite *brush_off;
	sfTexture *t_brush_off;
	sfSprite *brush_on;
	sfTexture *t_brush_on;
	sfSprite *help;
	sfTexture *t_help;
	sfSprite *xit;
	sfTexture *t_xit;
	sfSprite *popup;
	sfTexture *t_popup;
	sfSprite *popup_help;
	sfTexture *t_p_h;
	sfSprite *popup_options;
	sfTexture *t_popup_options;
	sfSprite *options_m;
	sfTexture *t_options_m;
	sfSprite *b_size_m;
	sfTexture *t_b_size_m;
	sfSprite *save_m;
	sfTexture *t_save_m;
	sfSprite *load_m;
	sfTexture *t_load_m;
	int h_up;
	sfFont* sans;
	sfText* zoom;
	sfMusic *bg_music;
	int options;
	int volume;
	int b_size;
	sfFont* b_sans;
	sfText* b_zoom;
	sfFont* m_sans;
	sfText* msg;
	char *pathload;
	int has_saved;
		sfTexture* world;
	sfSprite* world_sprite;
	sfTexture* creat_map;
	sfSprite* creat_map_sprite;
	sfVector2f pos_map_menu_x;
	sfVector2f pos_map_menu_y;
	sfTexture* title;
	sfSprite* title_sprite;
	sfVector2f pos_title;
	sfTexture* map_size;
	sfSprite* sprite_map_size_x;
	sfSprite* sprite_map_size_y;
	sfText* text_map_x;
	sfText* text_map_y;
	sfFont* map_font;
	int creat_map_b;
	sfEvent menu_ev;
	int menu_page;
	sfTexture* load_map;
	sfSprite* load_map_sprite;
	sfVector2f load_map_vec;
	sfTexture* t_exit;
	sfSprite* t_exit_sprite;
	sfVector2f t_exit_vec;
	int exit_b;
	sfTexture* back;
	sfSprite* back_sprite;
	sfVector2f back_vec;
	int back_b;
	sfTexture* start;
	sfSprite* start_sprite;
	sfVector2f start_vec;
	int start_b;
	int text_wait_x;
	sfSprite* clic_sp_x;
	sfTexture* clic_x;
	sfSprite* clic_sp_y;
	sfTexture* clic_y;
	int text_wait_y;
	int text_x;
	sfVector2f pos_text_x1;
	sfVector2f pos_text_x2;
	sfText* text_enter_x1;
	sfText* text_enter_x2;
	char *str_x1;
	char *str_x2;
	int x1_ready;
	int x2_ready;
	sfText* t;
} window_t;

void event(window_t *w);
void free_everything(window_t *w);
void free_map3d(int **ptr);
void free_map2d(sfVector2f **ptr);
sfVector2f project_iso_point(int x, int y, int z, window_t *w);
sfVector2f **create_2d_map(window_t *w);
sfVertexArray *create_line(sfVector2f *point1, sfVector2f *point2);
int draw_2d_map(sfRenderWindow *window, sfVector2f **map_2d);
int **generate_3d_map(void);
sfVideoMode fill_mode(void);
void init_map(window_t *w, char *av);
int pencil_tool(window_t *w, int mouseButton);
void update_map(window_t *w);
void vertex_x(sfRenderWindow *window, sfVector2f **map_2d, int x, int y);
void vertex_y(sfRenderWindow *window, sfVector2f **map_2d, int x, int y);
void zoom_map(window_t *w);
void camera_event(window_t *w);
void pencil_event(window_t *w);
void brush_event(window_t *w);
void gui(window_t *w);
void menu_event(window_t *w);
void menu_event_bis(window_t *w);
void menu_off(window_t *w);
void menu_on(window_t *w);
void pencil_off(window_t *w);
void pencil_on(window_t *w);
void brush_off(window_t *w);
void brush_on(window_t *w);
void help_menu(window_t *w);
void free_menu(window_t *w);
int brush_tool(window_t *w, int mouseButton);
int help(window_t *w);
void help_event(window_t *w);
void help_event_bis(window_t *w);
void zoom_info(window_t *w);
void bg_music(window_t *w);
void zoom_info_bis(window_t *w);
void options_menu(window_t *w);
void options_event(window_t *w);
void options(window_t *w);
void volume_event(window_t *w);
void volume_bis(window_t *w);
void volume(window_t *w);
void options_menu_events(window_t *w);
void reset_button(window_t *w);
void reset_map(window_t *w);
void reset(window_t *w);
void close_options(window_t *w);
void close_options_event(window_t *w);
void brush_resize(window_t *w);
void brush_size(window_t *w);
void brush_size_menu(window_t *w);
void init_var(window_t *w);
void error_msg(void);
void volume_follow(window_t *w);
void gui_brush(window_t *w);
int save(window_t *w);
void menu_load(window_t *w);
void menu_load_na(window_t *w);
void menu_save(window_t *w);
void save_event(window_t *w);
void loadsuccess(window_t *w);
void loaderror(window_t *w);
int save_create(window_t *w);
int savingtofile(window_t *w);
void savecreate_s(window_t *w);
void saveerror(window_t *w);
int load(window_t *w);
void load_event(window_t *w);
void menu_event_bis_snd(window_t *w);
void brush_size_bis(window_t *w);
void map_size(window_t *w);
void init_menu(window_t *w);
void init_menu2(window_t *w);
void init_menu3(window_t *w);
void draw_menu(window_t *w);
void main_menu_event(window_t *w);
void imput_x_f(window_t *w);
void creat_map_f(window_t *w);
void menu_creat_map(window_t *w);
void menu_back_b(window_t *w);
void menu_ex_and_start(window_t *w);
void main_menu2(window_t *w);
void draw_x_bar(window_t *w);
void draw_y_bar(window_t *w);
int imput_x(window_t *w);
int imput_y(window_t *w);
void disp_bar(window_t *w);
void disp_bar_x(window_t *w);
void disp_bar_y(window_t *w);
int create_map(window_t *w);
int back_b(window_t *w);
int check_start_b(window_t *w);
int exit_map(window_t *w);
void map_size(window_t *w);
void go_main_menu(window_t *w);
void init_start(window_t *w);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
char *my_memset(char *str, char c, int size);
int **my_memset_map(int **map, int c, int size_y, int size_x);
int is_neg(int nbr);
char *my_revstr(char *str);
void my_itoa(int nb, char* str, int d);
void my_ftoa(float nbr, char *str, int afterpoint);
int my_strlen(char const *str);
char *my_strcat(char *output, char const *input);
void reverse(char *str, int len);
void draw_2d_vertex(sfRenderWindow *window, sfVector2f **map_2d,int x,int y);
int check_menu_exit(window_t *w);
int check_menu_back(window_t *w);
int check_menu_start(window_t *w);
int check_menu_wait(window_t *w);
int check_imput(window_t *w);
int check_imp_y(window_t *w);
int check_cr_map(window_t *w);
int check_back_b(window_t *w);
int ver_start(window_t *w);
int verify_ex(window_t *w);
int ver_menu_bis(window_t *w);
int ver_help(window_t *w);
int ver_op(window_t *w);
int ver_key(window_t *w);
int ver_vol(window_t *w);
int ver_sound(window_t *w);
int check_bis_help(window_t *w);
int check_reset(window_t *w);
int verify_to_menu(window_t *w);
int check_to_close(window_t *w);
int check_size_of_brush(window_t *w);
int verify_for_safe(window_t *w);
int verify_load(window_t *w);
int check_snd(window_t *w);
int check_br(window_t *w);
int check_size_of_pencil(window_t *w);
int check_pen(window_t *w);
int check_right_br(window_t *w);
int check_left_br(window_t *w);
int check_menu_event(window_t *w);

#endif /* !MY_H_ */