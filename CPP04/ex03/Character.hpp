#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"

class Character : public ICharacter {
private:
	AMateria    *_materia[4];
	std::string _name;
	static const short maxMaterias = 4;
	short       _countMaterias;
	Character();
public:
	Character(Character const &);
	Character(std::string name);
	virtual ~Character();
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	Character & operator=(Character &);
};

#endif