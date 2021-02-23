/*
Devon Harant & Ben Duker
13 December 2019
SpikeTrap class
Notes:
*/
#include "SpikeTrap.h"
/*
SpikeTrap constructor
Input: n/a
Output: n/a
Function: sets damage to 5 default, indicator to S and triggered to false
Notes:
*/
SpikeTrap::SpikeTrap() {
	damage = 5;
	indicator = 'S';
	triggered = false;
}
/*
SpikeTrap parameterized constructor
Input: int d
Output: n/a
Function: same as above but damage is set to given d
Notes:
*/
SpikeTrap::SpikeTrap(int d) {
	damage = d;
	indicator = 'S';
	triggered = false;
}