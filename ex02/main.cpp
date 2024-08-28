#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal* animals[100];
	// Animal test;

	for(int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for(int i = 0; i < 100; i++)
	{
		animals[i]->makeSound();
	}
	for(int i = 0; i < 100; i++)
		delete animals[i];

	std::cout << "-------------Deep Copy--------------" << std::endl;
	Dog *basic = new Dog();
	Dog *tmp = new Dog(*basic);
	// Dog* basic = new Dog();
	// Dog* tmp = new Dog();
	// *tmp = *basic;
	std::cout << "---------------------------" << std::endl;
	basic->makeSound();
	std::cout << "---------------------------" << std::endl;
	delete basic;
	std::cout << "---------------------------" << std::endl;
	tmp->makeSound();
	std::cout << "---------------------------" << std::endl;
	delete tmp;
	return 0;
}