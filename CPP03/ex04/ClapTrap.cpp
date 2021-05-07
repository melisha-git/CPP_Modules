#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name) : _name(name){
	std::cout << "ClapTrap " << _name << " is created\n";
	ClapTrap::setParams();
}

ClapTrap::ClapTrap() {
	ClapTrap("Clappy");
	ClapTrap::setParams();
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _name << " destroyed!" << std::endl;
}

void ClapTrap::rangedAttack(const std::string &target) {
	std::cout << "ClapTrap " << _name << " attacks " << target << " at range, causing " << _rangedAttackDamage << " point of damage!\n";
}

void ClapTrap::meleeAttack(const std::string &target) {
	std::cout << "ClapTrap " << _name << " attacks " << target << " at melee, causing " << _meleeAttackDamage << " point of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (amount > _armorDamageReduction) {
		std::cout << "ClapTrap " << _name << " take " << amount << " damage\n";
		amount -= _armorDamageReduction;
		_hitPoint -= amount;
		if (_hitPoint < 0)
			_hitPoint = 0;
	}
	else
		std::cout << "ClapTrap " << _name << " repelled the attack\n";
	std::cout << "ClapTrap " << _name << " have " << _hitPoint << " HP\n";
}

void ClapTrap::setParams() {
	_hitPoint = 100;
	_maxHitPoint = 100;
	_energyPoint = 100;
	_maxEnergyPoint = 100;
	_level = 1;
	_armorDamageReduction = 100;
	_meleeAttackDamage = 100;
	_rangedAttackDamage = 100;
}

void ClapTrap::beRepaired(unsigned int amount) {
	_hitPoint += amount;
	_energyPoint += amount;
	if (_hitPoint > _maxHitPoint)
		_hitPoint = _maxHitPoint;
	if (_energyPoint > _maxEnergyPoint)
		_energyPoint = _maxEnergyPoint;
	std::cout << "ClapTrap " << _name << " repaired " << amount << " hit points\n";
	std::cout << "ClapTrap " << _name << " repaired " << amount << " energy points\n";
	std::cout << "ClapTrap " << _name << " have " << _hitPoint << " HP and " << _energyPoint << " energy\n";
}