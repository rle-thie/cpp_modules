#include "phonebook.hpp"

int	main(void)
{
	Phonebook book;
	bool	run = true;
	std::string line;

	// book.test_fill_all();
	while (run == true)
	{
		book.get_all_contact();
		std::cout << "choix: ";
		std::getline(std::cin, line);
		if (line == "add")
		{
			std::cout << "add" << std::endl;
			book.add_contact();
		}
		else if (line == "search")
		{
			std::cout << "search" << std::endl;
			book.get_all_contact();
		}
		else if (line == "exit")
		{
			std::cout << "FIN DU BUZZ" << std::endl;
			run = false;
		}
		else
			std::cout << "non" << std::endl;
	}
	return (0);
}