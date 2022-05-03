.c.o:
			gcc -Wall -Wextra -Werror -c $< -o ${<:.c=.o}

GCC	= gcc
CFLAGS	= -Wall -Wextra -Werror
SRCS	= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJS	= ${SRCS:.c=.o}
INCLUDES	= ft.h
NAME	= libft.a


all :	${OBJS}
	${GCC} ${CFLAGS} -o  ${OBJS} ${INCLUDES} ${NAME}

clean:
		rm ${OBJS}
