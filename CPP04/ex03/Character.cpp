#include "Character.hpp"

Character::Character(std::string name) : _name(name), _countMaterias(0) {
	for (int i = 0; i < Character::maxMaterias; i++)
		this->_materia[i] = nullptr;
}

Character::Character() {
	_name = "me";
	_countMaterias = 0;
	for (int i = 0; i < Character::maxMaterias; i++)
		this->_materia[i] = nullptr;
}

Character::Character(const Character &copy) {
	this->_name = copy._name;
	this->_countMaterias = copy._countMaterias;
	for (int i = 0; i < copy._countMaterias; i++)
		this->equip(copy._materia[i]->clone());
	for (int i = copy._countMaterias; i < 4; i++)
		this->_materia[i] = nullptr;
}

Character & Character::operator=(Character &copy) {
	this->_name = copy._name;
	for (int i = 0; i < _countMaterias; i++)
		delete this->_materia[i];
	this->_countMaterias = copy._countMaterias;
	for (int i = 0; i < copy._countMaterias; i++)
		this->equip(copy._materia[i]->clone());
	for (int i = copy._countMaterias; i < 4; i++)
		this->_materia[i] = nullptr;
	return *this;
}

const std::string & Character::getName() const {
	return _name;
}

Character::~Character() {
	for (int i = 0; i < _countMaterias; i++)
		delete _materia[i];
}

void Character::use(int idx, ICharacter &target) {
	if (idx > _countMaterias || idx < 0 || this->_materia[idx] == nullptr)
		return ;
	this->_materia[idx]->use(target);
}

void Character::unequip(int idx) {
	if (idx > _countMaterias || idx < 0 || this->_materia[idx] == nullptr)
		return ;
	for (int i = idx; i < 3; i++) {
		this->_materia[i] = this->_materia[i + 1];
		this->_materia[i + 1] = nullptr;
	}
	_countMaterias--;
}

void Character::equip(AMateria *m) {
	if (this->_countMaterias == 4 || m == nullptr || m->getType().empty())
		return ;
	for (int i = 0; i < this->_countMaterias; i++)
		if (this->_materia[i] == m)
			return ;
	this->_materia[_countMaterias] = m;
	_countMaterias++;
}