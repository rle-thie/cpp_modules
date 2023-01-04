#ifndef __WEAPON__
	#define __WEAPON__

	#include <iostream>

	class Weapon
	{
		private :
			std::string type;

		public :
			Weapon();
			~Weapon();

			const std::string	GetType();
			void		SetType(std::string str);
	};

#endif