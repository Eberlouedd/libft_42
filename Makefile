# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 16:45:59 by kyacini           #+#    #+#              #
#    Updated: 2022/05/10 20:50:26 by kyacini          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ${filter-out $(wildcard *bonus.c), $(wildcard *.c)}

BONUS = ${wildcard *bonus.c}

NAME = libft.a

OBJS = ${SRC:.c=.o}

OBJS_BONUS = ${BONUS:.c=.o}

all	:	${NAME}

%.o : %.c
	gcc -o $@ -c $< -Wall -Werror -Wextra

libft.a	:	${OBJS}
	ar rc ${NAME} ${OBJS}

bonus	:	${OBJS} ${OBJS_BONUS}
	ar rc ${NAME} ${OBJS} ${OBJS_BONUS}
clean	:
	rm -rf *.o

fclean	:	clean
	rm -rf ${NAME}
	
re:	fclean all



