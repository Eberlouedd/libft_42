# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 16:45:59 by kyacini           #+#    #+#              #
#    Updated: 2022/05/03 16:59:24 by kyacini          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all	:	libft.a

libft.a	:	%.o
	ar rc libft.a *.o

%.o : %.c
	gcc *.o -c *.c -Wall -Werror -Wextra

clean	:
	rm -r *.o

fclean	:	
	rm -rf *.o