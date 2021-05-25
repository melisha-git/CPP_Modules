#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template<typename T>
class Array {
private:
	T *_arr;
	unsigned int _lenght;
public:
	Array();
	Array(unsigned int n);
	Array(Array<T> const &);
	~Array();

	class OutIndex: public std::exception {
		virtual const char* what() const throw();
	};

	Array &operator=(Array<T> const &);
	T &operator[](unsigned int index);
	unsigned int size();
};

#include "Array.ipp"

#endif