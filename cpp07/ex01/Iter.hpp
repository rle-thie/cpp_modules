#ifndef ITER_HPP
#define ITER_HPP

#include <string>
#include <iostream>


template<typename T>
void	function_print(T x)
{
	std::cout << x << std::endl;
}

template<typename T>
void	iter(T *tab, size_t lenth, void (*function_name)(T const &arg))
{
	for (size_t i = 0; i < lenth; i++)
	{
		(*function_name)(tab[i]);
	}
}


#endif