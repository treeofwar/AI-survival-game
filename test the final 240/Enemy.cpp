/*
Devon Harant & Ben Duker
13 December 2019
Enemy class
Notes:
*/
#include "Enemy.h"
/*
Enemy constructor
Input: n/a
Output: n/a
Function: default sets health and damage to 5 and indicator to E
Notes:
*/
Enemy::Enemy() {
	health = 5;
	damage = 5;
	indicator = 'E';
}
/*
Enemy parameterized constructor
Input: n/a
Output: n/a
Function: default sets health and damage to given h and d and indicator to E
Notes:
*/
Enemy::Enemy(int d, int h) {
	damage = d;
	health = h;
	indicator = 'E';
}
/*
operator+
Input: Enemy e
Output: Enemy yeaboi
Function: adds the damage and health of the enemy objects called and called on
Notes:
*/
Enemy Enemy::operator+(Enemy e) {
	Enemy yeaboi(this->getDamage() + e.getDamage(), this->getHealth() + e.getHealth());
	return yeaboi;
}
/*
operator=
Input: Enemy e
Output: n/a
Function: sets another enemy object equal to enemy given
Notes:
*/
void Enemy::operator=(Enemy e) {
	this->setDamage(e.getDamage());
	this->setHealth(e.getHealth());
}
/*
operator<<
Input: n/a
Output: enemy info
Function: returns enemy info through ostream
Notes:
*/
ostream& operator<<(ostream& os, Enemy& rhs) {
	os << "Damage: " << rhs.getDamage() << endl;
	os << "Health: " << rhs.getHealth() << endl;
	return os;
}