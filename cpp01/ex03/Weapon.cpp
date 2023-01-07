#include "Weapon.hpp"

Weapon::Weapon(std::string arme)
{
	this->type = arme;
}

Weapon::~Weapon()
{
}

const std::string	&Weapon::GetType()
{
	// std::cout << ":" << this->type << ":" << std::endl;
	std::string	&str = this->type;
	return (str);
}

void	Weapon::setType(std::string new_name)
{
	this->type = new_name;
}