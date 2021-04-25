# include "Zombie.hpp"

Zombie::Zombie() : _name("Zomb"), _type("zombie") {
}

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {
	std::cout << this->_type << " " << this->_name << " is born" << std::endl;
}

void Zombie::annouce() const {
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}

Zombie::~Zombie() {
	std::cout << this->_type << " " << this->_name << " is died\n";
}