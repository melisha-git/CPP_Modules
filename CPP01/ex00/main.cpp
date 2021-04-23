#include "Pony.hpp"

void ponyOnTheHeap()
{
	const int count = 3;
	Pony *pony = new Pony[count];
	pony[0].setName("Burka");
	for (int i = 0; i < count; i++)
	{
		std::cout << "Pony " << pony[i].getName() << " is rides\n";
		std::cout << "Pony " << pony[i].getName() << " have " << pony[i].getColor() << " color\n";
		std::cout << "Pony " << pony[i].getName() << " have " << pony[i].getBreed() << " breed\n";
	}
	delete [] pony;
	return ;
}

void ponyOnTheStack()
{
	Pony pony("Blura", "black", "icelandic");
	std::cout << "Pony " << pony.getName() << " is rides\n";
	std::cout << "Pony " << pony.getName() << " have " << pony.getColor() << " color\n";
	std::cout << "Pony " << pony.getName() << " have " << pony.getBreed() << " breed\n";
	return ;
}

int main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return 0;
}
