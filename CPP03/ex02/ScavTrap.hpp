#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
private:
	static std::string s_pullFunnyChallenges[];
	ScavTrap();
public:
	ScavTrap(std::string name);
	~ScavTrap();
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void challengeNewcomer();
	void setParams();
};

#endif