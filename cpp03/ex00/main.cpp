#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap j;
	ClapTrap k("Tom");

	j.attack("caca");
	j.beRepaired(40);
	j.takeDamage(40);
	j.takeDamage(40);
	j.beRepaired(60);

	k.beRepaired(10);
	k.beRepaired(10);
	k.beRepaired(10);
	k.beRepaired(10);
	k.beRepaired(10);
	k.beRepaired(10);
	k.beRepaired(10);
	k.beRepaired(10);
	k.beRepaired(10);
	k.beRepaired(10);
	k.beRepaired(10);
	return (0);
}