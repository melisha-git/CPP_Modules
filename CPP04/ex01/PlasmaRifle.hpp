#ifndef PLASMA_RIFLE_HPP
#define PLASMA_RIFLE_HPP
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
public:
	PlasmaRifle();
	void attack() const;
};

#endif