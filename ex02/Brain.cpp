#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &old)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = old.ideas[i];
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain &old)
{
	if (this != &old)
	{
		for (int i = 0; i < 100; i++)
		ideas[i] = old.ideas[i];
	}
	std::cout << "Brain assignment operator called" << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::getIdea(unsigned int nb)
{
	if (nb <= 99)
		return(this->ideas[nb]);
	return("Wrong index[0-99]");
}