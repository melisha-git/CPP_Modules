#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
#include "Zombie.hpp"

class ZombieHorde
{
public:
	ZombieHorde(int n);
	void announce();
	~ZombieHorde();
private:
	int		_n;
	Zombie *_arrZombie;
	static std::string pullName[];
};

#endif