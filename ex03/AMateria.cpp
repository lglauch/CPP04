#include "AMateria.hpp"

AMateria::AMateria()
{
	type = "no type";
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(const std::string &newtype)
{
	type = newtype;
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &old)
{
	type = old.type;
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria &old)
{
	if (this != &old)
	{
		this->type = old.type;
	}
	std::cout << "AMateria assignment operator called" << std::endl;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

std::string const &AMateria::getType() const
{
	return (this->type);
}