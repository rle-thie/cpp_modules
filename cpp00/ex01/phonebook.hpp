#ifndef __PHONEBOOK__
	#define __PHONEBOOK__

	#include <iostream>

	#include <stdio.h>
	#include <stdlib.h>

	class Contact
	{
		private :
			std::string	first_name;
			std::string	last_name;
			std::string	nickname;
			std::string	phone_number;
			std::string	secret;
		public :
			Contact();
			~Contact();

		// set
		void setcontact();
		void setfirstname(std::string str);

		// get
		std::string getfirstname();
	};

	class Phonebook
	{
		private:
			Contact book[8];
			int	len;
		public:
			Phonebook();
			~Phonebook();
		
		void add_contact();
		void get_all_contact();
		
		// test
		void test_fill_all();
		// void Phonebook::get_contact(int n);
	};

#endif