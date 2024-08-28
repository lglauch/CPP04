#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* w_cat = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << w_cat->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	w_cat->makeSound();

	delete meta;
	delete j;
	delete i;
	delete w_cat;
	return 0;
}