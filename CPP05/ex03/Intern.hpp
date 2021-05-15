#ifndef INTERN_HPP
#define INTERN_HPP
#include "Form.hpp"

class Intern {
private:
	class GetForms {
	private:
		std::string const _name;
		Form *(*_ptrFunc)(std::string const &);
	public:
		GetForms(std::string const &name, Form *(*ptrFunc)(std::string const &));
		~GetForms();
		std::string const getName();
		Form *returnForms(std::string const &target);
	};
	GetForms *_pullForms[6];
public:
	Intern();
	Intern(Intern const &);
	~Intern();
	class FormNotCreated : public std::exception {
		virtual const char* what() const throw();
	};
	Intern & operator=(Intern const &);
	Form *makeForm(std::string name, std::string target);
};

#endif