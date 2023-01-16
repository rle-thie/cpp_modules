#include "Fixed.hpp"

// comparaision
bool	Fixed::operator>(Fixed const &n ) const
{
	if (this->raw_nb > n.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<(Fixed const &n ) const
{
	if (this->raw_nb < n.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=(Fixed const &n ) const
{
	if (this->raw_nb >= n.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=(Fixed const &n ) const
{
	if (this->raw_nb <= n.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator==(Fixed const &n ) const
{
	if (this->raw_nb == n.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=(Fixed const &n ) const
{
	if (this->raw_nb != n.getRawBits())
		return (true);
	else
		return (false);
}

// operator
Fixed	Fixed::operator+(Fixed const &n) const
{
	Fixed tmp;

	tmp.setRawBits(this->raw_nb + n.getRawBits());
	return (tmp);
}

Fixed	Fixed::operator-(Fixed const &n) const
{
	Fixed tmp;

	tmp.setRawBits(this->raw_nb - n.getRawBits());
	return (tmp);
}

Fixed	Fixed::operator*(Fixed const &n) const
{
	Fixed tmp;

	tmp.setRawBits(this->raw_nb * n.getRawBits() >> this->bit);
	return (tmp);
}

Fixed	Fixed::operator/(Fixed const &n) const
{
	Fixed tmp;

	tmp.setRawBits((this->raw_nb << this->bit) / n.getRawBits());
	return (tmp);
}

// incrementation
Fixed	&Fixed::operator++(void)
{
	this->raw_nb++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;

	++*this;
	return (tmp);
}

Fixed	&Fixed::operator--(void)
{
	this->raw_nb--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;

	--*this;
	return (tmp);
}

// getter & setter
int	Fixed::getRawBits(void) const
{
	return (this->raw_nb);
}

void	Fixed::setRawBits(int const raw)
{
	this->raw_nb = raw;
}

// methodes
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

Fixed	&Fixed::max( Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

Fixed const	&Fixed::max( Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

Fixed	&Fixed::min( Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed const	&Fixed::min( Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

// constructeurs

Fixed::Fixed()
{
	this->raw_nb = 0;
}

Fixed::Fixed(const int nb_int)
{
	this->raw_nb = (int)nb_int << this->bit;
}

Fixed::Fixed(const float nb_float)
{
	this->raw_nb = (int)roundf(nb_float * (1 << this->bit));
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
}

Fixed & Fixed::operator=(Fixed const & n)
{
	this->raw_nb = n.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
}