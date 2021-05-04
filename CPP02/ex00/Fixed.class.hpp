#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP
#include <iostream>

class Fixed {
private:
    int       _raw;
    static const short s_countBits = 8;
public:
    Fixed();
    Fixed(Fixed const&);
    ~Fixed();

    int     getRawBits() const;
    void    setRawBits(int const);

    Fixed &   operator=(Fixed const&);
};

#endif