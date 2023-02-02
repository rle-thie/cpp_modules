#include "Fixed.hpp"

int main(void)
{
	// Fixed a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;
	// return 0;
	Fixed a;
	Fixed b( Fixed( 5.05f ) * Fixed( 2 ));
	Fixed c(42);
	Fixed d(42);
	Fixed const e(12);
	Fixed const f(-9);

	std::cout << "===== Comp operators ======" << std::endl << std::endl;
	std::cout << (b > c) << " : False" << std::endl;
	std::cout << (b < c) << " : True" << std::endl;
	std::cout << (c <= d) << " : True" << std::endl;
	std::cout << (c >= d) << " : True" << std::endl;
	std::cout << (c == d) << " : True" << std::endl;
	std::cout << (c != d) << " : False" << std::endl;

	std::cout << std::endl << "===== Arithmetic operators ======" << std::endl << std::endl;
	std::cout << "b = " << b << " | c = " << c << " | d = " << d << std::endl;
	std::cout << " c + d = " << (c + d) << std::endl;
	std::cout << " c - d = " << (c - d) << std::endl;
	std::cout << " c * b = " << (c * b) << std::endl;
	std::cout << " c / b = " << (c / b) << std::endl;

	std::cout << std::endl << "===== Increment operators ======" << std::endl << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;

	std::cout << std::endl << "===== Decrement operators ======" << std::endl << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "--a = " << --a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a-- = " << a-- << std::endl;
	std::cout << "a = " << a << std::endl;

	std::cout << std::endl << "=====Min & Max functions ======" << std::endl << std::endl;
	std::cout << "a = " << a << " | b = " << b << " | e = " << e;
	std::cout << " | f = " << f << std::endl;
	std::cout << "Max between a & b : " << Fixed::max( a, b )  << std::endl;
	std::cout << "Min between a & b : " << Fixed::min( a, b )  << std::endl;
	std::cout << "Max between e & f const : " << Fixed::max( e, f )  << std::endl;
	std::cout << "Min between e & f const : " << Fixed::min( e, f )  << std::endl;

	return 0;
}
