#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(char *inputFile)
{
	std::ifstream input_file(inputFile);
	if (!input_file)
		throw std::length_error("input file error !");
	std::ifstream input_data("data.csv");
	if (!input_data)
		throw std::length_error("csv file error !");

	std::string buf;
	int c = 0;
	while(std::getline(input_data, buf))
	{
		if (c == 0)
		{
			c++;
			continue;
		}
		_fillcsv(buf);
	}

	std::string buff;
	c = 0;
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
			// std::cout << buff << std::endl;
			_cmp_data();
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

void	BitcoinExchange::_cmp_data(void)
{
	for (std::map<std::string, std::string>::iterator it = _bitcoin_nbr.begin(); it!=_bitcoin_nbr.end(); ++it)
	{
		std::cout << it->first << " => " << it->second << '\n';
	}
	std::cout << 
}

void	BitcoinExchange::_fillcsv(std::string line)
{
	int i = 0;
	int c = 0;
	while (line[i])
	{
		if (line[i] == ',')
			c++;
		i++;
	}
	if (c != 1)
		throw std::length_error("Error: bad csv file");

	std::string line2 = line;
	std::string delimiter = ",";
	size_t pos = 0;
	std::string token;
	while ((pos = line2.find(delimiter)) != std::string::npos) {
		token = line2.substr(0, pos);
		line2.erase(0, pos + delimiter.length());
	}
	_bitcoin_price.insert(std::pair<std::string, std::string>(token, line2));
}

void	BitcoinExchange::_parse_line(std::string line)
{
	// if (line.size() <= 13)
	// 	throw std::length_error("error !");
	// if (line.size() >= 25)
	// 	throw std::length_error("error !");
	int c = 0;
	int i = 0;
	while (line[i])
	{
		if (line[i] == '|')
			if (line[i-1] == ' ')
				if (line[i+1] == ' ')
					c++;
		i++;
	}
	if (c != 1)
		throw std::length_error("Error: bad input => " + line);
	
	std::string line2 = line;
	std::string delimiter = " | ";
	size_t pos = 0;
	std::string token;
	while ((pos = line2.find(delimiter)) != std::string::npos) {
		token = line2.substr(0, pos);
		line2.erase(0, pos + delimiter.length());
	}
	std::string	snbr = line2;
	
	if (snbr.size() > 7)
		throw std::length_error("Error: too much :).");
	if (snbr[0] == '-')
		throw std::length_error("Error: not a positive number.");
	int j = 0;
	i = 0;
	while (snbr[i])
	{
		if (i != 0 && snbr[i] == '.')
			if (j == 1)
				throw std::length_error("Error: not a number.");
			else
				j++;
		else if (!isdigit(snbr[i]))
			throw std::length_error("Error: not a valid number.");
		i++;
	}
	
	// _parse_nbr(token);

	_bitcoin_nbr.insert(std::pair<std::string, std::string>(token, line2));
}

// void	BitcoinExchange::_parse_line(std::string line)
// {
// 	if (line.size() <= 13)
// 		throw std::length_error("error !");
// 	if (line.size() >= 25)
// 		throw std::length_error("error !");
// 	int c = 0;
// 	int i = 0;
// 	while (line[i])
// 	{
// 		if (line[i] == '|')
// 			c++;
// 		i++;
// 	}
// 	if (c != 1)
// 		throw std::length_error("error !");
	

// 	std::string line2 = line;
// 	std::string delimiter = " | ";
// 	size_t pos = 0;
// 	std::string token;
// 	while ((pos = line2.find(delimiter)) != std::string::npos) {
// 		token = line2.substr(0, pos);
// 		_parse_date(token);
// 		line2.erase(0, pos + delimiter.length());
// 		i++;
// 	}
// 	// _parse_nbr(token);

// }

// void	pyear(std::string year)
// {
// 	if (year.size() != 4)
// 		throw std::length_error("year error !");
// 	char *str = &year[0];
// 	int		y = atoi(str);
// 	if (y < 2009)
// 		throw std::length_error("year error !");
// 	else if (y > 2022)
// 		throw std::length_error("year error !");
// }

// void	pmonth(std::string month)
// {
// 	if (month.size() != 2)
// 		throw std::length_error("month error !");
// 	char *str = &month[0];
// 	int		y = atoi(str);
// 	if (y < 1)
// 		throw std::length_error("month error !");
// 	else if (y > 12)
// 		throw std::length_error("month error !");
// }

// void	pday(std::string day)
// {
// 	if (day.size() != 2)
// 		throw std::length_error("day error !");
// 	char *str = &day[0];
// 	int		y = atoi(str);
// 	if (y < 1)
// 		throw std::length_error("day error !");
// 	else if (y > 31)
// 		throw std::length_error("day error !");
// }

// void BitcoinExchange::_parse_date(std::string date)
// {
// 	if (date.size() != 10)
// 		throw std::length_error("Date error !");
// 	int i = 0;
// 	int c = 0;
// 	while (date[i])
// 	{
// 		if (date[i] == '-')
// 			c++;
// 		i++;
// 	}
// 	if (c != 2)
// 		throw std::length_error("Datezefzf error !");
	
// 	i = 0;
// 	std::string delimiter = "-";
// 	size_t pos = 0;
// 	std::string token;
// 	while ((pos = date.find(delimiter)) != std::string::npos) {
// 		token = date.substr(0, pos);
// 		if (i == 0)
// 			pyear(token);
// 		if (i == 1)
// 			pmonth(token);
// 		date.erase(0, pos + delimiter.length());
// 		i++;
// 	}
// 	if (i == 2)
// 			pday(token);

// }