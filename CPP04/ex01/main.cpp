#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

void    notWeapon() {
	Character you("Wolf");

	std::cout << you;
	SuperMutant dasha;

	you.attack(&dasha);
	std::cout << you;
	you.attack(&dasha);
	std::cout << you;
	you.attack(&dasha);
	std::cout << you;
	you.attack(&dasha);
}

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	notWeapon();
	return 0;
}