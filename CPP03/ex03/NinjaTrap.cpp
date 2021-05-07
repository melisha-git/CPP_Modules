#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(const std::string &name) : ClapTrap(name) {
	std:: cout << "NinjaTrap " << _name << " is created\n";
	NinjaTrap::setParams();
}

NinjaTrap::NinjaTrap() {
	NinjaTrap("Naruto");
	NinjaTrap::setParams();
}

NinjaTrap::~NinjaTrap() {
	std:: cout << "NinjaTrap " << _name << " is died\n";
}

void NinjaTrap::setParams()
{
	_hitPoint = 60;
	_maxHitPoint = 60;
	_energyPoint = 120;
	_maxEnergyPoint = 120;
	_level = 1;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
}

void NinjaTrap::ninjaShoebox() {
	if (_energyPoint < 25){
		std::cout << "Not enough energy\n";
		return ;
	}
	std::string shadow;
	std::srand(std::time(NULL) * std::rand());
	shadow = NinjaTrap::s_pullFunnyShoeboxes[(std::rand() % 5)];
	std::cout << "NinjaTrap " << _name << " " << shadow << std::endl;
	_energyPoint -= 25;
}

std::string NinjaTrap::s_pullFunnyShoeboxes[] = {"Make somersaults", "Throw smoke", "Blind the enemy", "Summon the Teenage Mutant Ninja Turtles", "Shadow cloning technique"};