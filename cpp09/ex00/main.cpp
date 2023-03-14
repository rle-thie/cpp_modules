#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	try
	{
		BitcoinExchange Binance(av[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}