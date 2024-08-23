#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure &old);
		Cure& operator=(const Cure &old);
		~Cure();

		void use(ICharacter& target) const;
		Cure* clone() const;
};

#endif