#ifndef SQUAD_HPP
#define SQUAD_HPP
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad {
private:
	int _count;
	ISpaceMarine **_units;
public:
	Squad(Squad const &);
	Squad();
	~Squad();
	int getCount() const;
	ISpaceMarine* getUnit(int) const;
	int push(ISpaceMarine*);
	Squad &operator=(Squad const &other);
};

#endif