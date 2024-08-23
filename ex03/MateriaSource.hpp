#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *inv[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &old);
		MateriaSource& operator=(const MateriaSource &old);
		~MateriaSource();
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
};


#endif