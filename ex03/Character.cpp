#include "Character.hpp"

Character::Character()
{
	_name = "Peter Kauker";
	for(int i = 0; i < 4; i++)
		inv[i] = nullptr;
	for(int i = 0; i < 100; i++)
		floor[i] = nullptr;
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(const std::string &name)
{
	_name = name;
	for(int i = 0; i < 4; i++)
		inv[i] = nullptr;
	for(int i = 0; i < 100; i++)
		floor[i] = nullptr;
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(const Character &old)
{
	_name = old._name;
	for (int i = 0; i < 4; i++)
	{
		if (old.inv[i] != nullptr)
			inv[i] = old.inv[i]->clone();
		else
			inv[i] = nullptr;
	}
	for(int i = 0; i < 100; i++)
		floor[i] = nullptr;
	std::cout << "Character copy constructor called" << std::endl;
}

Character& Character::operator=(const Character &old)
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
		for(int i = 0; i < 100; i++)
			floor[i] = nullptr;
	}
	std::cout << "Character assignment operator called" << std::endl;
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (inv[i] != nullptr)
			delete inv[i];
		inv[i] = nullptr;
	}
	for (int j = 0; j < 100; j++)
	{
		if (floor[j] != nullptr)
			delete floor[j];
		floor[j] = nullptr;
	}
	std::cout << "Character destructor called" << std::endl;
}

std::string const &Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	if (!m) return;

	for (int i = 0; i < 4; i++)
	{
		if (inv[i] == m)
		{
			std::cout << "The item is already in the inv" << std::endl;
			return ;
		}
		if (inv[i] == nullptr)
		{
			inv[i] = m;
			return ;
		}
	}
	delete m;
	std::cout << "Inventory full!" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		if (inv[idx] != nullptr)
		{
			for (int i = 0; i < 100; i++)
			{
				if (floor[i] == nullptr)
				{
					floor[i] = inv[idx];
					break;
				}
			}
			inv[idx] = nullptr;
			std::cout << "Inventory slot " << idx << " cleared!" << std::endl;
		}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3)
		if (inv[idx] != nullptr)
		{
			inv[idx]->use(target);
		}
}