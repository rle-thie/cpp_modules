#include "easyfind.hpp"

// https://learn.microsoft.com/fr-fr/cpp/standard-library/vector-class?view=msvc-170

int main(void)
{
	std::vector<int> vect;
	std::vector<int>::iterator	it;

	for (int i = 1; i < 100; i++)
		vect.push_back(i);
	it = easyfind(vect, 50);
	std::cout << *it << std::endl;
	return 0;
}