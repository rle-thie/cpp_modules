#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <fstream>
#include <stdexcept>
#include <iostream>
#include <string>
#include <map>

class BitcoinExchange
{
	private :
		std::map<std::string, std::string>	_bitcoin_price;

	public :
		BitcoinExchange(char *inputFile);
		~BitcoinExchange();

	private :
		void	_parse_line(std::string line);
	
};

#endif