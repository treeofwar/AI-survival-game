/*
Devon Harant & Ben Duker
13 December 2019
Person class
Notes:
*/
#include "Person.h"
/*
Person constructor
Input: n/a
Output: n/a
Function: default sets health and damage to 0 and indicator to L
Notes:
*/
Person::Person() {
	health = 0;
	damage = 0;
	indicator = 'L';
}
/*
Person parameterized constructor
Input: int h, int d
Output: n/a
Function: same as above but health is set to given h and damage is set to given d
Notes:
*/
Person::Person(int h, int d) {
	health = h;
	damage = d;
	indicator = 'L';
}
/*
getDamage
Input: n/a
Output: damage of person object
Function: returns damage of person object
Notes:
*/
int Person::getDamage() {
	return damage;
}
/*
getHealth
Input: n/a
Output: health of person object
Function: returns health of person object
Notes:
*/
int Person::getHealth() {
	return health;
}
/*
getIndicator
Input: n/a
Output: indicator of person object
Function: returns indicator of person object
Notes:
*/
char Person::getIndicator() {
	return indicator;
}
/*
setIndicator
Input: char i
Output: n/a
Function: sets indicator to given i
Notes:
*/
void Person::setIndicator(char i) {
	indicator = i;
}
/*
setDamage
Input: int d
Output: n/a
Function: sets damage to given d
Notes:
*/
void Person::setDamage(int d) {
	damage = d;
}
/*
setHealth
Input: int h
Output: n/a
Function: sets health to given h
Notes:
*/
void Person::setHealth(int h) {
	health = h;
}