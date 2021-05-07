#include "FragTrap.hpp"

int main()
{
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
	return 0;
}