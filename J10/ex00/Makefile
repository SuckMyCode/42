# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gakles <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/15 00:44:19 by gakles            #+#    #+#              #
#    Updated: 2015/09/15 14:46:33 by gakles           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_putchar.c ft_strlen.c ft_swap.c ft_strcmp.c ft_putstr.c
SRCS = $(addprefix srcs/,$(SRC))
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@gcc -c $(FLAGS) $(SRC) -I includes/
	@ar rc $(NAME) $(patsubst %.c, %.o, $(SRC))
	@ranlib $(NAME)

clean:
	@rm -f $(wildcard *.o)

fclean: clean
	@rm -f $(NAME)

re: fclean all
