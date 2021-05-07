#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

void scavFunc() {
	ScavTrap scrav("Serena");
	scrav.rangedAttack("Scorpion");
	scrav.meleeAttack("Scorpion");
	scrav.takeDamage(20);
	scrav.challengeNewcomer();
	scrav.challengeNewcomer();
	scrav.challengeNewcomer();
	scrav.challengeNewcomer();
	scrav.challengeNewcomer();
	scrav.beRepaired(30);
	scrav.challengeNewcomer();
}

void ironFunc() {
	FragTrap iron("Iron");
	iron.rangedAttack("Jack");
	iron.takeDamage(20);
	iron.takeDamage(40);
	iron.beRepaired(80);
	iron.vaulthunter_dot_exe("Jack");
	iron.vaulthunter_dot_exe("Jack");
	iron.vaulthunter_dot_exe("Jack");
	iron.vaulthunter_dot_exe("Jack");
	iron.vaulthunter_dot_exe("Jack");
	iron.beRepaired(80);
	iron.vaulthunter_dot_exe("Jack");
}

int main()
{
	ironFunc();
	scavFunc();
	return 0;
}