#include "HumanA.hpp"

// HumanA::HumanA()
// {
// 	// this->weapon = NULL;
// }

// HumanA::HumanA(std::string name, Weapon &weapon) : this->name(name), this->weapon(weapon)
// {
// 	// this->name = name;
// 	// this->weapon = weapon;
// }

// HumanA::~HumanA()
// {
// }

// void	HumanA::attack()
// {
// 	std::cout << this->name << " attacks with their " << this->weapon.GetType() << std::endl;
// }

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon.GetType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
	std::cout << "Human A " << _name << " is destroyed" << std::endl;
}