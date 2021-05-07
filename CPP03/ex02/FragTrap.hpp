#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP
//#include <iostream>
//#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
private:
	static std::string s_pullFunnyAttack[];
	FragTrap();
public:
	FragTrap(std::string name);
	~FragTrap();
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void vaulthunter_dot_exe(std::string const & target);
	void setParams();
};
#endif