#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) : _xp(0), _type(type) {
}

const std::string & AMateria::getType() const {
	return this->_type;
}

unsigned int AMateria::getXP() const {
	return this->_xp;
}

void AMateria::use(ICharacter& target) {
	this->_xp += 10;
}

AMateria::~AMateria() {
}