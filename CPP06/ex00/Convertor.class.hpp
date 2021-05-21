#ifndef CONVENTOR_CLASS_HPP
#define CONVENTOR_CLASS_HPP
#include <iostream>
#include <ostream>
#include <string>
#include <limits>
#include <cmath>

class Convertor {
private:
	std::string _line;
	enum Typing {
		INT_TYPE = 0,
		DOUBLE_TYPE,
		FLOAT_TYPE,
		CHAR_TYPE,
		IMPOSSIBLE_TYPE,
		NON_DISPLAY
	};
	Typing _type;
	char _charNumber;
	long  _intNumber;
	float _floatNumber;
	long double _doubleNumber;
	int	_coef;
	bool isDot;
	void convert();
	void checkDot();

	void charCast();
	void intCast();
	void doubleCast();
public:
	Convertor(std::string const &line);
	char getCharNumber() const;
	int	 getIntNumber() const;
	int getCoef() const;
	float getFloatNumber() const;
	double getDoubleNumber() const;

	bool isIntLimits() const;
	bool isCharLimits() const;
	bool isDoubleLimits() const;

	bool isNonDisplay() const;
	bool isImpossible() const;
	bool getIsDot() const;
};

std::ostream &operator<<(std::ostream &, Convertor const &);

#endif