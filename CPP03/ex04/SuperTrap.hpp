#ifndef SUPER_TRAP_HPP
#define SUPER_TRAP_HPP
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap {
public:
	SuperTrap(std::string const& name);
	~SuperTrap();

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
};

#endif