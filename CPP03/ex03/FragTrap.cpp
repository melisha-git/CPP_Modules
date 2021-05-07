#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)  {
	std::cout << _name << " created by handsome Jack\n";
	FragTrap::setParams();
}

FragTrap::FragTrap() : ClapTrap("Robot") {
	_name = "Robot";
	FragTrap::setParams();
}

void FragTrap::setParams()
{
	_hitPoint = 100;
	_maxHitPoint = 100;
	_energyPoint = 100;
	_maxEnergyPoint = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
}

FragTrap::~FragTrap() {
	std::cout << "Jack shot " << _name << std::endl;
}

void FragTrap::rangedAttack(const std::string &target) {
	std::cout << "FR4G-TP " << _name << " attacks " << target << " at range, causing " << _rangedAttackDamage << " point of damage!\n";
}

void FragTrap::meleeAttack(const std::string &target) {
	std::cout << "FR4G-TP " << _name << " attacks " << target << " at melee, causing " << _meleeAttackDamage << " point of damage!\n";
}

void FragTrap::vaulthunter_dot_exe(const std::string &target) {
	if (_energyPoint < 25){
		std::cout << "Not enough energy\n";
		return ;
	}
	std::string attack;
	std::srand(std::time(NULL) * _energyPoint);
	attack = FragTrap::s_pullFunnyAttack[(std::rand() % 5)];
	std::cout << "FR4G-TP " << _name << " attacks " << target << " at " << attack << ", causing " << 5 << " point of damage!\n";
	_energyPoint -= 25;
}

std::string FragTrap::s_pullFunnyAttack[] = {"Tickling", "Dentist", "Dance battle", "Spit", "Burp"};