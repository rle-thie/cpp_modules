#ifndef __HUMANA__
	#define __HUMANA__

	#include "Weapon.hpp"
	#include <string>

	// class HumanA
	// {
	// 	private :
	// 		Weapon		&weapon;
	// 		std::string	name;

	// 	public :
	// 		// HumanA();
	// 		HumanA(std::string name, Weapon &arme);
	// 		~HumanA();

	// 		void	attack();
	// 		// void		SetType(std::string str);
	// };
class HumanA
{
	private:
		std::string	_name;
		Weapon	&_weapon;

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack();
};

#endif