#include <iostream>
#include <string>
#include <fstream>

int	standartInput()
{
	std::string dst;
	while (1)
	{
		std::getline(std::cin, dst);
		std::cout << dst << std::endl;
	}
	return 0;
}

void	fileReading(std::ifstream& ifs)
{
	std::string src;
	while (1)
	{
		std::getline(ifs, src);
		std::cout << src;
		if (ifs.eof())
			break ;
		std::cout << std::endl;
	}
}

int	fileInput(char **argv)
{
	for (int i = 1; argv[i]; i++)
	{
		std::ifstream ifs(argv[i]);
		if (!ifs.is_open())
		{
			std::cout << argv[1] << ": " << argv[i] << ": No such file or directory" << std::endl;
			continue ;
		}
		fileReading(ifs);
	}
	return 0;
}

int main(int argc, char **argv)
{
	if (argc == 1)
		return (standartInput());
	else if (argc > 1)
		return (fileInput(argv));
	return 0;
}
