#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void testBureaucratLvl()
{
/*
* Уровень бюрократа слишком низок
*/
	try {
		Bureaucrat jake("Jake", 151);
		std::cout << jake;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
/*
* Бюрократ слишком высокого уровня
*/
	try {
		Bureaucrat john("John", 0);
		std::cout << john;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
/*
 * Нормальный уровень бюрократа
 */
	try {
		Bureaucrat john("John", 15);
		std::cout << john;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

/*
 * тестирование ShrubberyCreationForm
 */

void testShrubbbery() {
	/*
	 * Подписание и выполнение
	 */
	try {
		Bureaucrat vova("Vova", 1);
		Intern vasya;
		Form *form = vasya.makeForm("ShrubberyCreation", "bereza");
		vova.signForm(form);
		vova.executeForm(*form);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	/*
	 * Уровень бюрократа маленький он сможет подписать, но не выполнить
	 */
	try {
		Bureaucrat jora("Jora", 138);
		Intern vasya;
		Form *form1 = vasya.makeForm("ShrubberyCreation", "bereza");
		jora.signForm(form1);
		jora.executeForm(*form1);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}

/*
 * тестирование RobotomyRequestForm
 */

void testRobot() {
	/*
	 * Подписание и выполнение
	 */
	try {
		Bureaucrat vova("Vova", 1);
		Intern vasya;
		Form *form1 = vasya.makeForm("RobotomyRequest", "bereza");
		vova.signForm(form1);
		vova.executeForm(*form1);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	/*
	 * Уровень бюрократа маленький он сможет подписать, но не выполнить
	 */
	try {
		Bureaucrat jora("Jora", 60);
		Intern vasya;
		Form *form1 = vasya.makeForm("RobotomyRequest", "bereza");
		jora.signForm(form1);
		jora.executeForm(*form1);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}

/*
 * тест PresidentialPardonForm
 */

void testPresidential() {
	/*
	 * Подписание и выполнение
	 */
	try {
		Bureaucrat vova("Vova", 1);
		Intern vasya;
		Form *form1 = vasya.makeForm("PresidentialPardon", "bereza");
		vova.signForm(form1);
		vova.executeForm(*form1);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	/*
	 * Уровень бюрократа маленький он сможет подписать, но не выполнить
	 */
	try {
		Bureaucrat jora("Jora", 20);
		Intern vasya;
		Form *form1 = vasya.makeForm("PresidentialPardon", "bereza");
		jora.signForm(form1);
		jora.executeForm(*form1);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}

void InternTest()
{
	/*
	 * Форма не создасться, так как не верное имя
	 */
	try {
		Bureaucrat vova("Vova", 1);
		Intern vasya;
		Form *form = vasya.makeForm("Presidential Pardons", "misha");
		form->beSigned(&vova);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}

int main() {
	testBureaucratLvl();
	testShrubbbery();
	testRobot();
	testPresidential();
	InternTest();
	return 0;
}