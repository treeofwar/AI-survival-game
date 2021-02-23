/*
Devon Harant & Ben Duker
13 December 2019
PitTrap class
Notes:
*/
#include "PitTrap.h"
/*
PitTrap constructor
Input: n/a
Output: n/a
Function: sets damage to 10 default, indicator to P and triggered to false
Notes:
*/
PitTrap::PitTrap() {
	damage = 10;
	indicator = 'P';
	triggered = false;
}
/*
PitTrap parameterized constructor
Input: int d
Output: n/a
Function: same as above but damage is set to given d
Notes:
*/
PitTrap::PitTrap(int d) {
	damage = d;
	indicator = 'P';
	triggered = false;
}
