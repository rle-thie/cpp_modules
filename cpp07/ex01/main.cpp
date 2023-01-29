#include "Iter.hpp"

int main(void)
{
	char	str[] = "{Je_suis_une_chaine_de_caratere}";
	int		tab[5] = {1, 2, 3, 4, 5};

	iter(str, 33, function_print);
	std::cout << "----------------------" << std::endl;
	iter(tab, 5, function_print);
	return (0);
}