#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "creation zombie" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "destruction zombie" << " " << this->GetName() << std::endl;
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
