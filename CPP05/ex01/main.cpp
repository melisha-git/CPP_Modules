#include "Bureaucrat.hpp"
#include "Form.hpp"

void testBureaucratLvl()
{
/*
* Уровень бюрократа слишком низок
*/
	try {
		Bureaucrat jake("Jake", 151);
		Form form1("document1", 21, 13);
		form1.beSigned(&jake);
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

void testFormLvl()
{
/*
 * Документ имеет слишком маленький уровень
 */
	try {
		Bureaucrat jim("Jimmy", 12);
		Form form1("document1", 151, 13);
		jim.signForm(&form1);
		std::cout << jim;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
/*
 * Фома слишком высокого уровня
 */
	try {
		Form form("doc", 0, 12);
		std::cout << form;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
/*
 * нормальный уровень формы
 */
	try {
		Form form("doc", 19, 12);
		std::cout << form;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

void SignTest()
{
/*
 * Бюрократ не может подписать форму, так как уровень формы выше уровня бюрократа
 */
	try {
		Bureaucrat jim("Jimmy", 12);
		std::cout << jim;
		Form form1("document1", 2, 13);
		jim.signForm(&form1);
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
/*
 * Бюрократ подпишет форму
 */
	try {
		Bureaucrat hero("Hero", 12);
		std::cout << hero;
		Form form1("document2", 12, 13);
		hero.signForm(&form1);
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
/*
 * Бюрократ не подпишет форму, так как форма уже подписана
 */
	try {
		Bureaucrat hero("Hero", 12);
		std::cout << hero;
		Form form1("document2", 12, 13);
		form1.beSigned(&hero);
		hero.signForm(&form1);
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}

int main() {
//	testBureaucratLvl();
//	testFormLvl();
	SignTest();
	return 0;
}