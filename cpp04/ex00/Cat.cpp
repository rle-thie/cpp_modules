#include "Cat.hpp"
#include "Animal.hpp"

void	Cat::makeSound() const
{
	std::cout << "Cat : mew mew mew meeew" << std::endl;
}

Cat::Cat() : Animal()
{
	this->_type = "cat";
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(Cat const &src) : Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat	&Cat::operator=(Cat const &a)
{
	std::cout << "Cat '=' operator called" << std::endl;
	this->_type = a.getType();
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}