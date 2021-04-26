#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weap) : _weap(weap), _name(name){
}

void	HumanA::attack() const {
	std::cout << this->_name << " attacks with his " << this->_weap.getType() << std::endl;
}