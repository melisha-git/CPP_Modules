#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

class FindError {
public:
	class FindIsNotValue : public std::exception {
		virtual const char* what() const throw();
	};
};

const char * FindError::FindIsNotValue::what() const throw() {
	return "Item not found";
}

template<typename T>
int easyfind(T &arr, int val) {
	typename T::const_iterator it = std::find(arr.begin(), arr.end(), val);
	if (it == arr.end())
		throw FindError::FindIsNotValue();
	return *it;
}

#endif