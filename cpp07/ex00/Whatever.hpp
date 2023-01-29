#ifndef WHATEVER_HPP
#define WHATEVER_HPP

// http://www-igm.univ-mlv.fr/~lombardy/ens/C++0708/ttr3.pdf

#include <string>
#include <iostream>

template<typename T>
void	swap(T &a, T &b )
{
    T tmp_swap = a;
    a = b;
    b = tmp_swap;
}

template<typename T>
T	max(T const &a, T const &b)
{
	return (a > b ? a : b);
}

template<typename T>
T	min(T const &a, T const &b)
{
	return (a < b ? a : b);
}

#endif