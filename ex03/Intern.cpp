#include "Intern.hpp"

Intern::Intern(){
}

Intern::Intern(Intern const & src){
	*this = src;
	return;
}

Intern::~Intern(){
}

Intern &Intern::operator=(Intern const &src){
	(void)src; // ya rien a assigné
	return *this;
}

Form *Intern::makeForm(const std::string &formName, const std::string &target) const
{
	t_list form[] ={
					{ "presidential pardon", new PresidentialPardonForm(target) },
					{ "robotomy request", new RobotomyRequestForm(target) },
					{ "shrubbery creation", new ShrubberyCreationForm(target) },
					{ "", NULL }
	};
	Form	*tmpform = NULL;
	for (int i = 0; form[i].instance != NULL; i++){
		if (form[i].formName == formName)
			tmpform = form[i].instance;
		else
			delete form[i].instance;
	}
	if (tmpform == NULL)
		std::cout << "Form not found !!" << formName << std::endl;
	else
		std::cout << "Intern creates " << formName << std::endl;
	return tmpform;
}