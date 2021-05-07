#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : _name(name) {
	std::cout << _name << " created by handsome Jack\n";
	setParams();
}

FragTrap::FragTrap(){
	_name = "Robot";
	setParams();
}

FragTrap::~FragTrap() {
	std::cout << "Jack shot " << _name << std::endl;
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

void FragTrap::rangedAttack(const std::string &target) {
	std::cout << "FR4G-TP " << _name << " attacks " << target << " at range, causing " << _rangedAttackDamage << " point of damage!\n";
}

void FragTrap::meleeAttack(const std::string &target) {
	std::cout << "FR4G-TP " << _name << " attacks " << target << " at melee, causing " << _meleeAttackDamage << " point of damage!\n";
}

void FragTrap::takeDamage(unsigned int amount) {
	if (amount > _armorDamageReduction) {
		std::cout << "FR4G-TP " << _name << " take " << amount << " damage\n";
		amount -= _armorDamageReduction;
		_hitPoint -= amount;
		if (_hitPoint < 0)
			_hitPoint = 0;
	}
	else
		std::cout << "FR4G-TP " << _name << " repelled the attack\n";
	std::cout << "FR4G-TP " << _name << " have " << _hitPoint << " HP\n";
}

void FragTrap::beRepaired(unsigned int amount) {
	_hitPoint += amount;
	_energyPoint += amount;
	if (_hitPoint > _maxHitPoint)
		_hitPoint = _maxHitPoint;
	if (_energyPoint > _maxEnergyPoint)
		_energyPoint = _maxEnergyPoint;
	std::cout << "FR4G-TP " << _name << " repaired " << amount << " hit points\n";
	std::cout << "FR4G-TP " << _name << " repaired " << amount << " energy points\n";
	std::cout << "FR4G-TP " << _name << " have " << _hitPoint << " HP and " << _energyPoint << " energy\n";
}

void FragTrap::vaulthunter_dot_exe(const std::string &target) {
	if (_energyPoint < 25){
		std::cout << "Not enough energy\n";
		return ;
	}
	std::string attack;
	std::srand(std::time(NULL) * std::rand());
	attack = FragTrap::s_pullFunnyAttack[(std::rand() % 5)];
	std::cout << "FR4G-TP " << _name << " attacks " << target << " at " << attack << ", causing " << 5 << " point of damage!\n";
	_energyPoint -= 25;
}

std::string FragTrap::s_pullFunnyAttack[] = {"Tickling", "Dentist", "Dance battle", "Spit", "Burp"};