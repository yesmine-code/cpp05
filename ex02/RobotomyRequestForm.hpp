#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form{
private:
	const std::string target;
	RobotomyRequestForm(void);
public:
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &src);
	virtual ~RobotomyRequestForm(void);
	RobotomyRequestForm	&operator=(const RobotomyRequestForm &src);
	const std::string &getTarget(void) const;
	virtual void execute(const Bureaucrat &executor) const;
};

#endif