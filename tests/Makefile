.PHONY: all, clean, fclean, re

NAME = unit_test
CC = gcc
CFLAGS = -pedantic -O3 -I../includes
LDFLAGS = -L../bins -lft
SOURCE = main.c unit_test.c
OBJ = $(SOURCE:.c=.o)

all : $(NAME)


$(NAME): $(OBJ) 
	$(CC) $(CFLAGS) $(LDFLAGS) $(OBJ) ../bins/libft.a -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

../libft.a:
	@make -C ..
