#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) : _type(type), _xp(0) {
}

const std::string & AMateria::getType() const {
	return this->_type;
}

unsigned int AMateria::getXP() const {
	return this->_xp;
}

void AMateria::use(ICharacter& target) {
	(void)target;
	this->_xp += 10;
}

AMateria::~AMateria() {
}