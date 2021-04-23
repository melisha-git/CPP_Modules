# include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "Zomb";
	this->type = "zombie";
}

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
	std::cout << this->type << " " << this->name << " is born" << std::endl;
}

void Zombie::annouce()
{
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->type << " " << this->name << " is died\n";
}