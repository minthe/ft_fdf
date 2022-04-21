SHELL	= /bin/sh

NAME =	fdf
srcs =	main.c \

OBJECTS = $(subst .c,.o,$(SOURCES))

CC = gcc
CFLAGS = -Wall -Wextra -Werror

MINILIBX_DIR	= ./minilibx-linux
LIBFT_DIR		= ./libft
X11_INC			= /usr/X11/include
X11_LIB			= /usr/X11/lib

LFLAGS 			= -L${LIBFT_DIR} -L${MINILIBX_DIR} -L${X11_LIB} \
				-lmlx -framework OpenGL -framework Appkit

IDIR			= .
IFLAGS			= -I${IDIR} -I${LIBFT_DIR} -I${MINILIBX_DIR} -I${X11_INC}

RM = rm -f

${NAME} : ${SRCS}
		@make -C ${MINILIBX_DIR}
		${CC} ${CFLAGS} ${SRCS} ${IFLAGS} ${LFLAGS} -o ${NAME}

all: ${NAME}

clean:
		@${RM} ${NAME}
		@make clean -C ${LIBFT_DIR}
		@make clean -C ${MINILIBX_DIR}

fclean: clean
		@make fclean -C ${LIBFT_DIR}

re: fclean all

.PHONY: all clean fclean re bonus debug
