#ifndef __HUMANB__
	#define __HUMANB__

	#include "Weapon.hpp"

	class HumanB
	{
		private :
			Weapon		weapon;
			std::string	name;

		public :
			HunanB();
			~HunanB();

			const std::string	GetName();
			void				SetName(std::string str);
			void				attack(void);
			// void		SetType(std::string str);
	};


#endif