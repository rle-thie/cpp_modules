#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	try
	{
		Rpn rpn(av[1]);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
}