/*
Devon Harant & Ben Duker
13 December 2019
Given World header file
Notes:
*/
#ifndef WORLD_H
#define WORLD_H
#include <cstdlib>

using namespace std;

class World
{

public:
	World() {};

	virtual void PrintGrid() = 0;
	virtual void UpdateGrid() = 0;

protected:
	int day;
	char grid[10][10];

	virtual void initGrid() = 0;
	virtual bool checkBounds(int, int) = 0;

};

#endif /* WORLD_H */
