NAME = contacts

CC = clang++

FLAGS = -Wall -Werror -Wextra

SRC = main.cpp Contact.class.cpp

HEADERS = Contact.class.hpp

all: $(NAME)

$(NAME): $(SRC) $(HEADERS)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean : clean

re: clean all

.PHONY: all clean fclean re