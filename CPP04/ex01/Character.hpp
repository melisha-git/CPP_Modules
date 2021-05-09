#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include <string>
#include <ostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {
private:
	std::string _name;
	int         _ap;
	AWeapon     *_weapon;
	Character();
	Character(Character const &);
	Character & operator=(Character const &);
public:
	Character(std::string const & name);
	~Character();
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string getName() const;
	int getAp() const;
	std::string getWeaponName();
	int isWeapon();
};

std::ostream & operator<<(std::ostream &, Character &);

#endif