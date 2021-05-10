#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Hater.hpp"

void myTest()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Hater jak("Jak");
	std::cout << robert << jim << joe << jak;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(jak);
}

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
//	myTest();
	return 0;
}