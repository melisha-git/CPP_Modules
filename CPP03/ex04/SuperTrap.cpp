#include "SuperTrap.hpp"

SuperTrap::SuperTrap(const std::string &name) : ClapTrap(name), NinjaTrap(name), FragTrap(name) {
	std::cout << _name << ": SUPER CREATING." << std::endl;
	_hitPoint = FragTrap::_hitPoint;
	_maxHitPoint = FragTrap::_maxHitPoint;
	_energyPoint = NinjaTrap::_energyPoint;
	_maxEnergyPoint = NinjaTrap::_maxEnergyPoint;
	_meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
	_rangedAttackDamage = FragTrap::_rangedAttackDamage;
	_armorDamageReduction = FragTrap::_armorDamageReduction;
}

SuperTrap::~SuperTrap() {
	std::cout << "SuperTrap " << _name << " is died!\n";
}

void SuperTrap::rangedAttack(const std::string &target) {
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(const std::string &target) {
	NinjaTrap::meleeAttack(target);
}