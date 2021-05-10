#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
	AMateria *_materia[4];
	int _countMaterias;
public:
	MateriaSource();
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif