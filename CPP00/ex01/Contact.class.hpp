#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <iostream>
#include <string>

class Contact
{
public:
	Contact();
	~Contact();

	static int		getNbInst();
	std::string		getFirstName();
	std::string		getLastName();
	std::string		getNicktname();
	void			setParams(void);
	void			outputInfo();
	void 			outputDashboard(Contact cont[8], const int id);
private:
	static int _nbInst;
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string login;	
	std::string postalAddress;
	std::string emailAddress;
	std::string phoneNumber;
	std::string birthdayDate;
	std::string favoriteMeal;
	std::string underwearColor;
	std::string darkestSecret;
	int index;
};

#endif