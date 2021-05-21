#include "Convertor.class.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Invalid number of arguments" << std::endl;
		return 0;
	}
	Convertor conv(argv[1]);
	std::cout << conv;
	return 0;
}