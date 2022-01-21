#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target):Form("ShrubberyCreationForm", 145, 137), target(target){
}

ShrubberyCreationForm::ShrubberyCreationForm(void):Form("ShrubberyCreationForm", 145, 137), target(""){
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src):Form("ShrubberyCreationForm", 145, 137), target(src.getTarget()){
	*this = src;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	return;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src){
	src.getTarget();
	return *this;
}

const std::string	&ShrubberyCreationForm::getTarget(void) const{
	return (this->target);
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const{
	std::ofstream	file;
	std::string		fileName = this->target + "_shrubbery";

		this->beExecuted(executor);
		file.open(fileName.c_str(), std::ios::out);
		file << "              /\\" << std::endl;
		file << "             /  \\" << std::endl;
		file << "            /    \\" << std::endl;
		file << "           /      \\" << std::endl;
		file << "          /        \\" << std::endl;
		file << "         /          \\ " << std::endl;
		file << "        /            \\" << std::endl;
		file << "       /              \\" << std::endl;
		file << "      /                \\" << std::endl;
		file << "     /                  \\" << std::endl;
		file << "    /                    \\" << std::endl;
		file << "   /                      \\" << std::endl;
		file << "  /________________________\\" << std::endl;
		file << "           |||||||||         " << std::endl;
		file << "           |||||||||         " << std::endl;
		file << "           |||||||||         " << std::endl;
		file << "           |||||||||         " << std::endl;
		file << "           |||||||||         " << std::endl;
		file << "           |||||||||         " << std::endl;
		file.close();
		std::cout << "you can find the tree in  " << this->target << "_shrubbery" << std::endl;

}