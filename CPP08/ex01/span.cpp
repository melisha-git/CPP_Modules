#include "span.hpp"

Span::Span(unsigned int n) : _size(n), _count(0) {}

void Span::addNumber(const int num) {
	if (_count == _size) {
		throw Span::ExceptionSpan("Many argument");
	}
	_values.push_back(num);
	_count++;
}

int Span::shortestSpan() {
	if (_count == 0 || _count == 1)
		throw Span::ExceptionSpan("there is no span to find");
	int min = *std::min_element(_values.begin(), _values.end());
	std::vector<int> v(_values);

	v.erase(std::min_element(v.begin(), v.end()));
	int min2 = *std::min_element(v.begin(), v.end());
	return min2 - min;
}

int Span::longestSpan() {
	if (_count == 0 || _count == 1)
		throw Span::ExceptionSpan("there is no span to find");
	int min = *std::min_element(_values.begin(), _values.end());
	int max = *std::max_element(_values.begin(), _values.end());
	return max - min;
}

int Span::operator[](const int index) {
	if (index >= _count)
		throw Span::ExceptionSpan("Not index");
	return _values[index];
}

Span::ExceptionSpan::ExceptionSpan(const char *error) : _error(error) {}

const char * Span::ExceptionSpan::what() const throw() {
	return _error;
}