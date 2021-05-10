#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _countMaterias(0) {
	for (int i = 0; i < 4; i++)
		this->_materia[i] = nullptr;
}

void MateriaSource::learnMateria(AMateria *ptr) {
	if (_countMaterias >= 4 || ptr == nullptr)
		return ;
	for (int i = 0; i < _countMaterias; i++) {
		if (_materia[i] == ptr) {
			return ;
		}
	}
	this->_materia[_countMaterias] = ptr;
	_countMaterias++;
}

AMateria * MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < _countMaterias; i++) {
		if (this->_materia[i]->getType() == type) {
			return (this->_materia[i]->clone());
		}
	}
	return nullptr;
}