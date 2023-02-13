#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
	protected:
		std::string	_type;

	public:
		AAnimal();
		AAnimal(AAnimal const &src);
		AAnimal	&operator=(AAnimal const &a);
		virtual ~AAnimal();

		std::string				getType(void) const;
		virtual void			makeSound(void) const = 0;
		virtual void			setIdeas(int i, std::string str);
		virtual std::string		getIdeas(int i) const;

};

#endif
