#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
#include "Zombie.hpp"

class ZombieHorde
{
public:
	ZombieHorde(long N);
	void announce(Zombie& zomb);
};

#endif