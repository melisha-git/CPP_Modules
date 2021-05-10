#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
}

AMateria * Cure::clone() const {
	Cure *copy = new Cure(*this);
	return (copy);
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
	AMateria::use(target);
}