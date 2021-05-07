#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP
//#include <iostream>
//#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
private:
	static std::string s_pullFunnyAttack[];
	FragTrap();
	void setParams();
public:
	FragTrap(std::string name);
	~FragTrap();
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void vaulthunter_dot_exe(std::string const & target);
};
#endif