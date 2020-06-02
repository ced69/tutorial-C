####################
# Generic Makefile #
####################

CC=gcc
CFLAGS=-W -Wall -ansi -pedantic
LDFLAGS=
NAME=menu
SRC=src/main.c \
    	
OBJ=$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(SRC)

clean:
	rm -f src/*.o

fclean: clean
	rm -f $(NAME)

re: fclean all

