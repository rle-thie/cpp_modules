#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }

int	main(void)
{
	std::cout << "---- Create default Array & try to read invalid index ----" << std::endl;
	Array<int> a;
	try
	{
		std::cout << a[1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "---- Create Array of size 10 & add values ----" << std::endl;
	Array<int>	b(10);
	for (size_t i = 0; i < 10; i++)
		b[i] = i;
	try
	{
		std::cout << "Read b[1] : " << b[1] << std::endl;
		std::cout << "Read b[9] : " << b[9] << std::endl;
		std::cout << "Read b[10] : " << b[10] << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "---- Test copy constructor ----" << std::endl;
	Array<int>	c(b);
	std::cout << "Array of c" << std::endl;
	for (size_t i = 0; i < 10; i++)
		std::cout << "c[i] = " << c[i] << std::endl;
	std::cout << "Modify value of c" << std::endl;
	for (size_t i = 0; i < 10; i++)
		c[i] = i + 1000;
	std::cout << "Array of c" << std::endl;
	for (size_t i = 0; i < 10; i++)
		std::cout << "c[i] = " << c[i] << std::endl;
	std::cout << "Array of b" << std::endl;
	for (size_t i = 0; i < 10; i++)
		std::cout << "b[i] = " << b[i] << std::endl;

	std::cout << std::endl;
	return 0;
}