#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
private:
	std::string  _type;
	unsigned int _xp;
	AMateria();
public:
	AMateria(std::string const & type);
	virtual ~AMateria();

	std::string const & getType() const;
	unsigned int getXP() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif