#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <string>
#include <limits.h>
#include <iomanip>
#include <stdlib.h>

class	Convert
{
	private :
		int		_ac;
		char	**_av;
		double	_d;
	
	public :
		Convert();
		Convert(int ac, char **av);
		Convert(Convert const &src);
		Convert	&operator=(Convert const &a);
		~Convert();

		int		conv(void);

		bool	notanumber(std::string input);
		size_t	searchPrecision(std::string str);
		bool	parsing(std::string input);
		
		void	convertChar(std::string str, double d);
		void	convertInt(std::string str, double d);
		void	convertDouble(std::string str, double d);
		void	convertFloat(std::string str, double d);
		
};

#endif