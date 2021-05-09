#ifndef AWEAPON_HPP
#define AWEAPON_HPP
#include <iostream>
#include <string>

class AWeapon {
private:
	std::string _name;
	int         _apcost;
	int         _damage;
	AWeapon();
	AWeapon(AWeapon const &);
	AWeapon & operator=(AWeapon const&);
public:
	AWeapon(std::string const & name, int apcost, int damage);
	~AWeapon();
	std::string getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};

#endif