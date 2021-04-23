#include "Contact.class.hpp"

int main()
{
	std::string comand;
	Contact		cont[8];
	int			id(0);
	std::string	number;

	while (1)
	{
		std::cout << "Write a command (add/search/exit):\n";
		std::getline(std::cin, comand);
		if ((comand.compare("EXIT") == 0) || (comand.compare("exit") == 0))
			return 0;
		else if ((comand.compare("ADD") == 0) || (comand.compare("add") == 0))
		{
			if (cont->getNbInst() == 8)
			{
				std::cout << "To many contacts" << std::endl;
				continue ;
			}
			cont[id].setParams();
			id++;
		}
		else if ((comand.compare("SEARCH") == 0) || (comand.compare("search") == 0))
		{
			cont->outputDashboard(cont, id);
			if (id != 0)
			{
				std::cout << "What is number : \n";
				std::getline(std::cin, number);
				int i = 0;
				int	result(0);
				for (; number[i]; i++)
				{
					if ((number[i] < '0' || number[i] > '9') && number[i] != '\n')
					{
						std::cout << "There is no such index\n";
						break ;
					}
					result = (result * 10) + (number[i] - '0');
					if (result > 10)
						result = 10;
				}
				if (number[i] != '\0')
					continue ;
				if (result > id || result < 1)
					std::cout << "There is no such index\n";
				else
					cont[result - 1].outputInfo();
			}
		}
	}
	return 0;
}
