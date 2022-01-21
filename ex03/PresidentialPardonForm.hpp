#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form{
private:
	const std::string target;
	PresidentialPardonForm(void);
public:
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm &src);
	virtual ~PresidentialPardonForm(void);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &src);
	const std::string	&getTarget(void) const;
	virtual void execute(const Bureaucrat &executor) const;
};

#endif