#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP
#include "Zombie.hpp"

class ZombieEvent {
public:
	void setZombieType(std::string type);
	Zombie* newZombie(std::string name) const;
	Zombie* randomChump() const;
private:
	std::string _type;
	static std::string pullName[];
};

#endif