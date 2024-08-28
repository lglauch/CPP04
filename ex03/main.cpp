#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
	{
		
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		src->learnMateria(new Ice());
		src->learnMateria(new Ice());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		me->equip(tmp);
		me->equip(new Ice());
		me->equip(tmp->clone());
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		me->unequip(6);
		me->unequip(0);
		me->use(0, *bob);
		delete bob;
		delete me;
		delete src;
	}

	std::cout << "\n\n" << std::endl;

	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		src->learnMateria(new Ice());
		Character *lol = new Character("pog");
		
		std::cout << "Name: " << lol->getName() << std::endl;
		lol->equip(src->createMateria("ice"));
		lol->equip(src->createMateria("ice"));
		lol->equip(src->createMateria("cure"));
		lol->equip(src->createMateria("ice"));
		
		Character *pog = new Character(*lol);
		delete lol;

		pog->use(0, *pog);
		pog->use(1, *pog);
		pog->use(2, *pog);
		pog->use(3, *pog);

		std::cout << pog->getName() << std::endl;

		delete src;
		delete pog;
	}

	return 0;
}