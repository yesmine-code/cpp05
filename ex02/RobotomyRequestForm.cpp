#include <cstdlib>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target):Form("RobotomyRequestForm", 72, 45), target(target){
}

RobotomyRequestForm::RobotomyRequestForm( void ):Form("RobotomyRequestForm", 72, 45), target(""){
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src):Form("RobotomyRequestForm", 72, 45), target(src.getTarget()){
	*this = src;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm( void ){
	return;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src){
	src.getTarget();
	return *this;
}

const std::string	&RobotomyRequestForm::getTarget( void ) const{
	return this->target;
}

void	RobotomyRequestForm::execute( const Bureaucrat &executor ) const{
		this->beExecuted(executor);
		std::cout << " noooooooooooooiiiiiiiiiises " << std::endl;
		if (std::rand() % 2)
			std::cout << this->target << " has been robotomized" << std::endl;
		else
			std::cout << this->target<< "  has not been robotomized" << std::endl;
}