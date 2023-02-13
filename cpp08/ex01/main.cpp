#include "Span.hpp"

int	main(void)
{
	Span a(5);
	Span b;
	Span c(1);
	try
	{
		a.addNumber(6);
		a.addNumber(3);
		a.addNumber(17);
		a.addNumber(9);
		a.addNumber(11);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	a.displayTab();
	std::cout << "a shortest span : " << a.shortestSpan() << std::endl;
	std::cout << "a longest span : " << a.longestSpan() << std::endl << std::endl;
	try
	{
		std::cout << "b longest span : " << b.longestSpan() << std::endl;
		std::cout << "b shortest span : " << b.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		c.addNumber(54);
		c.addNumber(55);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	c.displayTab();
	try
	{
		std::cout << "c shortest span : " << c.shortestSpan() << std::endl;
		std::cout << "c longest span : " << c.longestSpan() << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "---- Fill Span test ----" << std::endl;
	Span bloup(45);
	Span bloupp;

	bloup.addNumber(1);
	bloup.addNumber(2);
	bloup.addNumber(3);

	std::vector<int> test;
	test.push_back(23);
	try
	{
		bloup.fillSpan(test.begin(), test.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	test.push_back(12);
	try
	{
		bloup.fillSpan(test.begin(), test.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	test.push_back(13);
	test.push_back(14);
	try
	{
		bloupp.fillSpan(test.begin(), test.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	bloup.displayTab();

	return 0;
}