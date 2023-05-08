#include "RPN.hpp"

void	Rpn::_is_correct(std::string token)
{
	if (token.size() != 1)
			throw std::out_of_range("Error: bad input");
		if (token != "+" && token != "-" && token != "*" && token != "/")
			if (!isdigit(token[0]))
				throw std::out_of_range("Error: bad input");
	
}

Rpn::Rpn(std::string input)
{
	std::string delimiter = " ";
	size_t pos = 0;
	std::string token;
	while ((pos = input.find(delimiter)) != std::string::npos) {
		token = input.substr(0, pos);
		// token
		_is_correct(token);
		if (isdigit(token[0]))
		{
			_pile.push(atoi(&token[0]));
			// _print_step(input[0]);
		}
		else if (token == "+" || token == "-" || token == "*" || token == "/")
		{
			_ope(token[0]);
			// _print_step(token[0]);
		}
		input.erase(0, pos + delimiter.length());
	}
	_is_correct(input);
	if (isdigit(input[0]))
	{
		_pile.push(atoi(&input[0]));
		// _print_step(input[0]);
	}
	else if (input == "+" || input == "-" || input == "*" || input == "/")
	{
		_ope(input[0]);
		// _print_step(input[0]);
	}
	// result :
	if (_pile.size() != 1)
		throw std::out_of_range("Error: bad operation format");
	std::cout << "result > " << _pile.top() << std::endl;
}

void	Rpn::_ope(char opera)
{
	if (_pile.size() <= 1)
		throw std::out_of_range("Error: bad format");
	int	second = _pile.top();
	_pile.pop();
	int	first = _pile.top();
	_pile.pop();
	if (opera == '+')
		_pile.push(first + second);
	else if (opera == '-')
		_pile.push(first - second);
	else if (opera == '*')
		_pile.push(first * second);
	else if (opera == '/')
	{
		// si on essaye de diviser par zero = impossible.
		if (second == 0)
			throw std::out_of_range("Error: bad input ('0 /')");
		_pile.push(first / second);
	}
}

void	Rpn::_print_step(char token)
{
	std::cout << token << "  ";
	if (_pile.empty())
	{
		std::cout << std::endl;
		return ;
	}
	std::stack<int> pile_copy(_pile);
    while(!pile_copy.empty()) {
        std::cout << pile_copy.top() << " ";
        pile_copy.pop();
    }
	std::cout << std::endl;
}

// ------------------------------------------

Rpn::Rpn()
{
}

Rpn::~Rpn()
{
}

Rpn::Rpn(Rpn const &src) : _pile(src._pile)
{
	*this = src;
}

Rpn	&Rpn::operator=(Rpn const &a)
{
	// if same
	if (&a == this)
	{
		_pile = a._pile;
	}
	return (*this);
}