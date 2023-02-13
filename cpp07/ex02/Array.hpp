#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>
#include <cstdlib>

template<typename T>
class Array
{
	private:
		T				*_array;
		unsigned int	_size;

	public:
		Array()
		{
			std::cout << "Default constructor called" << std::endl;
			_array = NULL;
			_size = 0;
		};

		Array(unsigned int n)
		{
			std::cout << "With size constructor called" << std::endl;
			if (n < 1)
				throw(std::length_error("Need a size > 0"));
			_size = n;
			_array = new T[n];
		};

		Array(Array const & src)
		{
			_size = 0;
			_array = NULL;
			*this = src;
		}

		~Array()
		{
			std::cout << "Destructor called" << std::endl;
			if (_array)
				delete [] _array;
		};

		Array &	operator=(Array const & rhs)
		{
			std::cout << "Assignement operator called" << std::endl;
			if (this != &rhs)
			{
				if (_array)
					delete [] _array;
				_size = rhs.size();
				_array = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					_array[i] = rhs._array[i];
			}
			return *this;
		}

		T &	operator[](unsigned int const i)
		{
			if (i >= _size)
				throw(std::out_of_range("Invalid index"));
			return _array[i];
		}

		unsigned int size() const
		{
			return _size;
		}
};

#endif