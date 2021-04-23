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
	std::string pullName[8] = {"Bob", "James", "Mark", "Jim", "Pony", "Potato", "Brain", "Buka"};
	Zombie *zomb;
	std::srand(std::time(NULL));
	std::srand(std::time(NULL));
	zomb = newZombie(pullName[std::rand() % 7]);
	return zomb;
}
