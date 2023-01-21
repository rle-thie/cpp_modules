#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Cat : public Animal
{
	private:

		Brain	*_brain;
	public:
		Cat();
		Cat(Cat const &src);
		virtual ~Cat();

		Cat	&operator=(Cat const &a);

		virtual void			makeSound(void) const;
		virtual void			setIdeas(int i, std::string str);
		virtual std::string		getIdeas(int i) const;


};

#endif
