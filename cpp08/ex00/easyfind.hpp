#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <stdexcept>
#include <string>
#include <algorithm>
#include <exception>
#include <vector>

template<typename T>
typename T::iterator	easyfind(T obj, int i)
{
	typename T::iterator	it;

	it = std::find(obj.begin(), obj.end(), i);
	if (it == obj.end())
		throw (std::out_of_range("Doesnt found element !"));
	else
		return (it);
}

#endif