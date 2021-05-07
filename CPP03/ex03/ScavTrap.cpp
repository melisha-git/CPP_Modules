#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap " << _name << " is born\n";
	ScavTrap::setParams();
}

ScavTrap::ScavTrap() : ClapTrap("Serena") {
	ScavTrap("Serena");
	ScavTrap::setParams();
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

void ScavTrap::challengeNewcomer() {
	if (_energyPoint < 25){
		std::cout << "Not enough energy\n";
		return ;
	}
	std::string challenge;
	std::srand(std::time(NULL) * _energyPoint);
	challenge = ScavTrap::s_pullFunnyChallenges[(std::rand() % 5)];
	std::cout << "ScavTrap " << _name << " " << challenge << std::endl;
	_energyPoint -= 25;
}

std::string ScavTrap::s_pullFunnyChallenges[] = {"Brush your teeth", "Jump rope to vomit", "Spit at the ceiling", "Arrange a prank", "Sail on a boat"};