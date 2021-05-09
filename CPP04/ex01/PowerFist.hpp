#ifndef POWER_FIST_HPP
#define POWER_FIST_HPP
#include "AWeapon.hpp"

class PowerFist : public AWeapon{
public:
	PowerFist();
	void attack() const;
};

#endif