#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Form {
private:
	std::string _name;
	bool        _sign;
	int         _isGrade;
	int         _isExecute;
	Form();
	Form(Form const &);
public:
	Form(std::string name, int grade, int execute);
	~Form();
	Form &operator=(Form const &);
	class GradeTooHighException : public std::exception {
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
		virtual const char* what() const throw();
	};
	std::string getName() const;
	bool        getSign() const;
	int         getIsGrade() const;
	int         getIsExecute() const;
	void        beSigned(Bureaucrat *);
};

std::ostream & operator<<(std::ostream &, Form const &);

#endif