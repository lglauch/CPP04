#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &old);
		WrongCat& operator=(const WrongCat &old);
		~WrongCat();

		void makeSound() const;
};


#endif