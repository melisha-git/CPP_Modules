#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name){
}

void	HumanB::setWeapon(Weapon& weap) {
	this->_weap = &weap;
}

void	HumanB::attack() const {
	std::cout << this->_name << " attacks with his " << this->_weap->getType() << std::endl;
}
