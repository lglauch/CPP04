#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &old);
		Dog& operator=(const Dog &old);
		~Dog();

		void makeSound() const;
};


#endif