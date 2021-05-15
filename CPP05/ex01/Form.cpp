#include "Form.hpp"

Form::Form() : _name("Constitution"),  _sign(0), _isGrade(1), _isExecute(1) {
}

Form::~Form() {
}

Form::Form(const Form &copy) {
	_name = copy._name;
	_isGrade = copy._isGrade;
	_isExecute = copy._isExecute;
	_sign = copy._sign;
}

Form::Form(std::string name, int grade, int execute) : _name(name), _sign(0), _isGrade(grade), _isExecute(execute) {
	if (_isGrade > 150 || _isExecute > 150)
		throw Form::GradeTooLowException();
	if (_isGrade <= 0 || _isExecute <= 0)
		throw Form::GradeTooHighException();
}

Form & Form::operator=(const Form &copy) {
	this->_name = copy._name;
	this->_isGrade = copy._isGrade;
	this->_isExecute = copy._isExecute;
	this->_sign = copy._sign;
	return *this;
}

const char * Form::GradeTooHighException::what() const throw() {
	return "Form Grade is High";
}

const char *Form::GradeTooLowException::what() const throw() {
	return  "Form Grade is Low";
}

std::string Form::getName() const {
	return this->_name;
}

bool Form::getSign() const {
	return this->_sign;
}

int Form::getIsGrade() const {
	return this->_isGrade;
}

int Form::getIsExecute() const {
	return this->_isExecute;
}

std::ostream & operator<<(std::ostream &ost, Form const &copy) {
	ost << "Form " << copy.getName();
	if (copy.getSign())
		ost << " is signature";
	else
		ost << " is not signature";
	ost << std::endl;
	ost << copy.getName() << " have " << copy.getIsGrade() << " grade points and " << copy.getIsExecute() << " execute points\n";
	return ost;
}

void Form::beSigned(Bureaucrat *ptr) {
	if (!ptr || this->getSign())
		return ;
	if (ptr->getGrade() <= this->getIsGrade())
		_sign = true;
	else
		throw Form::GradeTooLowException();
}