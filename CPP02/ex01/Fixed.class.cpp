#include "Fixed.class.hpp"

Fixed::Fixed() : _raw(0){
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed const& fix) {
	std::cout << "Copy constructor called\n";
	*this = fix;
}

Fixed::Fixed(int const raw) {
	std::cout << "Int constructor called\n";
	this->_raw = (raw << Fixed::s_countBits);
}

Fixed::Fixed(float const raw) {
	std::cout << "Float constructor called\n";
	this->_raw = roundf(raw * (1 << Fixed::s_countBits));
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}



int Fixed::getRawBits() const {
	return (this->_raw);
}

void Fixed::setRawBits(const int raw) {
	this->_raw = raw;
}

int Fixed::toInt() const {
	return (this->_raw >> Fixed::s_countBits);
}

float   Fixed::toFloat() const {
	return ((float)this->_raw / (float)(1 << Fixed::s_countBits));
}



Fixed & Fixed::operator=(Fixed const& fix) {
	std::cout << "Assignation operator called\n";
	this->_raw = fix.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &out, Fixed const &fix)
{
	out << fix.toFloat();
	return out;
}