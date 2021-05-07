#include "Fixed.class.hpp"

Fixed::Fixed() : _raw(0){
}

Fixed::Fixed(Fixed const& fix) {
	*this = fix;
}

Fixed::Fixed(int const raw) {
	this->_raw = (raw << Fixed::s_countBits);
}

Fixed::Fixed(float const raw) {
	this->_raw = roundf(raw * (1 << Fixed::s_countBits));
}

Fixed::~Fixed() {
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
	this->_raw = fix.getRawBits();
	return *this;
}

bool   Fixed::operator<(Fixed const&fix) const
{
	return (this->getRawBits() < fix.getRawBits());
}

bool   Fixed::operator>(Fixed const&fix) const
{
	return (this->getRawBits() > fix.getRawBits());
}

bool   Fixed::operator==(Fixed const&fix) const
{
	return (this->getRawBits() == fix.getRawBits());
}

bool   Fixed::operator!=(Fixed const&fix) const
{
	return (this->getRawBits() != fix.getRawBits());
}

bool   Fixed::operator>=(Fixed const&fix) const
{
	return (this->getRawBits() >= fix.getRawBits());
}

bool   Fixed::operator<=(Fixed const&fix) const
{
	return (this->getRawBits() <= fix.getRawBits());
}

Fixed  Fixed::operator+(Fixed const&fix) {
	Fixed retFix;

	retFix.setRawBits((this->getRawBits() + fix.getRawBits()));
	return (retFix);
}

Fixed  Fixed::operator-(Fixed const&fix) {
	Fixed retFix;

	retFix.setRawBits((this->getRawBits() - fix.getRawBits()));
	return (retFix);
}

Fixed  Fixed::operator*(Fixed const&fix) {
	Fixed retFix;

	retFix.setRawBits((this->getRawBits() * fix.getRawBits()));
	return (retFix);
}

Fixed  Fixed::operator/(Fixed const&fix) {
	Fixed retFix;

	retFix.setRawBits((this->getRawBits() / fix.getRawBits()));
	return (retFix);
}

Fixed&  Fixed::operator++() {
	*this = *this + 1;
	return *this;
}

Fixed  Fixed::operator++(int) {
	Fixed   tmp = *this;
	++*this;
	return (tmp);
}

Fixed& Fixed::operator--() {
	*this = *this - 1;
	return *this;
}

Fixed  Fixed::operator--(int) {
	Fixed   tmp = *this;
	--*this;
	return (tmp);
}

std::ostream &operator<<(std::ostream &out, Fixed const &fix)
{
	out << fix.toFloat();
	return out;
}

const Fixed  &min(const Fixed &refOne, const Fixed &refTwo) {
	if (refOne > refTwo)
		return (refTwo);
	else if (refOne < refTwo)
		return (refOne);
	std::cout << "Equal\n";
	return (0);
}