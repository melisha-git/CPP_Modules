# include "Human.hpp"

const std::string Human::identify() const {
	return _brain.identify();
}

const Brain& Human::getBrain() const {
	return _brain;
}
