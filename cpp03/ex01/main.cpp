#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	{
		std::cout << std::endl << "=========== CLAPTRAP ===========" << std::endl << std::endl;
		std::cout << "==== Constructor ====" << std::endl;
		ClapTrap Louis;
		ClapTrap Ugo("Ugo");
		ClapTrap Julien = Ugo;

		std::cout << std::endl << "==== Attack ====" << std::endl;
		Louis.attack("Arthur");
		Ugo.attack("Arthur");
		Julien.attack("Arthur");

		std::cout << std::endl << "==== Take damage ====" << std::endl;
		Ugo.takeDamage(12);
		Ugo.takeDamage(12);
		Louis.takeDamage(1);
		Louis.takeDamage(0);

		std::cout << std::endl << "==== Be repaired ====" << std::endl;
		Ugo.beRepaired(50);
		Louis.beRepaired(1);
		Julien.beRepaired(0);
		std::cout << std::endl << "==== Destructors ====" << std::endl;
	}
	{
		std::cout << std::endl << "=========== SCAVTRAP ===========" << std::endl << std::endl;
		std::cout << "==== Constructor ====" << std::endl;
		ScavTrap Louis;
		ScavTrap Ugo("Ugo");
		ScavTrap Julien = Ugo;

		std::cout << std::endl << "==== Attack ====" << std::endl;
		Louis.attack("Arthur");
		Ugo.attack("Arthur");
		Julien.attack("Arthur");

		std::cout << std::endl << "==== Take damage ====" << std::endl;
		Ugo.takeDamage(12);
		Ugo.takeDamage(12);
		Louis.takeDamage(1);
		Louis.takeDamage(0);

		std::cout << std::endl << "==== Be repaired ====" << std::endl;
		Ugo.beRepaired(50);
		Louis.beRepaired(1);
		Julien.beRepaired(0);

		std::cout << std::endl << "==== Gate keeper function ====" << std::endl;
		Julien.guardGate();
		Louis.guardGate();
		std::cout << std::endl << "==== Destructors ====" << std::endl;
	}
}