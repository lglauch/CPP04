#include "Dog.hpp"

Dog::Dog()
{
	this->idea = new Brain;
	this->type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &old) : Animal(old)
{
	type = old.type;
	idea = new Brain(*old.idea);
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &old)
{
	if (this != &old)
	{
		this->type = old.type;
		delete idea;
		idea = new Brain(*old.idea);
	}
	std::cout << "Dog assignment operator called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete idea;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Weird Dog noise" << std::endl;
}
