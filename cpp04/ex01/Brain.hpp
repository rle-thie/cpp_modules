#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	private:
		std::string _ideas[100];

	public:
		Brain();
		Brain(Brain const &src);
		Brain	&operator=(Brain const &a);
		virtual ~Brain();

		void		setIdeas(int i, std::string str);
		std::string	getIdeas(int i) const;
};

#endif
