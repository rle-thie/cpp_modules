#include "phonebook.hpp"

// phonebook
Phonebook::Phonebook()
{
	std::cout << "creation: phonebook" << std::endl;
	this->len = 0;
}

Phonebook::~Phonebook()
{
	std::cout << "destruction: phonebook" << std::endl;
}

std::string	Phonebook::tronque(std::string str)
{
	std::string tab;

	tab = str;
	if (str.length() <= 10)
	{
		if (str.length() == 10)
			return (str);
		tab.resize(10, ' ');
		return(tab);
	}
	tab.resize(9);
	tab.push_back('.');
	return (tab);
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

	// while (i < 8)
	std::cout << "+================== CONTACT ===============+" << std::endl;
	while (i < this->len)
	{
		std::cout << "| " << i + 1 << " | " << this->tronque(this->book[i].getfirstname()) << " | " << this->tronque(this->book[i].getlastname()) << " | " << this->tronque(this->book[i].getnickname()) << " |" << std::endl;
		i++;
	}
	std::cout << "+==========================================+" << std::endl;
}

void	Phonebook::print_contact(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	if (i != 1)
	{
		std::cout << "Phonebook: contact '" << str << "' not found" << std::endl;
		return ;
	}
	i = atoi(str);
	if ((i < 1 || i > 8 ) || this->len < i)
	{
		std::cout << "Phonebook: contact '" << i << "' not found" << std::endl;
		return ;
	}
	// std::cout << "+============================= CONTACT ==========================+" << std::endl;
	// std::cout << "| " << this->tronque(this->book[i - 1].getfirstname()) << " | " << this->tronque(this->book[i - 1].getlastname()) << " | " << this->tronque(this->book[i - 1].getnickname()) << " | " << this->tronque(this->book[i - 1].getphonenumber()) << " | " << this->tronque(this->book[i - 1].getsecret()) << " |" << std::endl;
	// std::cout << "+================================================================+" << std::endl;
	std::cout << "First name :   " << this->book[i - 1].getfirstname() << std::endl;
	std::cout << "Last name :    " << this->book[i - 1].getlastname() << std::endl;
	std::cout << "Nickname :     " << this->book[i - 1].getnickname() << std::endl;
	std::cout << "Phone number : " << this->book[i - 1].getphonenumber() << std::endl;
	std::cout << "Secret :       " << this->book[i - 1].getsecret() << std::endl;
}

// test
// void	Phonebook::test_fill_all()
// {
// 	int	i = 0;
// 	while (i < 8)
// 	{
// 		this->book[i].setfirstname(std::to_string(i));
// 		i++;
// 	}
// }