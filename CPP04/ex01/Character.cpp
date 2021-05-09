#include "Character.hpp"

Character::Character(const std::string &name) : _name(name), _ap(40), _weapon(NULL) {
}

Character::Character() {
	_name = "Saske";
	_ap = 40;
	_weapon = NULL;
}

Character::~Character() {
}

Character::Character(const Character &copy) {
	*this = copy;
}

Character & Character::operator=(const Character &copy) {
	this->_name = copy._name;
	return *this;
}

std::string Character::getName() const {
	return this->_name;
}

void Character::recoverAP() {
	this->_ap += 10;
}

void Character::attack(Enemy *enemy) {
	if (enemy->getHP() == 0)
		return ;
	if (_weapon && (_ap - _weapon->getAPCost() >= 0)) {
		std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
		this->_weapon->attack();
		enemy->takeDamage(this->_weapon->getDamage());
		if (!enemy->getHP())
			delete enemy;
		_ap -= _weapon->getAPCost();
	}
}

int Character::getAp() const {
	return this->_ap;
}

void Character::equip(AWeapon *weapon) {
	this->_weapon = weapon;
}

std::string Character::getWeaponName() {
	return _weapon->getName();
}

int Character::isWeapon() {
	if (this->_weapon)
		return 1;
	return 0;
}

std::ostream & operator<<(std::ostream &myOst, Character &copy)
{
	myOst << copy.getName() << " has " << copy.getAp() << " AP and ";
	if (copy.isWeapon())
		myOst << "wields a " << copy.getWeaponName();
	else
		myOst << "is unarmed";
	myOst << std::endl;
	return myOst;
}