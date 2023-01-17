#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
		std::string	name;
		int			health;
		int			energy;
		int			damage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		~ClapTrap();
		ClapTrap	&operator=(ClapTrap const &a);

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string	getName(void) const;
		int			getDamage(void) const;
		int			getEnergy(void) const;
		int			getHealth(void) const;
		void		printInfo(void);

};

#endif