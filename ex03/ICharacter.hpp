#ifndef ICHARACTER_H
#define ICHARACTER_H

#include "AMateria.hpp"
#include <string.h>

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

std::ostream& operator<<(std::ostream& out, const ICharacter &msg);

#endif