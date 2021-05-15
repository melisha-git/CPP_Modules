#ifndef ROBOTOMY_REQUEST_FORM
#define ROBOTOMY_REQUEST_FORM
#include "Form.hpp"

class RobotomyRequestForm : public Form {
private:
	std::string _target;
	RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const &);
	RobotomyRequestForm & operator=(RobotomyRequestForm const &);
public:
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();
	virtual void execute(Bureaucrat const &executor) const;
	static Form * getMyForm(std::string const &);
};

#endif