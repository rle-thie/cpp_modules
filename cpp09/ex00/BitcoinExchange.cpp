#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(char *inputFile)
{
	std::ifstream input_file(inputFile);
	if (!input_file)
		throw std::length_error("input error !");
	
	std::string buff;
	int c = 0;
	std::cout << "cacaca" << std::endl;
	while(std::getline(input_file, buff))
	{
		if (c == 0)
		{
			c++;
			continue;
		}
		// parsing
		try
		{
			_parse_line(buff);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
}

BitcoinExchange::~BitcoinExchange()
{
}

void	BitcoinExchange::_parse_line(std::string line)
{
	std::cout << line << "____" << line.size() << std::endl;
	if (line.size() <= 13)
		throw std::length_error("error !");
	if (line.size() >= 25)
		throw std::length_error("error !");
	
}