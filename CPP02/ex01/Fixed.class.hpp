#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP
#include <iostream>
#include <ostream>
#include <math.h>

class Fixed {
private:
	int                 _raw;
	static const short s_countBits = 8;
public:
	Fixed();
	Fixed(Fixed const&);
	Fixed(int const);
	Fixed(float const);
	~Fixed();

	float   toFloat(void) const;
	int     toInt(void) const;
	int     getRawBits() const;
	void    setRawBits(int const);

	Fixed&   operator=(Fixed const&);
};

std::ostream &operator<<(std::ostream &out, Fixed const &fix);

#endif