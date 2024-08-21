#include "Cat.hpp"

Cat::Cat()
{
	this->idea = new Brain;
	this->type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &old)
{
	type = old.type;
	idea = new Brain;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &old)
{
	if (this != &old)
	{
		this->type = old.type;
		delete idea;
		idea = new Brain(*old.idea);
	}
	std::cout << "Cat assignment operator called" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	delete idea;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Weird Cat noise" << std::endl;
}

std::string Cat::getIdea(unsigned int nb)
{
	return(idea->getIdea(nb));
}