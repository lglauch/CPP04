#include "ICharacter.hpp"
#include "AMateria.hpp"

std::ostream& operator<<(std::ostream& out, const ICharacter &msg)
{
	out << msg.getName();
	return (out);
}