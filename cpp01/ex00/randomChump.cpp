#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie newZombie;

	newZombie.SetName(name);
	newZombie.announce();
}