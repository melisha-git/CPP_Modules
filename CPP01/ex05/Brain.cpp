# include "Brain.hpp"

std::string Brain::identify()
{
	std::stringstream addr;

	addr << this;
	return addr.str();
}