#include "ZombieEvent.hpp"
#include <ctime>

std::string ZombieEvent::pullName[] = {"Bob", "James", "Mark", "Jim", "Pony", "Potato", "Brain", "Buka", "Pupa"};

void ZombieEvent::setZombieType(std::string type) {
	if (type == "zombie" || type == "cracken" || type == "draugr")
		this->_type = type;
	else
		this->_type = "zobie";
}

Zombie* ZombieEvent::newZombie(std::string name) const {
	Zombie *zom = new Zombie(name, this->_type);
	return (zom);
}

Zombie* ZombieEvent::randomChump() const {
	int	randNumber = 0;
	Zombie *zomb;
	std::srand(std::time(NULL));
	randNumber = std::rand() % (sizeof(pullName) / sizeof(pullName[0]));
	zomb = newZombie(pullName[randNumber]);
	return zomb;
}
