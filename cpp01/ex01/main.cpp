#include "Zombie.hpp"

int main()
{
	int n = 5;
	Zombie	*zombie1 = zombieHorde(n, "tom");

	for (int i = 0; i < n; i++)
	{
		zombie1[i].announce();
	}
	// for (int i = 0; i < n; i++)
	// 	zombie1[i].~Zombie();
	delete [] zombie1;
	return (0);
}