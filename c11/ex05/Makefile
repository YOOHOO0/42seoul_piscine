GCC			= gcc

CFLAGS		= -Wall -Wextra -Werror

NAME		= do-op

all:		doop.c doop2.c
			${GCC} ${CFLAGS} doop.c doop2.c -o ${NAME}
clean :
			rm ${NAME}

fclean :	clean

re:			fclean all
