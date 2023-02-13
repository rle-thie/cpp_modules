#include <iostream>
#include <fstream>
#include <string>

int	ft_error(std::string str)
{
	std::cout << str << std::endl;
	return (0);
}

int main(int ac, char **av)
{
	if (ac != 4)
		return (ft_error("error, wrong arguments"));

	std::string		buff;
	std::string		to_find = av[2];
	std::string		to_replace = av[3];
	size_t			pos;
	std::string		output_name = av[1];

	output_name += ".replace";
	std::ifstream input_file(av[1]);
	if (!input_file)
		return (ft_error("error, can't open file"));
	if (to_find == "")
		return (ft_error("error fatal"));
	std::ofstream	output_file(output_name.c_str());

	while(std::getline(input_file, buff))
	{
		pos = buff.find(to_find);
		while (pos != std::string::npos)
		{
			buff.erase(pos, to_find.size());
			buff.insert(pos, to_replace);
			pos = buff.find(to_find, pos + to_replace.size());
		}
		output_file << buff << std::endl;
	}
	input_file.close();
	output_file.close();

	return (0);
}