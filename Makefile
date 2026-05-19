CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = calculatrice

SRC = calculator.c math_functions.c

OBJ =	$(SRC:.c=.o)

all :	$(NAME)

$(NAME):	$(OBJ)
	$(CC)	$(CFLAGS)	$(OBJ) -o	$(NAME)

clean:
	rm -f	$(OBJ)

fclean:	clean
	rm -f $(NAME)

.PHONY:	all clean fclean re
