#ifndef __HUMANB__
	#define __HUMANB__

	#include "Weapon.hpp"

	class HumanB
	{
		private :
			Weapon		*weapon;
			std::string	name;

		public :
			HumanB(std::string name);
			~HumanB();

			void	attack();
			void	setWeapon(Weapon &weapon);
			// void		SetType(std::string str);
	};


#endif