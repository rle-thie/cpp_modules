#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const &src);
		Dog	&operator=(Dog const &a);
		virtual ~Dog();

		virtual void	makeSound(void) const;

};

#endif
