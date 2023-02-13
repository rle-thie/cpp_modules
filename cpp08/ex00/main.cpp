#include "easyfind.hpp"

// https://learn.microsoft.com/fr-fr/cpp/standard-library/vector-class?view=msvc-170

int main(void)
{
	std::vector<int> vect;
	std::vector<int>::iterator	it;

	{
		int	tab[] = {1, 2, 3, 4, 5, 6, 2};
		std::vector<int> vector(tab, tab + 7);
		for (size_t i = 0; i < 7; i++)
			std::cout << "tab[" << i << "] = " << tab[i] << std::endl;
		std::cout << std::endl << "Find index of 2 in int tab" << std::endl;
		std::cout << "Index of first occurence of 2 : " << *easyfind(vector, 2) - 1 << std::endl;
	}

	// for (int i = 1; i < 100; i++)
	// 	vect.push_back(i);
	// it = easyfind(vect, 50);
	// std::cout << *it << std::endl;

	std::cout << "\n-----test with wrong index-----" << std::endl;

	try
	{
		std::cout << "Find index of 123 in int tab" << std::endl;
		std::cout << "Index of first occurence of 123 : " << *easyfind(vect, 123) - 1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}