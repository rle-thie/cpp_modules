#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap j;
	ClapTrap k("Tom");

	j.attack("robin");
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


	std::cout << std::endl << "==================================" << std::endl;

	ClapTrap c1;
	ClapTrap c2("c2");
	ClapTrap c3 = c2;

	c1.attack("Robin");
	c2.attack("Robin");
	c3.attack("Robin");

	c2.takeDamage(12);
	c2.takeDamage(12);
	c1.takeDamage(1);
	c1.takeDamage(0);

	c2.beRepaired(50);
	c1.beRepaired(1);
	c3.beRepaired(0);
	std::cout << std::endl;
	return (0);
}