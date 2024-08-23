#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice &old);
		Ice& operator=(const Ice &old);
		~Ice();

		void use(ICharacter& target) const;
		Ice* clone() const;
};

#endif