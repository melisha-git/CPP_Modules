#ifndef ENEMY_HPP
#define ENEMY_HPP
#include <iostream>
#include <string>

class Enemy {
private:
	int _hp;
	std::string _type;
	Enemy();
	Enemy(const Enemy &);
	Enemy& operator=(Enemy const &);
public:
	virtual ~Enemy();
	Enemy(int hp, std::string const & type);
	std::string getType() const;
	int getHP() const;

	virtual void takeDamage(int);
};

#endif