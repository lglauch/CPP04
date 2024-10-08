#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* idea;
	public:
		Cat();
		Cat(const Cat &old);
		Cat& operator=(const Cat &old);
		~Cat();

		void makeSound() const;
};


#endif