#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat jake("Jake", 150);
		std::cout << jake;
		jake.toEnlarge();
		std::cout << jake;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Bureaucrat jim("Jimmy", 12);
		std::cout << jim;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Bureaucrat john("John", 1);
		std::cout << john;
		john.toReduce();
		std::cout << john;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}