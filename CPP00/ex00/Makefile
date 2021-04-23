NAME = megaphone

CC = clang++

FLAGS = -Wall -Werror -Wextra

SRC = megaphone.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean : clean

re: clean all

.PHONY: all clean fclean re