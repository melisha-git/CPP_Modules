#include "Hater.hpp"

Hater::Hater(std::string name) : Victim(name) {
	std::cout << "Bzzz." << std::endl;
}

Hater::~Hater() {
	std::cout << "Auuu!!!" << std::endl;
}

std::ostream & operator<<(std::ostream &ost, Hater &copy) {
	ost << "I'm " << copy.getName() << " and I HATE otters!" << std::endl;
	return ost;
}

void Hater::getPolymorphed() const {
	std::cout << Victim::getName() << " has been turned into a pink otters!" << std::endl;
}