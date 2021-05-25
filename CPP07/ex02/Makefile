NAME = array

SRC = main.cpp

HEAD = Array.hpp

SRCIPP = Array.ipp

all: $(NAME)

$(NAME) : $(SRC) $(HEAD) $(SRCIPP)
	clang++ -Wall -Werror -Wextra $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all

.PHONY: re clean all