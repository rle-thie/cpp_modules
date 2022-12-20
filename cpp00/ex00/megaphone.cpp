#include <iostream>

int	main(int ac, char **av)
{
	if (ac <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		int i = 1;
		int y = 0;
		while (av[i])
		{
			y = 0;
			while (av[i][y])
			{
				av[i][y] = std::toupper(av[i][y]);
				y++;
			}
			i++;
		}
		i = 1;
		y = 0;
		while (av[i])
		{
			std::cout << av[i];
			std::cout << " ";
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}