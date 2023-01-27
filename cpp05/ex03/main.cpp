#include "Bureaucrate.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	std::cout << "---- Shrubbery creation form by intern test ----" << std::endl;
	try
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "---- Robotomy request form by intern test ----" << std::endl;
	try
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "---- Presidential pardon form by intern test ----" << std::endl;
	try
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "---- Bad form by intern test ----" << std::endl;
	try
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("bloup", "Bender");
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << "---- Exec forms test ----" << std::endl;
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		Bureaucrate a("Denis", 13);
		try
		{
			a.executeForm(*rrf);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			a.signForm(*rrf);
			a.executeForm(*rrf);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		delete rrf;
	}
	std::cout << std::endl;
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		Bureaucrate a("Denis", 46);
		try
		{
			a.executeForm(*rrf);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			a.signForm(*rrf);
			a.executeForm(*rrf);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		delete rrf;
	}
	std::cout << std::endl;
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		Bureaucrate a("Denis", 100);
		try
		{
			a.executeForm(*rrf);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			a.signForm(*rrf);
			a.executeForm(*rrf);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		delete rrf;
	}
	return 0;
}