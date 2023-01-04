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

		std::string	GetName();
		void		SetName(std::string str);
		void		announce();
};

Zombie	*newZombie(std::string str);
void	randomChump(std::string str);

#endif