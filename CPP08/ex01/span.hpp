#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>

class Span {
private:
	unsigned int _size;
	unsigned int _count;
	std::vector<int>  _values;
public:
	Span(unsigned int);
	void addNumber(const int n);
	int shortestSpan();
	int longestSpan();

	class ExceptionSpan : public std::exception {
	public:
		ExceptionSpan(const char* error);
		virtual const char* what() const throw();
	private:
		const char *_error;
	};

	int operator[](const int index);
};

#endif