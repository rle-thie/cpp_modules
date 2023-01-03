#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "creation zombie" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "destruction zombie" << this->GetName() << std::endl;
}

Zombie	*Zombie::newZombie(std::string str)
{
	// utiliser New pour utiliser en dehors d'ici...
	Zombie	*new_zombie = new Zombie;

	new_zombie->SetName(str);
	return (new_zombie);
}

void	Zombie::randomChump(std::string str)
{
	Zombie	new_zombie;

	new_zombie.SetName(str);
	new_zombie.announce();
}

void	Zombie::announce()
{
	std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::GetName()
{
	return this->name;
}

void	Zombie::SetName(std::string str)
{
	this->name = str;
}
