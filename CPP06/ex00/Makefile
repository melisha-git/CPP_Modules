NAME = convert

SRC = main.cpp Convertor.class.cpp

HEAD =  Convertor.class.hpp

all : $(NAME)

$(NAME) : $(SRC) $(HEAD)
	clang++ -Wall -Wextra -Werror $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all

.PHONY: re clean all