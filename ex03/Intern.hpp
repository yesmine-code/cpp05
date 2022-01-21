#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern{
private:
	typedef struct	s_list{
		std::string	formName;
		Form		*instance;
	}               t_list;
public:

	Intern();
	Intern(const Intern &src);
	~Intern();
	Intern	&operator=(const Intern &src);
	Form *makeForm(const std::string &formName, const std::string &target) const;
};

#endif