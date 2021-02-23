/*
Devon Harant & Ben Duker
13 December 2019
Enemy header file, inherits Person
refer to cpp file for individual function comment
Notes:
*/
#include "Person.h"
class Enemy :public Person {
	friend ostream& operator<<(ostream&, Enemy&);
public:
	Enemy();
	Enemy(int, int);
	Enemy operator+(Enemy);
	void operator=(Enemy);
	ostream& operator<<(ostream& os);
};