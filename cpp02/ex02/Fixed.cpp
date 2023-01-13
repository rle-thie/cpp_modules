#include "Fixed.hpp"


int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->raw_nb);
}

void	Fixed::setRawBits(int const raw)
{
	this->raw_nb = raw;
}

float	Fixed::toFloat(void) const
{
	return (this->raw_nb / (float)(1 << this->bit));
}

int		Fixed::toInt(void) const
{
	return ((int)this->raw_nb >> this->bit);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &n)
{
	o << n.toFloat();
	return o;
}

// constructeurs

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->raw_nb = 0;
}

Fixed::Fixed(const int nb_int)
{
	std::cout << "Int constructor called" << std::endl;
	this->raw_nb = nb_int << this->bit;
}

Fixed::Fixed(const float nb_float)
{
	std::cout << "Float constructor called" << std::endl;
	this->raw_nb = roundf(nb_float * (1 << this->bit));
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

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}