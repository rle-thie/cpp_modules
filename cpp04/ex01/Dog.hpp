#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Dog : public Animal
{
	private:

		Brain	*_brain;
	public:
		Dog();
		Dog(Dog const &src);
		Dog	&operator=(Dog const &a);
		virtual ~Dog();

		virtual void		makeSound(void) const;
		virtual void		setIdeas(int i, std::string str);
		virtual std::string	getIdeas(int i) const;

};

#endif
