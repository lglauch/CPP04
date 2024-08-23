#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; i++)
		inv[i] = nullptr;
	std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &old)
{
	for (int i = 0; i < 4; i++)
		inv[i] = old.inv[i]->clone();
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &old)
{
	if (this != &old)
	{
		for (int i = 0; i < 4; i++)
		{
			if (inv[i])
				delete inv[i];
			if (old.inv[i] != nullptr)
				inv[i] = old.inv[i]->clone();
			else
				inv[i] = nullptr;
		}
	}
	std::cout << "MateriaSource assignment operator called" << std::endl;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (inv[i])
			delete inv[i];
	std::cout << "MateriaSource destructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (m == nullptr)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (inv[i] == nullptr)
		{
			inv[i] = m->clone();
			return;
		}
	}
	std::cout << "Inventory full!" << std::endl;
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (type == "ice")
		return (new Ice());
	else if (type == "cure")
		return (new Cure());
	else
	{
		std::cout << "Type doesnt match [ice or cure]" << std::endl;
		return (0);
	}
}