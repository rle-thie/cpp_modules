#include "Iter.hpp"

int main(void)
{
	char	str[] = "{Je_suis_une_chaine_de_caractere}";
	int		tab[5] = {1, 2, 3, 4, 5};

	iter(str, 34, function_print);
	std::cout << "----------------------" << std::endl;
	iter(tab, 5, function_print);
	return (0);
}