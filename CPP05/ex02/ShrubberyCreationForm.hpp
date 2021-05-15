#ifndef SHRUBBERY_CREATION_FORM
#define SHRUBBERY_CREATION_FORM
#include "Form.hpp"
#include "fstream"

class ShrubberyCreationForm : public Form {
private:
	std::string _target;
	ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const &);
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const &);
public:
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();
	class FileNotOpen : public std::exception {
		virtual const char* what() const throw();
	};
	virtual void execute(Bureaucrat const &executor) const;
};

#endif