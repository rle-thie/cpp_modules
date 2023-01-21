#include "Dog.hpp"
#include "Animal.hpp"

void	Dog::makeSound() const
{
	std::cout << "Dog : waf waf waf waff" << std::endl;
}

// -----------------------------------------

void	Dog::setIdeas(int i, std::string str)
{
	_brain->setIdeas(i, str);
}

std::string	Dog::getIdeas(int i) const
{
	return _brain->getIdeas(i);
}

// -----------------------------------------

Dog::Dog() : Animal()
{
	this->_type = "dog";
	std::cout << "Dog Default constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(Dog const &src) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	_brain = NULL;
	*this = src;
}

Dog	&Dog::operator=(Dog const &a)
{
	std::cout << "Dog operator '=' called" << std::endl;
	this->_type = a.getType();
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain(*a._brain);
	return *this;
}

Dog::~Dog()
{
	if (this->_brain)
		delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}