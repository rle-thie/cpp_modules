#include "Bureaucrate.hpp"

int main()
{
	std::cout << std::endl << "---- Too Low test ----" << std::endl;
	try
	{
		Bureaucrate test("Patrick", 151);
		std::cout << test;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}


	std::cout << "---- Too High test ----" << std::endl;
	try
	{
		Bureaucrate test("Patrick", 0);
		std::cout << test;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}


	std::cout << std::endl << "---- Ok test ----" << std::endl;
	try
	{
		Bureaucrate test("Patrick", 12);
		Bureaucrate test1;
		std::cout << test;
		std::cout << test1;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "---- Increment too high grade ----" << std::endl;
	try
	{
		Bureaucrate test("Patrick", 1);
		test.incrGrade();
		std::cout << test;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}


	std::cout << std::endl << "---- Increment too low grade ----" << std::endl;
	try
	{
		Bureaucrate test("Patrick", 150);
		test.decrGrade();
		std::cout << test;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}


	std::cout << std::endl << "---- Increment & decrement grade ----" << std::endl;
	try
	{
		Bureaucrate test("Patrick", 150);
		Bureaucrate test1("Franck", 1);
		test.incrGrade();
		test1.decrGrade();
		std::cout << test;
		std::cout << test1;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}