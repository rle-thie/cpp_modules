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
void	iter(T *tab, int lenth, void (*function_name)(T &))
{
	for (int i = 0; i < lenth; i++)
	{
		function_name(tab[i]);
	}
}


#endif