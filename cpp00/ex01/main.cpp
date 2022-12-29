#include "phonebook.hpp"

int	main(void)
{
	Phonebook book;
	bool	run = true;
	std::string line;

	// book.test_fill_all();
	while (run == true)
	{
		std::cout << "Phonebook: ";
		std::getline(std::cin, line);
		if (line == "ADD")
		{
			book.add_contact();
		}
		else if (line == "SEARCH")
		{
			char	*s;

			book.get_all_contact();
			std::cout << "enter contact number: " << std::endl;
			std::getline(std::cin, line);
			s = &line[0];
			// std::cout << s << std::endl;
			book.print_contact(s);
		}
		else if (line == "EXIT")
		{
			// std::cout << "FIN DU BUZZ" << std::endl;
			run = false;
		}
		else
			std::cout << "Phonebook: command not found" << std::endl;
	}
	return (0);
}