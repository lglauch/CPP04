#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(const Cure &old) : AMateria(old)
{
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure& Cure::operator=(const Cure &old)
{
	if (this != &old)
	{
		this->type = old.type;
	}
	std::cout << "Cure assignment operator called" << std::endl;
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

void Cure::use(ICharacter& target) const
{
	std::cout << "Cure: * heals "<< target << " wounds *" << std::endl;
}

Cure* Cure::clone() const
{
	return new Cure(*this);
}