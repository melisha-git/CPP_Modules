#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() : ISpaceMarine() {
	std::cout << "Tactical Marine ready for battle!\n";
}

TacticalMarine::~TacticalMarine() {
	std::cout << "Aaargh...\n";
}

ISpaceMarine * TacticalMarine::clone() const {
	ISpaceMarine *ptr = new TacticalMarine(*this);
	return ptr;
}

void TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT!\n";
}

void TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with a bolter *\n";
}

void TacticalMarine::meleeAttack() const {
	std::cout << "* attacks with a chainsword *\n";
}