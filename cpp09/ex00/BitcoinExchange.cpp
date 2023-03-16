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
			std::pair<std::string, std::string> datee;
			datee = _parse_line(buff);
			_cmp_data(datee);
			// _cmp_data(_parse_line(buff));
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

void	BitcoinExchange::_cmp_data(std::pair<std::string, std::string> date)
{
	// for (std::map<std::string, std::string>::iterator it = _bitcoin_price.begin(); it != _bitcoin_price.end(); ++it)
	// {
	// 	if (date.first == it->first)
	// 	{
	// 		std::cout << date.first << " => " << date.second << " = ";
	// 		char *convertme1 = &date.second[0];
	// 		char *convertme2 = &it->second[0];
	// 		double converted1=atof(convertme1);
	// 		double converted2=atof(convertme2);
	// 		std::cout << converted1*converted2 << std::endl;
	// 		return;
	// 	}
	// }
	// throw std::length_error("Error: can't find date in database");
	std::map<std::string, std::string>::iterator it = _bitcoin_price.lower_bound(date.first);
	// std::cout << (*_bitcoin_price.lower_bound(date.first)).second << std::endl;
	char *convertme1 = &date.second[0];
	char *convertme2 = &it->second[0];
	double converted1=atof(convertme1);
	double converted2=atof(convertme2);
	std::cout << date.first << " => " << date.second << " = " << converted1*converted2 << std::endl;
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

void	pyear(std::string year)
{
	if (year.size() != 4)
		throw std::length_error("year error !");
	char *str = &year[0];
	int		y = atoi(str);
	if (y < 2009)
		throw std::length_error("year error !");
	else if (y > 2022)
		throw std::length_error("year error !");
}

void	pmonth(std::string month)
{
	if (month.size() != 2)
		throw std::length_error("month error !");
	char *str = &month[0];
	int		y = atoi(str);
	if (y < 1)
		throw std::length_error("month error !");
	else if (y > 12)
		throw std::length_error("month error !");
}

void	pday(std::string day)
{
	if (day.size() != 2)
		throw std::length_error("day error !");
	char *str = &day[0];
	int		y = atoi(str);
	if (y < 1)
		throw std::length_error("day error !");
	else if (y > 31)
		throw std::length_error("day error !");
}

void	check_date(std::string full_date)
{
	int c = 0;
	int i = 0;
	while (full_date[i])
	{
		if (full_date[i] == '-')
			c++;
		i++;
	}
	if (c != 2)
		throw std::length_error("Error: bad input => " + full_date);
	i = 0;
	std::string	date = full_date;
	std::string delimiter = "-";
	size_t pos = 0;
	std::string token;
	while ((pos = date.find(delimiter)) != std::string::npos) {
		token = date.substr(0, pos);
		if (i == 0)
			pyear(token);
		else if (i == 1)
			pmonth(token);
		date.erase(0, pos + delimiter.length());
		i++;
	}
	pday(date);
	
}

std::pair<std::string, std::string>	BitcoinExchange::_parse_line(std::string line)
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
	check_date(token);
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
	char *nb = &snbr[0];
	double c1=atof(nb);
	if (c1 < 0)
		throw std::length_error("Error: negative number");
	if (c1 > 1000)
		throw std::length_error("Error: too hight");
	
	// _parse_nbr(token);

	_bitcoin_nbr.insert(std::pair<std::string, std::string>(token, line2));
	return (std::pair<std::string, std::string>(token, line2));
}

// --------------------------

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src)
{
	*this = src;
}

BitcoinExchange	&BitcoinExchange::operator=(BitcoinExchange const &a)
{
	// if same
	if (&a == this)
		return (*this);
	else
	{
	}
	return (*this);
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