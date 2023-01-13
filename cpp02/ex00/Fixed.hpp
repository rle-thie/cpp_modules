#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	private :
		int	raw_nb;
		static const int	bit = 8;

	public :
		Fixed();
		Fixed(Fixed const & src);
		~Fixed();
		Fixed & operator=(Fixed const & n);

		int	getRawBits(void) const;
		void setRawBits(int const raw);

};

#endif