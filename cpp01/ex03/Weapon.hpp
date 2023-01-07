#ifndef __WEAPON__
	#define __WEAPON__

	#include <iostream>

	class Weapon
	{
		private :
			std::string type;

		public :
			Weapon(std::string name);
			// Weapon();
			~Weapon();

			const std::string			&GetType();
			void				setType(std::string new_name);
	};

#endif