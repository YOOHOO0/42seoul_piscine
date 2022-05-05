GCC			= gcc

CFLAGS		= -Wall -Wextra -Werror

NAME		= do-op

SRCS		= doop.c doop2.c

OBJS		= ${SRCS:.c=.o}

.c.o:
			${GCC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${GCC} ${CFLAGS} ${OBJS} -o ${NAME}

all:		${NAME}

clean :
			rm -f ${OBJS}

fclean :	clean
			rm -f ${NAME}

re:			fclean all
