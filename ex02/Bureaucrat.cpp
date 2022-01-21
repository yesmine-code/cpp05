#include "Bureaucrat.hpp"

void Bureaucrat::checkGrade() {
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
}
Bureaucrat::Bureaucrat(): name(""), grade(150) {
}
Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name), grade(grade){
	checkGrade();
	return;
}
Bureaucrat::~Bureaucrat(){

}
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src){
	this->grade = src.grade; // name is cont donc on peut pas le overwritten it
	return *this;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src){
	*this = src;
	return;
}
const std::string &Bureaucrat::getName(void) const{
	return (this->name);
}
int Bureaucrat::getGrade(void) const{
	return (this->grade);
}

void Bureaucrat::incrementGrade() {
	this->grade = grade - 1;
	checkGrade();
}
void Bureaucrat::decrementGrade() {
	this->grade = grade + 1;
	checkGrade();
}
std::ostream &operator<<(std::ostream & os, Bureaucrat const &instance){
	os << instance.getName() << ", Bureaucrat grade " << instance.getGrade();
	return os;
}

bool Bureaucrat::signForm(Form &form) const{
	if (form.beSigned(*this)){
		std::cout << this->name << " signs " << form.getName()<< std::endl;
		return true;
	}
	else{
		std::cout << this->name << " cannot sign " << form.getName()<< " because he has not enough grade!!" << std::endl;
		return false;
	}
}
bool Bureaucrat::executeForm(const Form &form ) const{
	try{
		    form.execute(*this);
			std::cout << this->name << " executes form " << form.getName() << std::endl;
			return true;
	}
	catch (Form::FormCannotBeExecuted &e){
		std::cout << e.what() << std::endl;
		return false;
	}
}