#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Hater.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Hater jak("Jak");
	std::cout << robert << jim << joe << jak;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(jak);
	return 0;
}