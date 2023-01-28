#include "Conversion.hpp"

int	Convert::conv()
{
	
	if (_ac != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	// convertir en double av[1]
	double d = strtod(_av[1], NULL);
	if (notanumber(_av[1]) == true)
	{
		return (1);
	}
	if (parsing(_av[1]) == false)
	{
		std::cout << "Wrong argument" << std::endl;
		return (1);
	}
	convertChar(_av[1], d);
	convertInt(_av[1], d);
	convertFloat(_av[1], d);
	convertDouble(_av[1], d);
	return (0);
}

// ------------------------------------------------------------------------------------

bool	Convert::parsing(std::string input)
{
	if (input.length() == 0)
		return (false);
	if (input.length() == 1)
		return (true);
	if (isdigit(static_cast<int>(input[0])) == 0 && input[0] != '+' && input[0] != '-')
		return (false);
	int last_char = static_cast<int>(input[input.length() - 1]);
	if (isdigit(last_char) == 0 && last_char != 'f')
		return (false);
	size_t i = 0;
	if (input[i] == '+' && input[i] == '-')
		i++;
	for (; i < input.length(); i++)
	{
		if (isdigit(static_cast<int>(input[i])) == 0 && input[i] != '.')
		{
			if (i == input.length() - 1 && input[i] != 'f')
				return false;
		}
	}
	return true;
}

bool	Convert::notanumber(std::string input)
{
	if (input == "nan" || input == "nanf")
	{
		std::cout << "Char : impossible" << std::endl;
		std::cout << "Int : impossible" << std::endl;
		std::cout << "Float : nanf" << std::endl;
		std::cout << "Double : nan" << std::endl;
		return true;
	}
	return false;
}

size_t	Convert::searchPrecision(std::string str)
{
	size_t	i = 0;
	size_t	j = 0;

	for (; i < str.length(); i++)
	{
		if (str[i] == '.')
		{
			for (; i < str.length(); i++)
				j++;
			return (j - 1);
		}
	}
	return (1);
}

void	Convert::convertDouble(std::string str, double d)
{
	if (str.length() < 2)
		d = static_cast<int>(str[0]);
	std::cout.precision(searchPrecision(str));
	std::cout << "Double : " << std::fixed << static_cast<double>(d) << std::endl;
}

void	Convert::convertFloat(std::string str, double d)
{
	if (str.length() < 2)
		d = static_cast<int>(str[0]);
	std::cout.precision(searchPrecision(str));
	std::cout << "Float : " << std::fixed << static_cast<float>(d) << "f" << std::endl;
}

void	Convert::convertChar(std::string str, double d)
{
	char c = str[0];
	if (str.length() == 1)
	{
		if (isdigit(static_cast<int>(c)))
			c = c - 48;
		if (static_cast<int>(c) >= 32 && static_cast<int>(c) <= 126)

			std::cout << "char: '" << c << "'" << std::endl;
		else
			std::cout << "char: impossible" << std::endl;
	}
	else
	{
		if (d >= 32 && d <= 126)
			std::cout << "Char : '*'" << std::endl;
			// std::cout << "Char : '" << static_cast<char>(d) << "'" << std::endl;
		else
			std::cout << "Char : non displayable" << std::endl;
	}
}

void	Convert::convertInt(std::string input, double d)
{
	if (input.length() < 2)
		d = static_cast<int>(input[0]);
	if (d < INT_MIN || d > INT_MAX)
		std::cout << "Int : impossible" << std::endl;
	else
		std::cout << "Int : " << static_cast<int>(d) << std::endl;
}

// -------------------------------------------------------------------------------------

Convert::Convert() : _ac(0), _av(NULL)
{
}

Convert::Convert(int ac, char **av) : _ac(ac), _av(av)
{	
}

Convert::Convert(Convert const &src)
{
	*this = src;
}

Convert::~Convert()
{
}

Convert	&Convert::operator=(Convert const &a)
{
	// if same
	if (&a == this)
		return (*this);
	else
	{
	}
	return (*this);
}