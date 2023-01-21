#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const &src);
		Cat	&operator=(Cat const &a);
		virtual ~Cat();

		virtual void	makeSound(void) const;

};

#endif
