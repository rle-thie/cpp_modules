#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	Base *base;

	srand(time(NULL));
	int n = rand() % 3;
	if (n == 1)
		base = new A();
	else if (n == 2)
		base = new B();
	else
		base = new C();
	return base;
}

void	identify(Base *baseP)
{
	std::cout << "find with pointer" << std::endl;
	A *a = dynamic_cast<A *>(baseP);
	B *b = dynamic_cast<B *>(baseP);
	C *c = dynamic_cast<C *>(baseP);
	if (a == NULL)
		std::cout << "Conversion to A class NOT OK" << std::endl;
	else
		std::cout << "Base is a A class type" << std::endl;
	if (b == NULL)
		std::cout << "Conversion to B class NOT OK" << std::endl;
	else
		std::cout << "Base is a B class type" << std::endl;
	if (c == NULL)
		std::cout << "Conversion to C class NOT OK" << std::endl;
	else
		std::cout << "Base is a C class type" << std::endl;
}

void	identify(Base &baseR)
{
	std::cout << "find with reference" << std::endl;
	try
	{
		A &a = dynamic_cast<A&>(baseR);
		std::cout << "Base is a A class type" << std::endl;
		static_cast<void>(a);
	}
	catch(...)
	{
		std::cerr << "Coversion to A class NOT OK" << std::endl;
	}
	try
	{
		B &b = dynamic_cast<B&>(baseR);
		std::cout << "Base is a B class type" << std::endl;
		static_cast<void>(b);
	}
	catch(...)
	{
		std::cerr << "Coversion to B class NOT OK" << std::endl;
	}
	try
	{
		C &c = dynamic_cast<C&>(baseR);
		std::cout << "Base is a C class type" << std::endl;
		static_cast<void>(c);
	}
	catch(...)
	{
		std::cerr << "Coversion to C class NOT OK" << std::endl;
	}
}
 
int	main(void)
{
	Base *base = generate();
	std::cout << "\n--------------------\n" << std::endl;
	identify(base);
	std::cout << "\n--------------------\n" << std::endl;
	identify(*base);
	std::cout << "\n--------------------\n" << std::endl;
	delete base;
	return (0);
}