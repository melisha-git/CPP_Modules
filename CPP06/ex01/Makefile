NAME = serialization

SRC = main.cpp

all: $(NAME)

$(NAME): $(SRC)
	clang++ -Wall -Wextra -Werror $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all

.PHONY: clean all re