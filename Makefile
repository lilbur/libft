# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmacias <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/28 11:21:26 by tmacias           #+#    #+#              #
#    Updated: 2019/10/18 18:03:37 by tmacias          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(FLAG) ft*.c
	ar rc $(NAME) ft*.o
	ranlib $(NAME)

compile:
	gcc main.c libft.a

clean:
	rm -f ft*.o

fclean: clean
	rm -f $(NAME)

re: fclean all
