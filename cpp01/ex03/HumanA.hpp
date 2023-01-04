#ifndef __HUMANA__
	#define __HUMANA__

	#include "Weapon.hpp"

	class HumanA
	{
		private :
			Weapon		weapon;
			std::string	name;

		public :
			HunanA(Weapon weapon);
			~HunanA();

			const std::string	GetName();
			void				SetName(std::string str);
			void				attack(void);
			// void		SetType(std::string str);
	};

#endif