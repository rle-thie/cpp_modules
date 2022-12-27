#include "phonebook.hpp"

Contact::Contact()
{
	
	this->first_name = "(NULL)";
	// this->first_name = "qdqfqfsdgsg";
	// this->last_name = NULL;
	// this->nickname = NULL;
	// this->phone_number = NULL;
	// this->secret = NULL;
	std::cout << "construction: contact." << std::endl;
}

Contact::~Contact()
{
	std::cout << "destruction: contact." << std::endl;
}

void Contact::setcontact()
{
	std::string	line;

	std::cout << "first name: " << std::endl;
	std::getline(std::cin, line);
	this->first_name = line;

	// std::cout << "last name: " << std::endl;
	// std::getline(std::cin, line);
	// this->last_name = line;

	// std::cout << "nickname: " << std::endl;
	// std::getline(std::cin, line);
	// this->nickname = line;

	// std::cout << "phone_number: " << std::endl;
	// std::getline(std::cin, line);
	// this->phone_number = line;

	// std::cout << "secret: " << std::endl;
	// std::getline(std::cin, line);
	// this->secret = line;
}

void Contact::setfirstname(std::string str)
{
	this->first_name = str;
	// std::cout << "first_name: " << this->first_name << std::endl;
}

std::string	Contact::getfirstname()
{
	// std::cout << "first name: " << this->first_name << std::endl;
	return (this->first_name);
}