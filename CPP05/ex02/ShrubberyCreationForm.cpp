#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("target") {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy), _target(copy._target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target + "_shrubbery") {
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy) {
	this->_target = copy._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

const char * ShrubberyCreationForm::FileNotOpen::what() const throw() {
	return "File not open";
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (!this->getSign())
		throw Form::FormNotSigned();
	if (executor.getGrade() > this->getIsExecute())
		throw Form::ExecuteTooLowException();
	std::ofstream ofs(_target);
	if (!ofs.is_open())
		throw ShrubberyCreationForm::FileNotOpen();
	ofs << "___________||||||_||||||||" << std::endl;
	ofs << "__________|_____||________|" << std::endl;
	ofs << "________|||_______________ |||||||" << std::endl;
	ofs << "________|_______________________|||" << std::endl;
	ofs << "_______ ||____|__________________ |" << std::endl;
	ofs << "______|||____|||||||||____________|||" << std::endl;
	ofs << "______||______|||||_______ ||_______||_||" << std::endl;
	ofs << "_____||||||_______________||__|_||___||||||" << std::endl;
	ofs << "___|||__||||__|||_________|||||||____||___|||" << std::endl;
	ofs << "___|______|||_|_|__|__|_|||________________|||" << std::endl;
	ofs << "__ |________|_|_||||||||||_||________________||" << std::endl;
	ofs << "___||____||||_|_|||_||||_|_||||||||||________||" << std::endl;
	ofs << "__||||___||||||||___|||_|__|||____||||______|||" << std::endl;
	ofs << "_|||_|||||_||||||_||_|||____||||||||________|||" << std::endl;
	ofs << "||_____|||__||_|||||__||___||||||_|_____|||___||" << std::endl;
	ofs << "|_____|||___|_|_|||___||_||__|__|||||__|||_____||" << std::endl;
	ofs << "||___||||||_|||___|____|||__||||||||||||||||____|" << std::endl;
	ofs << "_||__||||||||||||_|||__||__|||||||__||||__|____|||" << std::endl;
	ofs << "__ ||||_____|_|||______||___||_____|||_________|" << std::endl;
	ofs << "____________|||__||_____|___|||_|||||||||||___||" << std::endl;
	ofs << "___|||||||||||||||||_||_||_|||||||||||||||||||||" << std::endl;
	ofs << "__ |_____|||||___|||_||__||||___|||________|||" << std::endl;
	ofs << "__ ||____||_______||_||___||||_|||||_____|||" << std::endl;
	ofs << "__ |_____|___|_|||_|_||___||_|||__|||____||" << std::endl;
	ofs << "__ ||_______||||__||______ |________||||||" << std::endl;
	ofs << "___|__|||||||_____|___|||__|__________|||" << std::endl;
	ofs << "___|||||||||_____||__|||||_||" << std::endl;
	ofs << "________________||___||||___||" << std::endl;
	ofs << "_______________||____||||___||" << std::endl;
	ofs << "____________||||_____||_____||" << std::endl;
	ofs << "___________ ||_______||_____||" << std::endl;
	ofs << "__________|||___||___||_____||" << std::endl;
	ofs << "________||||____||___|______||" << std::endl;
	ofs << "______ |||||____|______||____||" << std::endl;
	ofs << "_____||||||||_|||_|____||_|___||" << std::endl;
	ofs << "___|||||||||||K|||||||||||||||||||" << std::endl;
	ofs << "__ ||||||||||||||_||||||____|||||_|||" << std::endl;
	ofs.close();
}
