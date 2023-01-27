#include "Bureaucrate.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	// std::cout << std::endl << "---- Shrubbery Test ----" << std::endl;
	// try
	// {
	// 	ShrubberyCreationForm	test("dessin");
	// 	Bureaucrate				b("Didier", 130);

	// 	b.signForm(test);
	// 	b.executeForm(test);
	// }
	// catch(const std::exception &e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

	std::cout << "---- Shrubbery form test ----" << std::endl;
	ShrubberyCreationForm forest("Forest");
	ShrubberyCreationForm garden("Garden");
	ShrubberyCreationForm mountain("Mountain");
	Bureaucrate a("Denis", 13);
	Bureaucrate b("Gerard", 140);
	Bureaucrate c;
	try
	{
		a.executeForm(forest);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		a.signForm(forest);
		a.executeForm(forest);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		b.signForm(garden);
		b.executeForm(garden);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		c.signForm(mountain);
		c.executeForm(mountain);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	

	std::cout << std::endl;

	{
		std::cout << "---- Robotomy Request form test ----" << std::endl;
		RobotomyRequestForm robot("Robot");
		RobotomyRequestForm robot1("Robot1");
		RobotomyRequestForm robot2("Robot2");
		Bureaucrate a("Denis", 13);
		Bureaucrate b("Gerard", 60);
		Bureaucrate c;
		try
		{
			a.executeForm(robot);
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;

		try
		{
			a.signForm(robot);
			a.executeForm(robot);
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
		try
		{
			b.signForm(robot1);
			b.executeForm(robot1);
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
		try
		{
			c.signForm(robot2);
			c.executeForm(robot2);
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << std::endl;

	{
		std::cout << "---- Presidential Pardon form test ----" << std::endl;
		PresidentialPardonForm human("Human");
		PresidentialPardonForm human1("Human1");
		PresidentialPardonForm human2("Human2");
		Bureaucrate a("Denis", 1);
		Bureaucrate b("Gerard", 20);
		Bureaucrate c;
		try
		{
			a.executeForm(human);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
		try
		{
			a.signForm(human);
			a.executeForm(human);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
		try
		{
			b.signForm(human1);
			b.executeForm(human1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
		try
		{
			c.signForm(human2);
			c.executeForm(human2);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	return 0;
}