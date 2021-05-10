#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
}

AMateria * Ice::clone() const {
	Ice *copy = new Ice(*this);
	return copy;
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
	AMateria::use(target);
}