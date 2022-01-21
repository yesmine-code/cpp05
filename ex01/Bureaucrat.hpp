#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"
class Form;
class Bureaucrat{
private:
	void checkGrade();
	const std::string name;
	int grade;
public:
	Bureaucrat();
	Bureaucrat(const std::string &name, int grade);
	~Bureaucrat();
	Bureaucrat(Bureaucrat const &src);
	const std::string &getName(void) const;
	Bureaucrat &operator=(Bureaucrat const &src);
	int getGrade(void) const;
	void incrementGrade(void);
	void decrementGrade(void);
	bool signForm(Form &form) const;
public:
	class GradeTooHighException : public std::exception{
	public:
		virtual const char *what() const throw() {
			return ("this grade is too high!");
		}
	};
	class GradeTooLowException : public std::exception{
	public:
		virtual const char *what() const throw(){
			return ("this grade is too low!");
		}
	};
};

std::ostream &operator<<(std::ostream & os, Bureaucrat const &instance);

#endif