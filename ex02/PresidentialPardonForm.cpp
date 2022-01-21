#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target):Form("PresidentialPardonForm", 25, 5), target(target){
}

PresidentialPardonForm::PresidentialPardonForm( void):Form("PresidentialPardonForm", 25, 5), target(""){
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ):Form("PresidentialPardonForm", 25, 5),target(src.getTarget()){
	*this = src;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm( void ){
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const & src){
	src.getTarget();
	return *this;
}

const std::string	&PresidentialPardonForm::getTarget(void) const{
	return (this->target);
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const{
		this->beExecuted(executor);
		std::cout << this->target << " has been pardoned by Zafod Beeblebrox."<< std::endl;
}