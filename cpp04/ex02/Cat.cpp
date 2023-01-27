#include "Cat.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"

void	Cat::makeSound() const
{
	std::cout << "Cat : mew mew mew meeew" << std::endl;
}

// --------------------------------------

void	Cat::setIdeas(int i, std::string str)
{
	_brain->setIdeas(i, str);
}

std::string	Cat::getIdeas(int i) const
{
	return _brain->getIdeas(i);
}

// --------------------------------------

Cat::Cat() : AAnimal()
{
	std::cout << "Cat Default constructor called" << std::endl;
	this->_type = "cat";
	_brain = new Brain();
}

Cat::Cat(Cat const &src) : AAnimal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	_brain = NULL;
	*this = src;
}

Cat	&Cat::operator=(Cat const &a)
{
	std::cout << "Cat operator '=' called" << std::endl;
	this->_type = a.getType();
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain(*a._brain);
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	if (this->_brain)
		delete this->_brain;
}