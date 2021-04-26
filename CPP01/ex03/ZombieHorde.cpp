#include "ZombieHorde.hpp"

std::string ZombieHorde::pullName[] = {"Bob", "James", "Viy", "Tomato", "Qwertyty", "Ferb", "Fines", "Toyota", "Lada"};

ZombieHorde::ZombieHorde(int n) : _n(n) {
	int		randomNumber = 0;
	int i = 0;
	_arrZombie = (Zombie *)operator new(sizeof(Zombie) * n);

	while (i < n) {
		std::srand((std::time(NULL)) * i + 1);
		randomNumber = std::rand() % ((sizeof(pullName) / sizeof(pullName[0])));
		new (_arrZombie + i) Zombie(pullName[randomNumber], "zombie");
		i++;
	}
}

ZombieHorde::~ZombieHorde() {
	for (int i = 0; i < _n; i++) {
		_arrZombie[i].~Zombie();
	}
	operator delete((void *)_arrZombie);
}

void ZombieHorde::announce() {
	for (int i = 0; i < _n; i++) {
		_arrZombie[i].annouce();
	}
}
