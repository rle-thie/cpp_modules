#include "Dog.hpp"
#include "Animal.hpp"

void	Dog::makeSound() const
{
	std::cout << "Dog : waf waf waf waff" << std::endl;
}

Dog::Dog() : Animal()
{
	this->_type = "dog";
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(Dog const &src) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog	&Dog::operator=(Dog const &a)
{
	std::cout << "Dog '=' operator called" << std::endl;
	this->_type = a.getType();
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}