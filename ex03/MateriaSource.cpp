#include "MateriaSource.hpp"

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
	std::cout << "MateriaSource destructor called" << std::endl;
}