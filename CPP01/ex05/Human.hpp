#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Brain.hpp"

class Human {
public:
	const std::string identify() const;
	const Brain& getBrain() const;
private:
	const Brain _brain;
};

#endif