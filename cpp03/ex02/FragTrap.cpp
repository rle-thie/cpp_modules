#include "FragTrap.hpp"

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap demande un high five !" << std::endl;
}

FragTrap::FragTrap() : ScavTrap()
{
	std::cout << "Default FragTrap Constructor called" << std::endl;
	this->name = "Default";
	this->damage = 30;
	this->energy = 100;
	this->health = 100;
}

FragTrap::FragTrap(std::string name) : ScavTrap(name)
{
	std::cout << "FragTrap Constructor called : " << name << std::endl;
	// this->name = name;
	this->damage = 30;
	this->energy = 100;
	this->health = 100;
}

FragTrap::FragTrap(FragTrap const &src) : ScavTrap(src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called : " << this->getName() << std::endl;
}