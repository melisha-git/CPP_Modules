#include "Cure.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

void    test()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->use(1, *me);
	me->use(1, *me);
	me->use(1, *me);
	me->use(1, *me);
	me->use(1, *me);
	std:: cout << "XP = " << tmp->getXP() << std::endl;
	me->unequip(1);
	ICharacter* bob = new Character("bob");
	bob = me;
	bob->use(0, *bob);
	bob->use(1, *bob);
	bob->equip(tmp);
	bob->unequip(0);
	bob->use(0, *bob);
	delete bob;
	delete me;
	delete src;
}

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
//	test();
	return 0;
}