#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
	try {
		Bureaucrat y = Bureaucrat("yesmine", 151);
		y.incrementGrade();
		std::cout << y << std::endl;
		y.decrementGrade();
		std::cout << y << std::endl;
	}
	catch (std::exception &e){
		std::cout<< e.what() <<std::endl;
	}

	try {
		Bureaucrat y = Bureaucrat("yesmine", 1);
		y.incrementGrade();
		std::cout << y << std::endl;
		y.decrementGrade();
		std::cout << y << std::endl;
	}
	catch (std::exception &e){
		std::cout<< e.what() <<std::endl;
	}

	try {
		Bureaucrat y = Bureaucrat("yesmine", 1);
		y.decrementGrade();
		std::cout << y << std::endl;
		y.decrementGrade();
		std::cout << y << std::endl;
	}
	catch (std::exception &e){
		std::cout<< e.what() <<std::endl;
	}

}