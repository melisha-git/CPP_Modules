#include "Pony.hpp"

Pony::Pony(std::string name, std::string color, std::string breed) : _name(name), _color(color), _breed(breed) {
	std::cout << "Pony " << name << " is born\n";
}

Pony::~Pony() {
	std::cout << "Pony " << this->_name << " is died\n";
}

std::string Pony::getName() const {
	return this->_name;
}

const std::string Pony::getColor() const {
	return this->_color;
}

const std::string Pony::getBreed() const {
	return this->_breed;
}

void Pony::setName(std::string name) {
	this->_name = name;
}
