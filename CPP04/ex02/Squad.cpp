#include "Squad.hpp"

Squad::Squad() : _count(0), _units(nullptr) {
}

Squad::Squad(const Squad &copy) {
	_count = 0;
	for (int i = 0; i < copy.getCount(); i++)
		this->push(copy.getUnit(i)->clone());
}

Squad & Squad::operator=(const Squad &copy) {
	if (_units)
	{
		for (int i = 0; i < _count; i++)
			delete _units[i];
		delete _units;
		_units = nullptr;
	}
	_count = 0;
	for (int i = 0; i < copy.getCount(); i++)
		this->push(copy.getUnit(i)->clone());
	return *this;
}

Squad::~Squad() {
	if (_units) {
		for (int i = 0; i < _count; i++)
			delete _units[i];
		delete  _units;
	}
}

int Squad::getCount() const {
	return _count;
}

int Squad::push(ISpaceMarine *unit) {
	if (!unit)
		return _count;
	if (!_units) {
		_units = new ISpaceMarine *[1];
		_units[0] = unit;
		_count = 1;
	}
	else {
		for (int i = 0; i < _count; i++)
			if (_units[i] == unit)
				return _count;
		ISpaceMarine **cpy = new ISpaceMarine*[_count + 1];
		for (int i = 0; i < _count; i++)
			cpy[i] = _units[i];
		delete[] _units;
		_units = cpy;
		_units[_count] = unit;
		_count++;
	}
	return _count;
}

ISpaceMarine* Squad::getUnit(int n) const {
	if (n <= _count)
		return _units[n];
	else
		return NULL;
}