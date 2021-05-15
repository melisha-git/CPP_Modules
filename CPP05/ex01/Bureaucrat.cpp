#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : _name("Vova"), _grade(1) {
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	if (this->_grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "Bureaucrat Grade is High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Bureaucrat Grade is Low";
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) {
    this->_name = copy._name;
    this->_grade = copy._grade;
}

Bureaucrat::~Bureaucrat() {
//    std::cout << this->_name << " is died!" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &copy) {
    this->_name = copy._name;
    this->_grade = copy._grade;
    return *this;
}

std::string const Bureaucrat::getName() const {
    return this->_name;
}

int Bureaucrat::getGrade() const {
    return this->_grade;
}

void Bureaucrat::toEnlarge() {
	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::toReduce() {
	this->_grade--;
	if (this->_grade <= 0)
		throw Bureaucrat::GradeTooHighException();
}

std::ostream & operator<<(std::ostream &ost, Bureaucrat const &copy) {
	ost << copy.getName() << ", bureaucrat grade " << copy.getGrade() << std::endl;
	return ost;
}

void Bureaucrat::signForm(Form *ptr) {
	if (ptr->getSign()) {
		std::cout << "Bureaucrat " << this->getName() << " cannot sign form " << ptr->getName();
		std::cout << " because form already signed" << std::endl;
		return ;
	}
	if (ptr->getIsGrade() >= this->getGrade()) {
		ptr->beSigned(this);
		std::cout << "Bureaucrat " << this->getName() << " signs form " << ptr->getName() << std::endl;
	}
	else {
		std::cout << "Bureaucrat " << this->getName() << " cannot sign form " << ptr->getName();
		std::cout << " because bureaucrat grade = " << this->getGrade() << " and form grade = " << ptr->getIsGrade()
		          << std::endl;
	}
}