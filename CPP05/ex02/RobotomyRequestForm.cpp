#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target) {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy), _target(copy._target) {
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target("target") {
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &copy) {
	this->_target = copy._target;
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	std::srand(std::time(NULL) * std::rand());
	if (!this->getSign())
		throw Form::FormNotSigned();
	if (executor.getGrade() > this->getIsExecute())
		throw Form::ExecuteTooLowException();
	std::cout << "Brrrrrr..." << std::endl;
	if (std::rand() % 2 == 1)
		std::cout << _target << " has been robotomized" << std::endl;
	else
		std::cout << "There has been a breakdown" << std::endl;
}