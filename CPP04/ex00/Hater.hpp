#ifndef HATER_HPP
#define HATER_HPP
#include "Victim.hpp"

class Hater : public Victim {
public:
	Hater(std::string name);
	~Hater();
	void getPolymorphed() const;
};

std::ostream & operator<<(std::ostream &ost, Hater &copy);

#endif