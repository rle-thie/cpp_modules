#include "Bureaucrate.hpp"
#include "Form.hpp"

int main()
{
	std::cout << std::endl << "---- Too Low Sign Grade test ----" << std::endl;
	try
	{
		Form test("Inscription", 151, 1);
		std::cout << test;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "---- Too High Sign Grade test ----" << std::endl;
	try
	{
		Form test("Inscription", -42, 1);
		std::cout << test;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "---- Too Low Exec Grade test ----" << std::endl;
	try
	{
		Form test("Inscription", 12, 222222);
		std::cout << test;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "---- Too High Exec Grade test ----" << std::endl;
	try
	{
		Form test("Inscription", 12, -222222);
		std::cout << test;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "---- Ok tests ----" << std::endl;
	try
	{
		Form test("Inscription", 1, 150);
		Form test1("Account", 12, 15);
		Form test2;
		std::cout << test;
		std::cout << test1;
		std::cout << test2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "---- Be signed ok test ----" << std::endl;
	try
	{
		Form form("Inscription", 12, 12);
		Bureaucrate bureaucrat("Gerard", 1);
		std::cout << form;
		std::cout << bureaucrat;
		bureaucrat.signForm(form);
		std::cout << form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "---- Form sign bureaucrat too low grade test ----" << std::endl;
	try
	{
		Form form("Inscription", 12, 12);
		Bureaucrate bureaucrat("Gerard", 13);
		std::cout << form;
		std::cout << bureaucrat;
		bureaucrat.signForm(form);
		std::cout << form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "---- Form sign bureaucrat already signed test ----" << std::endl;
	try
	{
		Form form("Inscription", 12, 12);
		Bureaucrate bureaucrat("Gerard", 12);
		std::cout << bureaucrat;
		std::cout << form;
		bureaucrat.signForm(form);
		std::cout << form;
		bureaucrat.signForm(form);
		std::cout << form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}