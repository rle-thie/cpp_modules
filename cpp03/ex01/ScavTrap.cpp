#include "ScavTrap.hpp"

void	guarGate(void)
{
	
}

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default ScavTrap Constructor called" << std::endl;
	this->name = "Default";
	this->damage = 20;
	this->energy = 50;
	this->health = 100;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Constructor called : " << name << std::endl;
	// this->name = name;
	this->damage = 20;
	this->energy = 50;
	this->health = 100;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}