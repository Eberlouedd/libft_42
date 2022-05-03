# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 16:45:59 by kyacini           #+#    #+#              #
#    Updated: 2022/05/04 00:05:02 by kyacini          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ${wildcard *.c}

NAME = libft.a

OBJS = ${SRC:.c=.o}

all	:	${NAME}

%.o : %.c
	gcc -o $@ -c $< -Wall -Werror -Wextra

libft.a	:	${OBJS}
	ar rc ${NAME} ${OBJS}

clean	:
	rm -rf *.o

fclean	:	clean
	rm -rf ${NAME}
	
re:	fclean all

so:
	$(CC) -fPIC $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ)



