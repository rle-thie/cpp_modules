#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <sys/time.h>
#include <vector>
#include <deque>
#include <stdlib.h>
#include <unistd.h>
#include <algorithm>
#include "PmergeMe.hpp"

class InvalidEntry : public std::exception
{
public:
	virtual const char * what() const throw()
	{
		return ("Invalid entry");
	}
};

bool parse_str(std::string str)
{
	if (str.empty())
		return true;
	char * endPtrlong;
	long nb_long = strtol(str.c_str(), &endPtrlong, 10);
	if (*endPtrlong && nb_long == 0 && str.find(".") == std::string::npos)
		return true;
	return false;
}

void init_data(std::vector<int> & vec, char **av)
{
	for(int i = 0; av[i]; i++)
	{
		int tmp;
		tmp = std::atoi(av[i]);
		if (tmp < 0 || parse_str(av[i]))
			throw InvalidEntry();
		else 
			vec.push_back(tmp);
	}	
}

void init_data(std::deque<int> & deq, char **av)
{
	for(int i = 0; av[i]; i++)
	{
		int tmp;
		tmp = std::atoi(av[i]);
		if (tmp < 0 || parse_str(av[i]))
			throw InvalidEntry();
		else 
			deq.push_back(tmp);
	}	
}

void show(std::vector<int> &vec )
{
	std::vector<int>::iterator it = vec.begin();
	for (int i = 0; it != vec.end(); it++, i++)
	{
		if (vec.size() > 5 && i == 4)
		{
			std::cout << "[...]";
			break;
		}
		std::cout << *it << ' ';
	}
	std::cout << std::endl;
}

void show(std::deque<int> & deq)
{
	std::deque<int>::iterator it = deq.begin();
	for (int i = 0; it != deq.end(); it++, i++)
	{
		if (deq.size() > 5 && i == 4)
		{
			std::cout << "[...]";
			break;
		}
		std::cout << *it << ' ';
	}
	std::cout << std::endl;
}

int main(int ac, char **av)
{
    struct timeval begin, end;
	std::vector<int> vec;
	std::deque<int> deq;
	
	if (ac < 2)
	{
		std::cout << "Invalide args" << std::endl;
		return 0;
	}
	
	try
	{
		init_data(vec, &av[1]);
		init_data(deq, &av[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (0);
	}
	//-----------------------------------------------------------------------//
	
	std::cout << "Before: ";
	show(vec);
	
	//-----------------------------------------------------------------------//
    gettimeofday(&begin, 0);
	mergeSort(vec, 0, vec.size() - 1, 15);
	gettimeofday(&end, 0);
	//-----------------------------------------------------------------------//
	
	std::cout << "After: ";
	show(vec); 

	{
		long seconds = end.tv_sec - begin.tv_sec;
 		long microseconds = end.tv_usec - begin.tv_usec;
  		double elaps = (seconds + microseconds)*1e-6;

		std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << std::fixed << std::setprecision(7) << elaps << "µs" << std::endl;
	}	
	
	//-----------------------------------------------------------------------//
    gettimeofday(&begin, 0);
	mergeSort(deq, 0, deq.size() - 1, 15);
	gettimeofday(&end, 0);
	//-----------------------------------------------------------------------//
	
	{	
		long seconds = end.tv_sec - begin.tv_sec;
 		long microseconds = end.tv_usec - begin.tv_usec;
  		double elaps = (seconds + microseconds)*1e-6;


		std::cout << "Time to process a range of " << deq.size() << " elements with std::deque :  " << std::fixed << std::setprecision(7) << elaps << "µs" << std::endl;
	}

    return 0;
}

// if (std::is_sorted(vec.begin(), vec.end()))
// 	std::cout << "sorted" << std::endl;