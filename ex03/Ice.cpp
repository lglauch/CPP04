#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(const Ice &old) : AMateria(old)
{
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice& Ice::operator=(const Ice &old)
{
	if (this != &old)
	{
		this->type = old.type;
	}
	std::cout << "Ice assignment operator called" << std::endl;
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}
Ice* Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter& target) const
{
	std::cout << "Ice: * shoots an ice bolt at "<< target << std::endl;
}