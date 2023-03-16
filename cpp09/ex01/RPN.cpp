#include "RPN.hpp"

Rpn::Rpn(std::string input)
{
	std::string delimiter = " ";
	size_t pos = 0;
	std::string token;
	while ((pos = input.find(delimiter)) != std::string::npos) {
		token = input.substr(0, pos);
		// token
		if (token.size() != 0)
			throw std::out_of_range("bad input");
		if (token != "+" || token != "-" || token != "*" || token != "/")
			std::cout << "caca" << std::endl;
		input.erase(0, pos + delimiter.length());
	}
	// input
}

// ------------------------------------------

Rpn::Rpn()
{
}

Rpn::~Rpn()
{
}

Rpn::Rpn(Rpn const &src)
{
	*this = src;
}

Rpn	&Rpn::operator=(Rpn const &a)
{
	// if same
	if (&a == this)
		return (*this);
	else
	{
	}
	return (*this);
}