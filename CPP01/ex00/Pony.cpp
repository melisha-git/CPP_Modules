#include "Pony.hpp"

Pony::Pony(std::string name, std::string color, std::string breed)
{
	this->name = name;
	this->color = color;
	this->breed = breed;
	std::cout << "Pony " << name << " is born\n";
}

Pony::Pony(std::string name, std::string color)
{
	this->name = name;
	this->color = color;
	this->breed = "british";
	std::cout << "Pony " << name << " is born\n";
}

Pony::Pony(std::string name)
{
	this->name = name;
	this->color = "blue";
	this->breed = "british";
	std::cout << "Pony " << name << " is born\n";
}

Pony::Pony()
{
	this->name = "default";
	this->color = "blue";
	this->breed = "british";
	std::cout << "Pony " << name << " is born\n";
}

Pony::~Pony()
{
	std::cout << "Pony " << this->name << " is died\n";
}

std::string Pony::getName()
{
	return this->name;
}

std::string Pony::getColor()
{
	return this->color;
}

std::string Pony::getBreed()
{
	return this->breed;
}

void Pony::setName(std::string name)
{
	this->name = name;
}