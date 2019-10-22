# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmacias <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/28 11:21:26 by tmacias           #+#    #+#              #
#    Updated: 2019/10/21 19:19:51 by tmacias          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean re fclean

NAME = libft.a
FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(FLAG) ft*.c
	ar rc $(NAME) ft*.o
	ranlib $(NAME)

clean:
	rm -f ft*.o

fclean: clean
	rm -f $(NAME)

re: fclean all
