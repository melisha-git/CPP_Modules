#include "ZombieEvent.hpp"
#include <ctime>

void ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie *zom = new Zombie(name, this->type);
	return (zom);
}

Zombie* ZombieEvent::randomChump()
{
	int	randNumber;
	std::string pullName[9] = {"Bob", "James", "Mark", "Jim", "Pony", "Potato", "Brain", "Buka", "Pupa"};
	Zombie *zomb;
	std::srand(std::time(NULL));
	randNumber = std::rand() % 8;
	zomb = newZombie(pullName[randNumber]);
	std::srand(std::time(NULL));
	return zomb;
}
