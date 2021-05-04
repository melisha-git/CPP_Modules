#include "Fixed.class.hpp"

Fixed::Fixed() : _raw(0){
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed const& fix) {
    std::cout << "Copy constructor called\n";
    this->_raw = fix.getRawBits();
}

Fixed::~Fixed() {
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called\n";
    return this->_raw;
}

void    Fixed::setRawBits(int const raw) {
    this->_raw = raw;
}

Fixed & Fixed::operator=(Fixed const& fix) {
    std::cout << "Assignation operator called\n";
    this->_raw = fix.getRawBits();
    return *this;
}
