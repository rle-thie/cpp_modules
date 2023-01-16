#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private :
		int					raw_nb;
		static const int	bit = 8;

	public :
		Fixed();
		Fixed(const int nb_int);
		Fixed(const float nb_float);
		Fixed(Fixed const & src);
		~Fixed();
		Fixed & operator=(Fixed const &n);
		
		// comparaison
		bool	operator>(Fixed const &n) const;
		bool	operator<(Fixed const &n) const;
		bool	operator>=(Fixed const &n) const;
		bool	operator<=(Fixed const &n) const;
		bool	operator==(Fixed const &n) const;
		bool	operator!=(Fixed const &n) const;
		// operation
		Fixed	operator+(Fixed const &n) const;
		Fixed	operator-(Fixed const &n) const;
		Fixed	operator*(Fixed const &n) const;
		Fixed	operator/(Fixed const &n) const;
		// incrementation
		Fixed	&operator++(void);
		Fixed	&operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);

		// getters & setters
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		// methodes
		static Fixed		&max(Fixed &a, Fixed &b);
		static Fixed const	&max(Fixed const &a, Fixed const &b);
		static Fixed		&min(Fixed &a, Fixed &b);
		static Fixed const	&min(Fixed const &a, Fixed const &b);
		int					toInt(void) const;
		float				toFloat(void) const;

};

std::ostream	&operator<<(std::ostream &o, Fixed const &n);

#endif