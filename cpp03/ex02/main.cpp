#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap	c("CLAP");
	ScavTrap	s("SCAV");
	FragTrap	f("FRAG");

	c.printInfo();
	s.printInfo();
	f.printInfo();

	
	c.attack("enemy1");
	c.takeDamage(3);
	c.printInfo();
	c.beRepaired(100);
	c.printInfo();
	c.beRepaired(1);
	c.beRepaired(1);
	c.beRepaired(1);
	c.beRepaired(1);
	c.beRepaired(1);
	c.beRepaired(1);
	c.beRepaired(1);
	c.printInfo();
	c.beRepaired(1);
	c.beRepaired(1);
	c.printInfo();
}