#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	std::string	str = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

	if (argc == 1)
		std::cout << str;
	for (int j = 1; argv[j]; j++)
	{
		str = argv[j];
		std::transform(str.begin(), str.end(), str.begin(), ::toupper);
		std::cout << str;
	}
	std::cout << std::endl;
	return 0;
}