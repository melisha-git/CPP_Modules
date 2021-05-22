NAME = realtype

SRC = main.cpp Base.class.cpp DefaultHeader.cpp

HEAD = A.class.hpp B.class.hpp C.class.hpp Base.class.hpp DefaultHeader.hpp

all: $(NAME)

$(NAME): $(SRC) $(HEAD)
	clang++ -Wall -Wextra -Werror $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all

.PHONY: clean all re