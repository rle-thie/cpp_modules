#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap
{

	// using ClapTrap::ClapTrap; pas possible sous cpp98

	public :
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap();

		void	guarGate();
};

#endif