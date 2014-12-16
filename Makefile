# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmeier <nmeier@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/04 12:34:36 by nmeier            #+#    #+#              #
#    Updated: 2014/11/08 17:38:41 by nmeier           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bins/libft.a
SRCS = $(wildcard srcs/*.c)
OBJS = $(patsubst srcs%, objs%, $(patsubst %.c, %.o, $(SRCS)))
FLAGS = -Wall -Wextra -Werror

all : $(NAME)

objs/%.o : srcs/%.c
	gcc -c $< -o $@ $(FLAGS) -I includes

$(NAME) : $(OBJS)
	ar -rs $(NAME) $^

clean :
	rm -f objs/*

fclean : clean
	rm -f $(NAME)

test : all
	make -C tests && tests/unit_test

re : fclean all

.PHONY: clean flclean
