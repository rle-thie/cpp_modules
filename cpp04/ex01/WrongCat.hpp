#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat const &src);
		WrongCat	&operator=(WrongCat const &a);
		~WrongCat();

		void	makeSound(void) const;

};

#endif
