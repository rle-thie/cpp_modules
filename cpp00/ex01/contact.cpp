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
	if (line.length() == 0)
		this->first_name = "NULL      ";

	std::cout << "last name: " << std::endl;
	std::getline(std::cin, line);
	this->last_name = line;
	if (line.length() == 0)
		this->last_name = "NULL      ";

	std::cout << "nickname: " << std::endl;
	std::getline(std::cin, line);
	this->nickname = line;
	if (line.length() == 0)
		this->nickname = "NULL      ";

	std::cout << "phone_number: " << std::endl;
	std::getline(std::cin, line);
	this->phone_number = line;
	if (line.length() == 0)
		this->phone_number = "NULL      ";

	std::cout << "secret: " << std::endl;
	std::getline(std::cin, line);
	this->secret = line;
	if (line.length() == 0)
		this->secret = "NULL      ";
}

// setter
void Contact::setfirstname(std::string str)
{
	this->first_name = str;
}

// getter
std::string	Contact::getfirstname()
{
	return (this->first_name);
}

std::string	Contact::getlastname()
{
	return (this->last_name);
}

std::string	Contact::getnickname()
{
	return (this->nickname);
}

std::string	Contact::getphonenumber()
{
	return (this->phone_number);
}

std::string	Contact::getsecret()
{
	return (this->secret);
}