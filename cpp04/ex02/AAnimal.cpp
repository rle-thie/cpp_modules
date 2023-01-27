#include "AAnimal.hpp"

void	AAnimal::makeSound() const
{
	std::cout << "animal normal" << std::endl;
}

// --------------------------------------------

std::string	AAnimal::getType(void) const
{
	return (this->_type);
}

void			AAnimal::setIdeas(int i, std::string str)
{
	(void)i;
	(void)str;
}

std::string		AAnimal::getIdeas(int i) const
{
	(void)i;
	return "Coucou";
}

// --------------------------------------------

AAnimal::AAnimal()
{
	this->_type = "animal";
	std::cout << "Animal Default constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

AAnimal	&AAnimal::operator=(AAnimal const &a)
{
	std::cout << "Animal '=' operator called" << std::endl;
	this->_type = a.getType();
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal destructor called" << std::endl;
}