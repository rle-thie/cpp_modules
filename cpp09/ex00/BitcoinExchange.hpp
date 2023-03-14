#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <fstream>
#include <stdexcept>
#include <iostream>
#include <string>
#include <map>
#include <cstdlib>

class BitcoinExchange
{
	private :
		std::map<std::string, std::string>	_bitcoin_nbr;
		std::map<std::string, std::string>	_bitcoin_price;

	public :
		BitcoinExchange(char *inputFile);
		~BitcoinExchange();

	private :
		void	_parse_line(std::string line);
		void	_fillcsv(std::string line);
		void	_cmp_data(void);
		// void	_parse_date(std::string date);
		// void	_parse_nbr(std::string nbr);
	
};

#endif