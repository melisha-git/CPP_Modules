#include "easyfind.hpp"
#include <list>
#include <vector>
#include <algorithm>

int main() {
	int n;
	std::list<int>  lst;
	lst.push_back(23);
	lst.push_back(14);
	//Нет ошибок
	try {
		n = easyfind(lst, 23);
		std::cout << n << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;;
	}
	//Вызов исключения
	try {
		n = easyfind(lst, 24);
		std::cout << n << std::endl;;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}