#include "Contact.class.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

int Contact::getNbInst()
{
	return Contact::_nbInst;
}

void Contact::setParams(void)
{
	std::cout << "Write first name : " << std::endl;
	std::getline(std::cin, this->firstName);
	std::cout << "Write last name : \n";
	std::getline(std::cin, this->lastName);
	std::cout << "Write nickname : \n";
	std::getline(std::cin, this->nickname);
	std::cout << "Write login: \n";
	std::getline(std::cin, this->login);
	std::cout << "Write postal address : \n";
	std::getline(std::cin, this->postalAddress);
	std::cout << "Write email address : \n";
	std::getline(std::cin, this->emailAddress);
	std::cout << "Write phone number : \n";
	std::getline(std::cin, this->phoneNumber);
	std::cout << "Write birthday date : \n";
	std::getline(std::cin, this->birthdayDate);
	std::cout << "Write favorite meal : \n";
	std::getline(std::cin, this->favoriteMeal);
	std::cout << "Write underwear color : \n";
	std::getline(std::cin, this->underwearColor);
	std::cout << "Write darkest secret : \n";
	std::getline(std::cin, this->darkestSecret);
	Contact::_nbInst += 1;
	this->index = Contact::_nbInst;
}

std::string	Contact::getFirstName()
{
	return this->firstName;
}

std::string	Contact::getLastName()
{
	return this->lastName;
}

std::string	Contact::getNicktname()
{
	return this->nickname;
}

void Contact::outputInfo()
{
	std::cout << "First name : " << this->firstName << std::endl;
	std::cout << "Last name : " << this->lastName << std::endl;
	std::cout << "Nickname : " << this->nickname << std::endl;
	std::cout << "Login : " << this->login << std::endl;
	std::cout << "Postal address : " << this->postalAddress << std::endl;
	std::cout << "Email address : " << this->emailAddress << std::endl;
	std::cout << "Phone number : " << this->phoneNumber << std::endl;
	std::cout << "Birthday date : " << this->birthdayDate << std::endl;
	std::cout << "Favorite meal : " << this->favoriteMeal << std::endl;
	std::cout << "Underwear color : " << this->underwearColor << std::endl;
	std::cout << "Darkest secret : " << this->darkestSecret << std::endl;
}

void Contact::outputDashboard(Contact cont[8], const int id)
{
	std::cout.width(10);
	std::cout << std::right << "index" << "|";
	std::cout.width(10);
	std::cout << std::right << "first name" << "|";
	std::cout.width(10);
	std::cout << std::right << "last name" << "|";
	std::cout.width(10);
	std::cout << std::right << "nickname" << "|" << std::endl;
	for (int i = 0; i < id; i++)
	{
		std::cout.width(10);
		std::cout << std::right << std::to_string(i + 1) << "|";
		std::cout.width(10);
		if (cont[i].getFirstName().length() > 10)
			std::cout << std::right << cont[i].getFirstName().substr(0, 9) + ".|";
		else
			std::cout << std::right << cont[i].getFirstName() << "|";
		std::cout.width(10);
		if (cont[i].getLastName().length() > 10)
			std::cout << std::right << cont[i].getLastName().substr(0, 9) + ".|";
		else
			std::cout << std::right << cont[i].getLastName() << "|";
		std::cout.width(10);
		if (cont[i].getNicktname().length() > 10)
			std::cout << std::right << cont[i].getNicktname().substr(0, 9) + ".|";
		else
			std::cout << std::right << cont[i].getNicktname() << "|";
		std::cout << std::endl;
	}
}

int Contact::_nbInst = 0;