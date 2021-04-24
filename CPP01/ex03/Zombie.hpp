#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie
{
public:
	Zombie();
	Zombie(std::string name, std::string type);
	~Zombie();
	void annouce();
private:
	std::string name;
	std::string type;
};

#endif