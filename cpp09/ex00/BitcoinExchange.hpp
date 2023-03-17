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
		int			_y;
		int			_m;

	public :
		BitcoinExchange();
		BitcoinExchange(char *inputFile);
		~BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &src);
		BitcoinExchange &operator=(BitcoinExchange const &a);

	private :
		std::pair<std::string, std::string>	_parse_line(std::string line);
		void								_fillcsv(std::string line);
		void								_cmp_data(std::pair<std::string, std::string> date);
		void								_pyear(std::string year);
		void								_pmonth(std::string month);
		void								_pday(std::string day);
		void								_check_date(std::string full_date);
	
};

#endif