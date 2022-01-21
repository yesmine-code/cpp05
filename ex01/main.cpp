#include "Bureaucrat.hpp"
#include "Form.hpp"


int main(){
	try {
		Bureaucrat y = Bureaucrat("yesmine", 1);
		Form f = Form("f00", 10, 2);
		std::cout << f << std::endl;
		f.beSigned(y);
		std::cout << f << std::endl;

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat y = Bureaucrat("yesmine", 1);
		Form f = Form("f00", 151, 2);
		std::cout << f << std::endl;
		f.beSigned(y);
		std::cout << f << std::endl;

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat y = Bureaucrat("yesmine", 1);
		Form f = Form("f00", 15, 0);
		std::cout << f << std::endl;
		f.beSigned(y);
		std::cout << f << std::endl;

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat y = Bureaucrat("yesmine", 10);
		Form f = Form("f00", 9, 2);
		f.beSigned(y);
		y.signForm(f);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat y = Bureaucrat("yesmine", 10);
		Form f = Form("f00", 90, 2);
		f.beSigned(y);
		y.signForm(f);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}