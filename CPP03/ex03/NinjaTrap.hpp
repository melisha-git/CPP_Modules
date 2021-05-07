#ifndef NINJA_TRAP_HPP
#define NINJA_TRAP_HPP
#include "ClapTrap.hpp"


class NinjaTrap : public ClapTrap {
private:
	NinjaTrap();
	static std::string s_pullFunnyShoeboxes[];
public:
	NinjaTrap(std::string const& name);
	~NinjaTrap();
	void ninjaShoebox();
	virtual void setParams();
};

#endif