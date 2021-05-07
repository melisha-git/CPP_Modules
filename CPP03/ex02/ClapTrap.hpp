#ifndef CLAP_TARP_HPP
#define CLAP_TARP_HPP
#include <iostream>
#include <string>

class ClapTrap {
protected:
	int _hitPoint;
	int _maxHitPoint;
	int _energyPoint;
	int _maxEnergyPoint;
	int _level;
	std::string _name;
	int _meleeAttackDamage;
	int _rangedAttackDamage;
	unsigned int _armorDamageReduction;
public:
	ClapTrap();
	ClapTrap(std::string const& name);
	~ClapTrap();
	virtual void rangedAttack(std::string const & target);
	virtual void meleeAttack(std::string const & target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
};

#endif