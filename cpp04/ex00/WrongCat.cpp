#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

void	WrongCat::makeSound() const
{
	std::cout << "Cat : not mew not mew not mew not meeew" << std::endl;
}

WrongCat::WrongCat() : WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << "Cat Default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

WrongCat	&WrongCat::operator=(WrongCat const &a)
{
	std::cout << "WrongCat '=' operator called" << std::endl;
	this->_type = a.getType();
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}