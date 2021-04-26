#include <iostream>
#include <string>

int main() {
	std::string brains = "HI THIS IS BRAIN";
	std::string* brainsPtr;
	std::string& brainsRef = brains;
	brainsPtr = &brains;
	std::cout << (*brainsPtr) << std::endl;
	std::cout << brainsRef << std::endl;
	return 0;
}