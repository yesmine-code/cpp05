#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	Intern stagiaire;
	Bureaucrat lol("lol", 6);
	Form *f;

	f = stagiaire.makeForm("blabla", "yesmine");
	if (f)
		delete f;
	f = stagiaire.makeForm("presidential pardon", "yesmine");
	if (f)
		delete f;
	f = stagiaire.makeForm("robotomy request", "yesmine");
	if (f)
		delete f;
	f = stagiaire.makeForm("shrubbery creation", "yesmine");
	f->beSigned(lol);
	f->execute(lol);
	if (f)
		delete f;
}