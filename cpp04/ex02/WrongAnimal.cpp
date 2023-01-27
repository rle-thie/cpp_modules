#include "WrongAnimal.hpp"

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal normal" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

WrongAnimal::WrongAnimal()
{
	this->_type = "not an animal";
	std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &a)
{
	std::cout << "WrongAnimal '=' operator called" << std::endl;
	this->_type = a.getType();
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}