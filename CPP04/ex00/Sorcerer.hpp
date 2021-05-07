#ifndef SORCERER_HPP
#define SORCERER_HPP
#include "Victim.hpp"

class Sorcerer {
private:
	std::string _name;
	std::string _title;
	Sorcerer();
	Sorcerer(Sorcerer const &);
	Sorcerer & operator=(const Sorcerer &);
public:
	std::string getName();
	std::string getTitle();
	Sorcerer(std::string name, std::string title);
	void polymorph(Victim const &) const;
	~Sorcerer();
};

std::ostream & operator<<(std::ostream &, Sorcerer &);

#endif