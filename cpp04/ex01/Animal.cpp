#include "Animal.hpp"

void	Animal::makeSound() const
{
	std::cout << "animal normal" << std::endl;
}

// --------------------------------------------

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void			Animal::setIdeas(int i, std::string str)
{
	(void)i;
	(void)str;
}

std::string		Animal::getIdeas(int i) const
{
	(void)i;
	return "Coucou";
}

// --------------------------------------------

Animal::Animal()
{
	this->_type = "animal";
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