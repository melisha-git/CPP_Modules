#include "DefaultHeader.hpp"

int main() {
	std::srand(std::time(NULL)); // Что бы рандомило

	for (int i = 0; i <= 13; i++) {
		std::cout << i << ": ";
		Base *b = generate();
		identify_from_pointer(b);
		identify_from_reference(*b);
		std::cout << std::endl;
		delete b;
	}
	return 0;
}