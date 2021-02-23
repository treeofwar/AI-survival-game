/*
Devon Harant & Ben Duker
13 December 2019
Island header file, inherits provided World
refer to cpp file for individual function comment
Notes:
*/
#include "World.h"
using namespace std;

class Island : public World {
public:
	Island();
	void PrintGrid();
	void UpdateGrid();
	void initGrid();
	bool checkBounds(int, int);
	int reroll();
};