##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## antman binary
##

NAME	=	my_rpg

LIB	=	-L lib/my/ -lmy

LIBGRH	=	-lcsfml-audio -lcsfml-system -lcsfml-window -lcsfml-graphics

INCLUDE	=	-I ./include/

SRC	= 	src/main.c	\
		src/event.c	\
		src/data.c	\
		src/sprites.c	\
		src/draw.c	\
		src/draw2.c	\
		src/draw3.c	\
		src/draw_volume.c	\
		src/switch.c	\
		src/array0.c	\
		src/array1.c	\
		src/array2.c	\
		src/array3.c	\
		src/array4.c	\
		src/array5.c	\
		src/array6.c	\
		src/array7.c	\
		src/levelup.c	\
		src/move2.c	\
		src/move_dir.c	\
		src/initial_menu.c	\
		src/initialise.c	\
		src/initialise2.c	\
		src/map.c	\
		src/story.c	\
		src/text.c	\
		src/enemy.c	\
		src/enemy2.c	\
		src/enemy3.c	\
		src/hurt.c	\
		src/get_text.c	\
		src/functions.c	\
		src/speak.c	\
		src/check_mov.c	\
		src/pause.c	\
		src/enemy4.c	\
		src/loop.c	\
		src/loop2.c	\
		src/loop3.c	\
		src/loop_attack.c	\
		src/destroy.c	\
		src/music.c	\
		src/music2.c	\
		src/music3.c	\
		src/enemynpc.c	\
		src/enemynpc2.c	\
		src/npcs.c	\
		src/allocate_mem.c	\
		src/sprites2.c	\
		src/sprites3.c	\
		src/volume.c	\
		src/save.c	\
		src/map0.c	\
		src/map1.c	\
		src/map2.c	\
		src/map3.c	\
		src/map4.c	\
		src/hearts_inv.c	\
		src/draw_npcs.c	\
		src/draw_life.c	\
		src/animate_enemy.c	\
		src/activ_enemy.c	\
		src/draw_link.c	\
		src/change_gun.c	\

OBJ	=	$(SRC:.c=.o)

CDLIB = lib/my/
all: 	$(NAME)

$(NAME): 	$(OBJ)
		make -C $(CDLIB)
		gcc -g $(OBJ) -o $(NAME) $(INCLUDE) $(LIBGRH) $(LIB)

clean:
	rm -f $(NAME)
	make -C $(CDLIB) fclean
	rm -f libmy.a
	rm -f ./src/*.o


fclean: clean

re: 	fclean all

library: fclean

exec:	re
	./$(NAME)
