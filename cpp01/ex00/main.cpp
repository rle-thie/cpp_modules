#include "Zombie.hpp"

int main()
{
	Zombie	*zombie1;

	zombie1 = newZombie("zombie1");
	zombie1->announce();

	randomChump("randomZombie");
	delete zombie1;
	return (0);
}