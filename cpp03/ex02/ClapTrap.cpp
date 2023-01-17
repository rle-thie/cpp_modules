#include "ClapTrap.hpp"

void	ClapTrap::attack(const std::string &target)
{
	if (this->energy < 1)
	{
		std::cout << "No energy point.." << std::endl;
		return ;
	}
	else if (this->health <= 0)
	{
		std::cout << "Claptrap dead.." << std::endl;
		return ;
	}
	else
	{
		std::cout << "Claptrap " << this->name << " attacks " << target << ", causing " << this->damage << " points of damage!" << std::endl;
		this->energy--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->health <= 0)
	{
		std::cout << "Claptrap already dead.." << std::endl;
		return ;
	}
	this->health-= amount;
	std::cout << "Claptrap " << this->name << " has been lost " << amount << " hp, total=" << this->health << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy < 1)
	{
		std::cout << "No energy point.." << std::endl;
		return ;
	}
	else if (this->health <= 0)
	{
		std::cout << "Claptrap dead.." << std::endl;
		return ;
	}
	else
	{
		this->health += amount;
		this->energy--;
		std::cout << "Claptrap " << this->name << " has been regen " << amount << " hp, total=" << this->health << std::endl;
	}
}

// getter
std::string	ClapTrap::getName(void) const
{
	return (this->name);
}

int			ClapTrap::getDamage(void) const
{
	return (this->damage);
}

int			ClapTrap::getEnergy(void) const
{
	return (this->energy);
}

int			ClapTrap::getHealth(void) const
{
	return (this->health);
}

void		ClapTrap::printInfo(void)
{
	std::cout << "-----------------" << std::endl;
	std::cout << "name   : " << this->getName() << std::endl;
	std::cout << "hp     : " << this->getHealth() << std::endl;
	std::cout << "attack : " << this->getDamage() << std::endl;
	std::cout << "energy : " << this->getEnergy() << std::endl;
	std::cout << "-----------------" << std::endl;
}

// canon
ClapTrap::ClapTrap()
{
	std::cout << "Default ClapTrap Constructor called" << std::endl;
	this->name = "default";
	this->damage = 0;
	this->energy = 10;
	this->health = 10;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap Constructor called : " << name << std::endl;
	this->name = name;
	this->damage = 0;
	this->energy = 10;
	this->health = 10;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &a)
{
	std::cout << "ClapTrap '=' operator called" << std::endl;
	this->name = a.getName();
	this->health = a.getHealth();
	this->energy = a.getEnergy();
	this->damage = a.getDamage();
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called : " << this->getName() << std::endl;
}