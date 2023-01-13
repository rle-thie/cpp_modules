#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private :
		float	raw_nb;
		static const int	bit = 8;

	public :
		Fixed();
		Fixed(const int nb_int);
		Fixed(const float nb_float);
		Fixed(Fixed const & src);
		~Fixed();
		Fixed & operator=(Fixed const &n);

		int	getRawBits(void) const;
		void setRawBits(int const raw);
		int	toInt(void) const;
		float toFloat(void) const;

};

std::ostream	&operator<<(std::ostream &o, Fixed const &n);

#endif