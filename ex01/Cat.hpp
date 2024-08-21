#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal, public Brain
{
	private:
		Brain* idea;
	public:
		Cat();
		Cat(const Cat &old);
		Cat& operator=(const Cat &old);
		~Cat();

		void makeSound() const;
		std::string getIdea(unsigned int nb);
};


#endif