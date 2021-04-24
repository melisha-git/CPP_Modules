# include "Human.hpp"

std::string Human::identify()
{
	return brain.identify();
}

Brain& Human::getBrain()
{
	return brain;
}
