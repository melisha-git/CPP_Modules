#include "Sorcerer.hpp"

Sorcerer::Sorcerer() : _name("Enthir"), _title("Dealer") {
	std::cout << "Default constructor called\n";
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer() {
	std::cout << _name << ", " << _title << ", is died. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &copy) {
	std::cout << "Copy constructor called\n";
	*this = copy;
}

std::string Sorcerer::getName() {
	return this->_name;
}

std::string Sorcerer::getTitle() {
	return this->_title;
}

void Sorcerer::polymorph(const Victim &copy) const {
	copy.getPolymorphed();
}

Sorcerer & Sorcerer::operator=(const Sorcerer &copy) {
	std::cout << "overload operator called";
	this->_name = copy._name;
	this->_title = copy._title;
	return *this;
}

std::ostream & operator<<(std::ostream &ost, Sorcerer &copy) {
	ost << "I am " << copy.getName() << ", " << copy.getTitle() << ", and i like ponies!" << std::endl;
	return ost;
}
