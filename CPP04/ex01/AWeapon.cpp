#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage) {
}

AWeapon::AWeapon(const AWeapon &copy) {
	*this = copy;
}

AWeapon & AWeapon::operator=(AWeapon const &copy) {
	this->_name = copy._name;
	this->_damage = copy._damage;
	this->_apcost = copy._apcost;
}

AWeapon::AWeapon() : _name("deagle"), _apcost(21), _damage(34) {
}

AWeapon::~AWeapon() {
}

std::string AWeapon::getName() const {
	return this->_name;
}

int AWeapon::getAPCost() const {
	return this->_apcost;
}

int AWeapon::getDamage() const {
	return this->_damage;
}