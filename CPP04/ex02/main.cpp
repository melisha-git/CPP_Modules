#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int myTest()
{
	ISpaceMarine* ferb = new AssaultTerminator;
	ISpaceMarine* fill = new TacticalMarine;
	ISpaceMarine* Furion = new AssaultTerminator;
	ISpaceMarine* ger = new TacticalMarine;
	ISquad* finnes = new Squad;
	ISquad* copyFin;
	ISquad* ptrFin(finnes);
	finnes->push(fill);
	finnes->push(Furion);
	finnes->push(fill);
	finnes->push(ferb);
	finnes->push(ger);
	copyFin = finnes;
	ptrFin->getUnit(0)->battleCry();
	std::cout << "COUNT - " << copyFin->getCount() << std::endl;
	delete finnes;
	return 0;
}

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	return (myTest());
}