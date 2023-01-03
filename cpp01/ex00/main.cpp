#include "Zombie.hpp"

int main()
{
	Zombie	zombie1;
	Zombie	*zombie2;
	zombie2 = zombie1.newZombie("test");

	zombie1=zombie1;
	zombie2=zombie2;
	zombie2->~Zombie();
	return (0);
}