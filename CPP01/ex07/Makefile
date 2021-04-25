NAME = replace

SRC = main.cpp

CC = clang++

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME) : $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all

.PHONY: clean all re