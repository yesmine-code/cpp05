#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
private:
	const std::string name;
	const int gradetosign;
	const int gradetoexecute;
	bool sign;
	void checkGrade();
public:
	Form();
	~Form();
	Form(Form const &src);
	Form(const std::string &name, int gradetosign, int gradetoexecute);
	int getGradeToSign(void) const;
	int getGradeToExecute(void) const;
	const std::string &getName(void) const;
	bool getSign(void) const;
	Form &operator=(Form const & src);
	bool beSigned(const Bureaucrat &bureaucrat);


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

std::ostream &operator<<(std::ostream & os, Form const &instance);

#endif