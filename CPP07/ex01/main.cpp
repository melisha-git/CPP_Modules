#include "iter.hpp"
#include <iostream>

template< typename T >
void display(T const &param) {
	std::cout << param << std::endl;
}

int main() {
	std::cout << "INT :\n";
	int array[] = {0, 1, 2, 3, 4, 5, 6};
	iter(array, (sizeof(array) / sizeof(array[0])), display);
	std::cout << "FLOAT :\n";
	float arrTwo[] = {0.1f, 0.2f, 0.3f, 0.4f};
	iter(arrTwo, (sizeof(arrTwo) / sizeof(arrTwo[0])), display);
	std::cout << "STRING :\n";
	std::string arr[] = {"WAY", "BOOM", "TICK"};
	iter(arr, (sizeof(arr) / sizeof(arr[0])), display);
}
