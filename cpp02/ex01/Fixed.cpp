#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->raw_nb = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed & Fixed::operator=(Fixed const & n)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->raw_nb = n.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->raw_nb);
}

void	Fixed::setRawBits(int const raw)
{
	this->raw_nb = raw;
}