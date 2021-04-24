#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	Weapon weapon = Weapon("crube spiked club");

	HumanA bob("Bob", weapon);
	bob.attack();
	weapon.setType("some other type of club");
	bob.attack();

	Weapon	club = Weapon("crube spiked club");

	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	return 0;
}