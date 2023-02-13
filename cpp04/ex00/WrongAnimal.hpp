#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string	_type;

	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &src);
		WrongAnimal	&operator=(WrongAnimal const &a);
		~WrongAnimal();

		std::string	getType(void) const;
		void	makeSound(void) const;

};

#endif
