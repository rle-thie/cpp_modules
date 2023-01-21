#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string	_type;

	public:
		Animal();
		Animal(Animal const &src);
		Animal	&operator=(Animal const &a);
		virtual ~Animal();

		std::string	getType(void) const;
		virtual void	makeSound(void) const;

};

#endif
