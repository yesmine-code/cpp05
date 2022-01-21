#include "Form.hpp"
//#include <stdbool.h>
//#include "iomanip"

Form::Form(const std::string &name, int gradetosign, int gradetoexecute) : name(name), gradetosign(gradetosign), gradetoexecute(gradetoexecute), sign(false){
	checkGrade();
	return;
}
Form::Form() : name(""), gradetosign(150), gradetoexecute(150), sign(false){
	checkGrade();
	return;
}
Form::~Form(){

}

int Form::getGradeToSign(void) const{
	return(this->gradetosign);
}

int Form::getGradeToExecute(void) const{
	return(this->gradetoexecute);
}

const std::string &Form::getName(void) const{
	return(this->name);
}

bool Form::getSign(void) const{
	return(this->sign);
}

std::ostream &operator<<(std::ostream &os, Form const &instance){
	os << instance.getName() << "'s Form has grade to sign =  "<< instance.getGradeToSign() << " and has grade to execute = "
	<< instance.getGradeToExecute() << " so is the form signed ? : "/*<< std::boolalpha */<<instance.getSign();
	return os;
}

void Form::checkGrade() {
	if (this->gradetosign > 150 || this->gradetoexecute > 150)
		throw Form::GradeTooLowException();
	if (this->gradetosign < 1 || this->gradetoexecute < 1)
		throw Form::GradeTooHighException();
}

Form	&Form::operator=(Form const & src){
	this->sign = src.sign; //the other attribute are const so no overwritten
	return *this;
}

Form::Form(Form const & src): name(src.getName()),gradetosign(src.getGradeToSign()), gradetoexecute(src.getGradeToExecute()), sign(src.getSign())
{
	*this = src;
	return;
}

bool	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() < this->gradetosign){
		this->sign = true;
		return true;
	}
	else{
		this->sign = false;
		return false;
	}
}

