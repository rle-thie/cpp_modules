#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	int n = 4;
	std::cout << "---- ANIMALS ----" << std::endl;
	AAnimal* meta[n];
	for (int i = 0; i < n; i++)
	{
		if (i < 2)
			meta[i] = new Dog();
		else
			meta[i] = new Cat();
	}
	std::cout << std::endl << std::endl;
	std::cout << "---- Print Ideas ----" << std::endl;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < 5; j++)
			std::cout << "Meta " << i << " : " << meta[i]->getIdeas(j) << std::endl;

	std::cout << std::endl << std::endl;
	std::cout << "---- Modify ideas ----" << std::endl;
	meta[1]->setIdeas(0, "coucou");
	meta[1]->setIdeas(1, "coucou les loulous");
	meta[1]->setIdeas(2, "coucou les lalas");
	for (int i = 0; i < 5; i++)
		std::cout << "Meta " << 1 << " : " << meta[1]->getIdeas(i) << std::endl;

	std::cout << std::endl << std::endl;
	std::cout << "---- Test deep copy Dog ----" << std::endl;
	Dog dog1;
	Dog dog2(dog1);
	dog1.setIdeas(0, "salut");
	dog1.setIdeas(1, "ca va");
	dog1.setIdeas(2, "ouiii");
	for (int i = 0; i < 4; i++)
		std::cout << "Dog 1" << " : " << dog1.getIdeas(i) << std::endl;
	for (int i = 0; i < 4; i++)
		std::cout << "Dog 2" << " : " << dog2.getIdeas(i) << std::endl;

	std::cout << std::endl << std::endl;
	std::cout << "---- Test deep copy Cat ----" << std::endl;
	Cat cat1;
	Cat cat2(cat1);
	cat1.setIdeas(0, "salut");
	cat1.setIdeas(1, "ca va");
	cat1.setIdeas(2, "ouiii");
	for (int i = 0; i < 4; i++)
		std::cout << "Cat 1" << " : " << cat1.getIdeas(i) << std::endl;
	for (int i = 0; i < 4; i++)
		std::cout << "Cat 2" << " : " << cat2.getIdeas(i) << std::endl;

	std::cout << std::endl << std::endl;
	for (int i = 0; i < n; i++)
		delete meta[i];






	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// std::cout << "--" << std::endl;

	// delete j;//should not create a leak
	// delete i;

	// std::cout << "-----------" << std::endl;

	// Animal	*a[20];
	// for (int i = 0; i < 20; i++)
	// {
	// 	if (i < 10)
	// 		a[i] = new Dog();
	// 	else
	// 		a[i] = new Cat();
	// }
	// for (int i = 0; i < 20; i++)
	// {
	// 	a[i]->getIdeas(i);
	// }
	
	
	

	return 0;

}