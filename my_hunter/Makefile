##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Compile our projects
##

NAME	=	my_hunter

SRC_DIR	=	./src/

UTILS_DIR	=	./src/utils/

EVENT_DIR	=	./src/event/

SRC	=	$(SRC_DIR)global.c			\
		$(SRC_DIR)main.c			\
		$(SRC_DIR)prepare_gameplay.c		\
		$(SRC_DIR)my_hunter.c			\
		$(EVENT_DIR)analyse_events.c		\
		$(EVENT_DIR)change_scale.c		\
		$(EVENT_DIR)check_position.c		\
		$(EVENT_DIR)init_move.c			\
		$(EVENT_DIR)manage_move.c		\
		$(EVENT_DIR)manage_time.c		\
		$(EVENT_DIR)move_rect.c			\
		$(EVENT_DIR)move_hearts.c		\
		$(EVENT_DIR)manage_end.c		\
		$(UTILS_DIR)check_env.c			\
		$(UTILS_DIR)display_man_hunter.c	\
		$(UTILS_DIR)check_create_window.c	\
		$(UTILS_DIR)create_window.c		\
		$(UTILS_DIR)filling_struct.c		\
		$(UTILS_DIR)set_pos.c			\
		$(UTILS_DIR)check_struct.c		\
		$(UTILS_DIR)destroy_struct.c		\
		$(UTILS_DIR)display_game.c		\
		$(UTILS_DIR)filling_text.c		\
		$(UTILS_DIR)int_to_string.c		\
		$(UTILS_DIR)filling_end.c		\
		$(UTILS_DIR)reset_struct.c

CFLAGS	=	-W -Wall -Wextra -I ./include -I ./include/printf

OBJ	=	$(SRC:%.c=%.o)

LIB	=	-L ./lib/my -lmy -l c_graph_prog

CC	=	gcc

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(LIB)
		@echo "COMPILATION COMPLETED"

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)
		@echo "CLEAR COMPLETED"

re:		fclean all

debug:		CFLAGS += -g
debug:		re
