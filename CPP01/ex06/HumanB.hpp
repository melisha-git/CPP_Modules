#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"


class HumanB {
public:
	HumanB(std::string name);
	void	setWeapon(Weapon&);
	void	attack() const;
private:
	Weapon* _weap;
	std::string _name;
};

#endif