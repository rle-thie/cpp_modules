#ifndef __ZOMBIE__
	#define __ZOMBIE__

#include <iostream>

class Zombie
{
	private :
		std::string name;

	public :
		Zombie();
		~Zombie();
		Zombie	*newZombie(std::string str);
		void	randomChump(std::string str);

		std::string	GetName();
		void		SetName(std::string str);
		void		announce();
};

#endif