#include "Animal.hpp"

void	Animal::makeSound() const
{
	std::cout << "animal normal" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

Animal::Animal()
{
	this->_type = "NULL";
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(Animal const &src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal	&Animal::operator=(Animal const &a)
{
	std::cout << "Animal '=' operator called" << std::endl;
	this->_type = a.getType();
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}