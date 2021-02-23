/*
Devon Harant & Ben Duker
13 December 2019
Trap header file
refer to cpp file for individual function comment
Notes:
*/
#ifndef TRAP_H
#define TRAP_H
#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

class Trap {
public:
	Trap();
	Trap(int);
	int getDamage();
	char getIndicator();
	bool getTriggered();
	void setIndicator(char);
	void setDamage(int);
	void setTriggered(bool);

	char indicator;
	int damage;
	bool triggered;
};
#endif /*TRAP_H*/