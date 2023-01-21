#include "Brain.hpp"

void	Brain::setIdeas(int i, std::string str)
{
	if (i < 100 && i >= 0)
		_ideas[i] = str;
}

std::string	Brain::getIdeas(int i) const
{
	if (i < 100 && i >= 0)
		return this->_ideas[i];
	return "";
}

Brain::Brain()
{
	std::cout << "Brain Default constructor called....." << std::endl;
	this->setIdeas(0, "test 0");
	this->setIdeas(1, "test 1");
	this->setIdeas(2, "test 2");
	this->setIdeas(3, "test 3");
}

Brain::Brain(Brain const &src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain	&Brain::operator=(Brain const &a)
{
	std::cout << "Brain '=' operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = a._ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}