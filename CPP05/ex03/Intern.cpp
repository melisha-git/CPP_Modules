#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::GetForms::GetForms(std::string const &name, Form *(*ptrFunc)(std::string const &)) : _name(name), _ptrFunc(ptrFunc) {
}

Intern::GetForms::~GetForms() {
}

std::string const Intern::GetForms::getName() {
	return (_name);
}

Form * Intern::GetForms::returnForms(const std::string &target) {
	return (_ptrFunc(target));
}

Intern::Intern() {
	this->_pullForms[0] = new Intern::GetForms("Presidential Pardon", PresidentialPardonForm::getMyForm);
	this->_pullForms[1] = new Intern::GetForms("PresidentialPardon", PresidentialPardonForm::getMyForm);
	this->_pullForms[2] = new Intern::GetForms("Robotomy Request", RobotomyRequestForm::getMyForm);
	this->_pullForms[3] = new Intern::GetForms("RobotomyRequest", RobotomyRequestForm::getMyForm);
	this->_pullForms[4] = new Intern::GetForms("Shrubbery Creation", ShrubberyCreationForm::getMyForm);
	this->_pullForms[5] = new Intern::GetForms("ShrubberyCreation", ShrubberyCreationForm::getMyForm);
}

Intern::Intern(const Intern &) {
}

Intern::~Intern() {
	for (int i = 0; i <= 5; i++)
		delete _pullForms[i];
}

Intern & Intern::operator=(const Intern &) {
	return *this;
}

const char * Intern::FormNotCreated::what() const throw() {
	return ("Form not created");
}

Form * Intern::makeForm(std::string name, std::string target) {
	Form *form = nullptr;
	for (int i = 0; form == nullptr && i <= 5; i++) {
		if (this->_pullForms[i]->getName() == name)
			form = this->_pullForms[i]->returnForms(target);
	}
	if (!form) {
		throw Intern::FormNotCreated();
	}
	else
		std::cout << name << " created!!!" << std::endl;
	return form;
}
