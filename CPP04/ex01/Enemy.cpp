#include "Enemy.hpp"

Enemy::Enemy(int hp, const std::string &type) : _hp(hp), _type(type) {
}

Enemy::Enemy() {
}

Enemy::~Enemy() {
}

Enemy::Enemy(const Enemy &copy) {
	*this = copy;
}

Enemy & Enemy::operator=(const Enemy &copy) {
	this->_hp = copy._hp;
	this->_type = copy._type;
	return *this;
}

std::string Enemy::getType() const {
	return this->_type;
}

int Enemy::getHP() const {
	return this->_hp;
}

void Enemy::takeDamage(int damage) {
	if (damage >= 0)
		this->_hp -= damage;
	if (this->_hp < 0)
		this->_hp = 0;
}