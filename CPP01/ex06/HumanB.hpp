#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"


class HumanB
{
public:
	HumanB(std::string name);
	void	setWeapon(Weapon&);
	void	attack();
private:
	Weapon* weap;
	std::string name;
};

#endif