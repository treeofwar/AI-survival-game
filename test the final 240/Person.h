/*
Devon Harant & Ben Duker
13 December 2019
Person header file
refer to cpp file for individual function comment
Notes:
*/
#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

class Person {
public:
	Person();
	Person(int, int);
	int getHealth();
	int getDamage();
	char getIndicator();
	void setIndicator(char);
	void setHealth(int);
	void setDamage(int);

protected:
	char indicator;
	int health;
	int damage;
};
