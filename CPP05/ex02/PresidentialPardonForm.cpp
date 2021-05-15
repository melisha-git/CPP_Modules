#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target) {
}

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), _target("target") {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy), _target(copy._target) {
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &copy) {
	this->_target = copy._target;
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (!this->getSign())
		throw Form::FormNotSigned();
	if (executor.getGrade() > this->getIsExecute())
		throw Form::ExecuteTooLowException();
	std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}