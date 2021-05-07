#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) {
	_name = name;
	std::cout << "ScavTrap " << _name << " is born\n";
	setParams();
}

ScavTrap::ScavTrap() {
	ScavTrap("Serena");
	setParams();
}

void ScavTrap::setParams()
{
	_hitPoint = 100;
	_maxHitPoint = 100;
	_energyPoint = 50;
	_maxEnergyPoint = 50;
	_level = 1;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << _name << " does not want to die\n";
}

void ScavTrap::rangedAttack(const std::string &target) {
	std::cout << "ScavTrap " << _name << " attacks " << target << " at range, causing " << _rangedAttackDamage << " point of damage!\n";
}

void ScavTrap::meleeAttack(const std::string &target) {
	std::cout << "ScavTrap " << _name << " attacks " << target << " at melee, causing " << _meleeAttackDamage << " point of damage!\n";
}

void ScavTrap::takeDamage(unsigned int amount) {
	if (amount > _armorDamageReduction) {
		std::cout << "ScavTrap " << _name << " take " << amount << " damage\n";
		amount -= _armorDamageReduction;
		_hitPoint -= amount;
		if (_hitPoint < 0)
			_hitPoint = 0;
	}
	else
		std::cout << "ScavTrap " << _name << " repelled the attack\n";
	std::cout << "ScavTrap " << _name << " have " << _hitPoint << " HP\n";
}

void ScavTrap::beRepaired(unsigned int amount) {
	_hitPoint += amount;
	_energyPoint += amount;
	if (_hitPoint > _maxHitPoint)
		_hitPoint = _maxHitPoint;
	if (_energyPoint > _maxEnergyPoint)
		_energyPoint = _maxEnergyPoint;
	std::cout << "ScavTrap " << _name << " repaired " << amount << " hit points\n";
	std::cout << "ScavTrap " << _name << " repaired " << amount << " energy points\n";
	std::cout << "ScavTrap " << _name << " have " << _hitPoint << " HP and " << _energyPoint << " energy\n";
}

void ScavTrap::challengeNewcomer() {
	if (_energyPoint < 25){
		std::cout << "Not enough energy\n";
		return ;
	}
	std::string challenge;
	std::srand(std::time(NULL) * std::rand());
	challenge = ScavTrap::s_pullFunnyChallenges[(std::rand() % 5)];
	std::cout << "ScavTrap " << _name << " " << challenge << std::endl;
	_energyPoint -= 25;
}

std::string ScavTrap::s_pullFunnyChallenges[] = {"Brush your teeth", "Jump rope to vomit", "Spit at the ceiling", "Arrange a prank", "Sail on a boat"};