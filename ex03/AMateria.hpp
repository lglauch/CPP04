#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>

class ICharacter;

class AMateria
{
protected:
	std::string type;

public:
	AMateria();
	AMateria(std::string const & newtype);
	AMateria(const AMateria &old);
	AMateria& operator=(const AMateria &old);
	virtual ~AMateria();

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target) const = 0;
};

#endif