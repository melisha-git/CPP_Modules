# include "ZombieEvent.hpp"

int main()
{
	ZombieEvent zombEvent;
	Zombie *zomb;
	Zombie *zymb;
	zombEvent.setZombieType("zombie");
	zomb = zombEvent.newZombie("Jora");
	zomb->annouce();
	delete zomb;
	zymb = zombEvent.randomChump();
	zymb->annouce();
	delete zymb;
	return 0;
}
