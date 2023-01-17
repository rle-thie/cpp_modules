#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public ScavTrap
{

	// using ClapTrap::ClapTrap; pas possible sous cpp98

	public :
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &src);
		~FragTrap();

		void	highFiveGuys(void);
};

#endif