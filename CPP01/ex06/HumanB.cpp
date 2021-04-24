#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void	HumanB::setWeapon(Weapon& weap)
{
	this->weap = &weap;
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with his " << this->weap->getType() << std::endl;
}
