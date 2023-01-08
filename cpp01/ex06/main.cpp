#include "Harl.hpp"

int	ft_error(std::string str)
{
	std::cout << str << std::endl;
	return (0);
}

int main(int ac, char **av)
{
	if (ac != 2)
		return (ft_error("Error\nWrong argument"));
	
	Harl	h;
	std::string	str = av[1];
	int	c = 5;
	std::string	tab[4] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++)
	{
		if (tab[i] == str)
			c = i;
	}
	switch (c)
	{
	case 0:
		h.complain("DEBUG");
		h.complain("INFO");
		h.complain("WARNING");
		h.complain("ERROR");
		break;
	case 1:
		h.complain("INFO");
		h.complain("WARNING");
		h.complain("ERROR");
		break;
	case 2:
		h.complain("WARNING");
		h.complain("ERROR");
		break;
	case 3:
		h.complain("ERROR");
		break;	
	default:
		std::cout << "Error\nWrong option" << std::endl;
		break;
	}

	return (0);
}