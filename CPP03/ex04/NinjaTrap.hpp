#ifndef NINJA_TRAP_HPP
#define NINJA_TRAP_HPP
#include "ClapTrap.hpp"


class NinjaTrap : virtual public ClapTrap {
private:
	NinjaTrap();
	static std::string s_pullFunnyShoeboxes[];
	void setParams();
public:
	NinjaTrap(std::string const& name);
	~NinjaTrap();
	void ninjaShoebox();
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
};

#endif