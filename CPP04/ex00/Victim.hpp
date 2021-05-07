#ifndef VICTIM_HPP
#define VICTIM_HPP
#include <string>
#include <iostream>
#include <ostream>

class Victim {
private:
	std::string _name;
public:
	Victim(std::string name);
	~Victim();
	std::string getName() const;
	virtual void getPolymorphed() const;
};

std::ostream & operator<<(std::ostream &ost, Victim &copy);

#endif