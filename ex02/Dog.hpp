#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* idea;
	public:
		Dog();
		Dog(const Dog &old);
		Dog& operator=(const Dog &old);
		~Dog();

		void makeSound() const;
		std::string getIdea(unsigned int nb);
};

#endif