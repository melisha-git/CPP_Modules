#include "span.hpp"

void test(int number, int count) {
	std::cout << "TEST " << number << std::endl;
	Span sp = Span(count);
	try {
		for (int i = 0; i < count; i++) {
			sp.addNumber(std::rand() % 456);
			std::cout << "sp[" << i << "] = " << sp[i] << std::endl;
		}
		sp.shortestSpan();
		sp.longestSpan();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

int main() {
	std::srand(std::time(NULL));
	std::cout << "STANDART TEST : \n";
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	for (int i = 1; i < 100; i++)
		test(i, (std::rand() % i));
}