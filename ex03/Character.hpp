#ifndef CHARACTER_H
#define CHARACTER_H


#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
	AMateria *inv[4];
	std::string _name;

	public:
	Character(const std::string &name);
	Character(const Character &old);
	Character& operator=(const Character &old);
	~Character();

	std::string const &getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};


#endif