CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.

SRC = main.c functions/ft_putstr.c functions/ft_strlen.c functions/ft_putchar.c functions/ft_swap.c functions/ft_strcmp.c functions/ft_strcpy.c functions/ft_atoi.c functions/ft_strncmp.c functions/ft_uppercase.c functions/ft_foreach.c functions/ft_putnbr.c functions/ft_print_digit.c functions/fibonacci.c functions/ft_strdup.c
OBJ = $(SRC:.c=.o)
NAME = prog

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all