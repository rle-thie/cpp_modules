#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name)
{
	Zombie	*tabZombie = new Zombie[n];

	for (int i = 0; i < n; i++)
	{
		tabZombie[i].SetName(name);
	}
	return (tabZombie);
}