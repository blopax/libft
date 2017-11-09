NAME = libft.a
FLAGS = -Wall -Wextra -Werror -c
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC)
	ar rc libft.a $(OBJ)
	ranlib libft.a

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f libft.a

re: fclean all
