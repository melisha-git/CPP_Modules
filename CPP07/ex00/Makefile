NAME = whatever

SRC = main.cpp

HEAD = whatever.hpp

all: $(NAME)

$(NAME) : $(SRC) $(HEAD)
	clang++ -Wall -Werror -Wextra $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all

.PHONY: re clean all