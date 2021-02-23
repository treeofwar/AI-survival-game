/*
Devon Harant & Ben Duker
13 December 2019
Trap class
refer to cpp file for individual function comment
Notes:
*/
#include "Trap.h"
/*
Trap constructor
Input: n/a
Output: n/a
Function: sets damage to 0 default, indicator to T and triggered to false
Notes:
*/
Trap::Trap() {
	damage = 0;
	indicator = 'T';
	triggered = false;
}
/*
Trap parameterized constructor
Input: int dam
Output: n/a
Function: same as above but sets damage to given dam
Notes:
*/
Trap::Trap(int dam) {
	damage = dam;
	indicator = 'T';
	triggered = false;
}
/*
getDamage
Input: n/a
Output: damage of trap object
Function: returns damage of trap object
Notes:
*/
int Trap::getDamage() {
	return damage;
}
/*
getIndicator
Input: n/a
Output: indicator of trap object
Function: returns indicator of trap object
Notes:
*/
char Trap::getIndicator() {
	return indicator;
}
/*
getTriggered
Input: n/a
Output: triggered state of trap object
Function: returns trigggered state of trap object
Notes:
*/
bool Trap::getTriggered() {
	return triggered;
}
/*
setIndicator
Input: char i
Output: n/a
Function: sets indicator to given i
Notes:
*/
void Trap::setIndicator(char i) {
	indicator = i;
}
/*
setDamage
Input: int dam
Output: n/a
Function: sets damage to given dam
Notes:
*/
void Trap::setDamage(int dam) {
	damage = dam;
}
/*
setTriggered
Input: char i
Output: n/a
Function: sets triggered state to given bool
Notes:
*/
void Trap::setTriggered(bool a) {
	triggered = a;
}
