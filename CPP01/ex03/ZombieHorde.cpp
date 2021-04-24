#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(long N)
{
	if (N < 0 || N > 2147483647)
	{
		std::cout << "Error (n < 0 or  n > 2147483647)\n";
		return ;
	}
	int		randomNumber = 0;
	int i = 0;
	std::string pullName[9] = {"Bob", "James", "Viy", "Tomato", "Qwertyty", "Ferb", "Fines", "Toyota", "Lada"};
	Zombie **arrZombie = new Zombie*[N];
	while (i < N)
	{
		std::srand((i));
		randomNumber = std::rand() % 8;
		arrZombie[i] = new Zombie(pullName[randomNumber], "zombie");
		ZombieHorde::announce(*(arrZombie[i]));
		i++;
	}
	for (int i = 0; i < N; i++)
	{
		delete arrZombie[i];
	}
	delete [] arrZombie;
}

void ZombieHorde::announce(Zombie& zomb)
{
	zomb.annouce();
}
