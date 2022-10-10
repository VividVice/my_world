##
## EPITECH PROJECT, 2022
## my_world
## File description:
## Compile the program
##

NAME = 		my_world

CC =		gcc -g

SRC = 		src/main.c				\
		src/events/event.c				\
		src/events/event_2.c				\
		src/events/event_3.c				\
		src/events/event_4.c				\
		src/events/additional_v2.c	\
		src/events/additional_v3.c	\
		src/events/additional_v5.c	\
		src/events/additional.c	\
		src/gui/gui.c				\
		src/gui/gui_2.c				\
		src/gui/gui_3.c				\
		src/gui/help.c				\
		src/gui/options.c			\
		src/gui/options_2.c			\
		src/map.additional.c		\
		src/map/map_builder.c			\
		src/map/free_builder.c			\
		src/map/vertex_builder.c		\
		src/interactions/altitude_changer.c	\
		src/interactions/zoom_map.c		\
		src/interactions/brush_size.c		\
		src/file_handling/saving.c		\
		src/file_handling/loading.c		\
		src/misc/fill_struct.c			\
		src/menu/additional_m3.c		\
		src/menu/additional.c		\
		src/menu/event_menu.c			\
		src/menu/event_menu2.c			\
		src/menu/event_menu3.c			\
		src/menu/event_menu4.c			\
		src/lib/my_ftoa.c				\
		src/lib/my_isneg.c				\
		src/lib/my_memset.c				\
		src/lib/my_putchar.c			\
		src/lib/my_putstr.c				\
		src/lib/my_strcat.c				\
		src/lib/my_strlen.c				\
		src/menu/menu.c

OBJ =		$(SRC:.c=.o)

CFLAGS = 	-Wall -Wextra -I./include/

LDFLAGS = 	-lc_graph_prog

RM = 		rm -f

all: 		$(NAME)

$(NAME): 	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(LIB) -lm $(LDFLAGS)

clean:
		$(RM) $(OBJ)

fclean: 	clean
		$(RM) $(NAME)
		$(RM) vgcore.*

re: 		fclean all

.PHONY: 	all clean fclean re
