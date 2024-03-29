# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 16:45:59 by kyacini           #+#    #+#              #
#    Updated: 2022/05/11 18:28:11 by kyacini          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_memset.c \
		ft_bzero.c \
		ft_memchr.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_strcmp.c \
		ft_strrejoin.c \
		ft_strcat.c

BONUS = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

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



