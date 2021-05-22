#include "DefaultHeader.hpp"

Base *generate(void) {
	int number =  std::rand() % 3;
	if (number == 1)
		return (new A);
	if (number == 2)
		return (new B);
	return (new C);
}

void identify_from_pointer (Base * p) {
	if (dynamic_cast<A *>(p) != nullptr)
		std::cout << "A";
	else if (dynamic_cast<B *>(p) != nullptr)
		std::cout << "B";
	else if (dynamic_cast<C *>(p) != nullptr)
		std::cout << "C";
}

void identify_from_reference (Base & p) {
	identify_from_pointer(&p);
}
