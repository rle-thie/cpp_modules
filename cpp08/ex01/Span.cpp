#include "Span.hpp"


//  ------------------------------- CONSTRUCTOR --------------------------------

Span::Span() : _size(0)
{
}

Span::Span(unsigned int const N) : _size(N)
{
}

Span::Span( const Span & src ) : _size(src._size)
{
	*this = src;
}

Span::~Span()
{
}

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
		_tab = rhs._tab;
	return *this;
}


//  --------------------------------- METHODS ----------------------------------

void	Span::addNumber(int i)
{
	if (_tab.size() >= getSize())
		throw (std::length_error("Tab is full !"));
	_tab.push_back(i);
	std::cout << "Added " << i << " to the tab" << std::endl;
}


void	Span::fillSpan(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if ((end - start) + _tab.size() > getSize())
		throw(std::out_of_range("Range of iterator too big"));
	_tab.insert(_tab.end(), start, end);
}

int	Span::shortestSpan()
{
	int ret = 2147483647;
	if (_tab.size() == 0 || _tab.size() == 1)
		throw(std::length_error("Tab is empty or have only one elem"));
	std::sort (_tab.begin(), _tab.end());
	for (size_t i = 1; i < _tab.size(); i++)
	{
		if (_tab[i] - _tab[i - 1] < ret)
			ret = _tab[i] - _tab[ i - 1];
	}
	return ret;
}

int	Span::longestSpan()
{
	if (_tab.size() == 0 || _tab.size() == 1)
		throw(std::length_error("Tab is empty or have only one elem"));
	int	max = *std::max_element(_tab.begin(), _tab.end());
	int	min = *std::min_element(_tab.begin(), _tab.end());
	return max- min;
}

void	Span::displayTab()
{
	if (getSize() != 0)
	{
		std::cout << "---- Display Tab ----" << std::endl;
		std::vector <int>::iterator it;
		for (it = _tab.begin(); it != _tab.end(); it++)
			std::cout << "Value : " << *it << std::endl;
	}
}


//  --------------------------------- getter ---------------------------------

unsigned int Span::getSize() const
{
	return _size;
}
