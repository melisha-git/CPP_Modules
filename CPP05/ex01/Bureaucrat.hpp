#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include <ostream>
//#include "Form.hpp"

class Form;

class Bureaucrat {
private:
    std::string _name;
    int _grade;
	Bureaucrat();
	Bureaucrat(Bureaucrat const &);
public:
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	class GradeTooHighException : public std::exception {
		virtual const char * what() const throw();
	};
	class GradeTooLowException : public std::exception {
		virtual const char * what() const throw();
	};
	std::string const	getName() const;
	int		            getGrade() const;
	void				toEnlarge();
	void				toReduce();
	void                signForm(Form *);
	Bureaucrat & operator=(Bureaucrat const &);
};

std::ostream & operator<<(std::ostream &, Bureaucrat const &);

#endif