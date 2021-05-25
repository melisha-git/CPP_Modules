#ifndef TEMPLATES_HPP
#define TEMPLATES_HPP

template< typename T >
void swap(T &a, T &b) {
	T c;
	c = a;
	a = b;
	b = c;
};

template< typename T >
T &min(T & a, T & b) {
	return (b <= a ? b : a);
};

template< typename T >
T &max(T & a, T & b) {
	return (b >= a ? b : a);
};

#endif