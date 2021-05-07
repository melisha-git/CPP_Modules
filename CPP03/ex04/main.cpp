#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

void    ninjaFunc() {
	NinjaTrap ninj("Saske");
	ninj.takeDamage(23);
	ninj.ninjaShoebox();
	ninj.ninjaShoebox();
	ninj.ninjaShoebox();
	ninj.ninjaShoebox();
	ninj.ninjaShoebox();
	ninj.beRepaired(25);
	ninj.ninjaShoebox();
}

void scravFunc() {
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

void superFunc() {
	SuperTrap super("Saper");
	super.rangedAttack("Saske");
	super.meleeAttack("Saske");
	super.ninjaShoebox();
	super.takeDamage(90);
	super.vaulthunter_dot_exe("Saske");
	super.ninjaShoebox();
	super.ninjaShoebox();
	super.ninjaShoebox();
	super.beRepaired(30);
	super.ninjaShoebox();
	super.meleeAttack("Saske");
}

int main() {
	superFunc();
	ironFunc();
	scravFunc();
	ninjaFunc();
	return 0;
}