#include "phonebook.hpp"

// phonebook
Phonebook::Phonebook()
{
	std::cout << "creation: phonebook" << std::endl;
	this->len = 8;
}

Phonebook::~Phonebook()
{
	std::cout << "destruction: phonebook" << std::endl;
}

void Phonebook::add_contact()
{
	if (len == 8)
	{
		for (int i = 6; i >= 0; i--)
		{
			book[i+1] = book[i];
		}
		book[0].setcontact();
	}
	else
	{
		this->book[this->len].setcontact();
		len++;
	}
}

void Phonebook::get_all_contact()
{
	int i = 0;

	// while (i < this->len)
	std::cout << std::endl;
	while (i < 8)
	{
		std::cout << this->book[i].getfirstname() << std::endl;
		i++;
	}
	std::cout << std::endl;
}

void	Phonebook::test_fill_all()
{
	int	i = 0;
	while (i < 8)
	{
		this->book[i].setfirstname(std::to_string(i));
		i++;
	}
}