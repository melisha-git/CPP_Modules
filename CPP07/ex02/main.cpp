#include "Array.hpp"

int main() {
	Array<int> k(12);
	std::cout << "DEFAULT CREATE ARRAY\n";
	for (unsigned int i = 0; i < k.size(); i++) {
		k[i] = i;
		std::cout << "\t" << k[i];
	}
	std::cout << std::endl;
	std::cout << "TRY CATH\n";
	try
	{
		std::cout << k[31];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::cout;
	}
	std::cout << std::endl;
	Array<int> y;
	std::cout << "OPERATOR '='\n";
	y = k;
	for (unsigned int i = 0; i < y.size(); i++)
		std::cout << "\t" << y[i];
	std::cout << std::endl;
	std::cout << "COPY CONSTRUCTOR\n";
	Array<int> z(y);
	for (unsigned int i = 0; i < z.size(); i++)
		std::cout << "\t" << z[i];
	std::cout << std::endl;
	return 0;
}
