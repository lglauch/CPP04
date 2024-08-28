#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
	protected:
		std::string type;

	public:
	Animal();
	Animal(const Animal &old);
	Animal& operator=(const Animal &old);
	virtual ~Animal();

	virtual void makeSound() const = 0;
	std::string getType() const;
};

#endif