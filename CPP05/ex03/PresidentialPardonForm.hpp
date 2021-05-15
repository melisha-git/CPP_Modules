#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form {
private:
	std::string _target;
	PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm const &);
	PresidentialPardonForm & operator=(PresidentialPardonForm const &);
public:
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();
	void execute(const Bureaucrat &executor) const;
	static Form * getMyForm(std::string const &target);
};

#endif