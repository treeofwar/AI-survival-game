/*
Devon Harant & Ben Duker
13 December 2019
Island class
Notes:
*/
#include "Island.h"
#include "Enemy.h"
#include "PitTrap.h"
#include "SpikeTrap.h"
#include <iostream>
#include <ctime>
#include <random>
using namespace std;

enum space{Empty, Treasure, Dug};
/*
Island constructor
Input: n/a
Output: n/a
Function: initializes clock and sets day to 0
Notes:
*/
Island::Island() {
	srand(clock());
	day = 0;
}
/*
initGrid()
Input: n/a
Output: n/a
Function: populates the board with player, treasure, enemies and traps
Notes:
*/
void Island::initGrid() {
	srand(clock());
	int maxnum = 10;
	int enmnum = 5;
	int spikemax = 5;
	int pitmax = 5;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			grid[i][j] = Empty;
		}
	}
	//player placement with L indicator
	grid[0][0] = 'L';
	//treasure placement
	int tx = rand() % maxnum;
	int ty = rand() % maxnum;
	grid[tx][ty] = (Treasure);
	//enemy population
	for (int i = 0; i < enmnum; i++) {
		int ex = rand() % maxnum;
		int ey = rand() % maxnum;
		if (grid[ex][ey] == (Empty)) {
			grid[ex][ey] = ('E');
		}
		else {
			i--;
		}
	}
	//spike trap population
	for (int i = 0; i < spikemax; i++) {
		int sx = rand() % maxnum;
		int sy = rand() % maxnum;
		if (grid[sx][sy] == (Empty)) {
			grid[sx][sy] = ('S');
		}
		else {
			i--;
		}
	}
	//pit trap population
	for (int i = 0; i < pitmax; i++) {
		int px = rand() % maxnum;
		int py = rand() % maxnum;
		if (grid[px][py] == (Empty)) {
			grid[px][py] = ('P');
		}
		else {
			i--;
		}
	}
}
/*
PrintGrid()
Input: n/a
Output: board
Function: prints the board line by line showing enemy and player location while hiding traps and treasure
Notes:
*/
void Island::PrintGrid() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			switch (grid[i][j]) {
			case Empty:
				cout << "_";
				break;
			case Dug:
				cout << "*";
				break;
			case Treasure:
				cout << "_";
				break;
			case 'S':
				cout << "_";
				break;
			case 'P':
				cout << "_";
				break;
			case 'E':
				cout << "E";
				break;
			case 'L':
				cout << "L";
				break;
			}
		}
		cout << endl;
	}
	cout << endl;
}
/*
UpdateGrid()
Input: n/a
Output: the whole simulation
Function: runs the simulation from day 1 to starvation or if treasure is found or if player dies
Notes:
*/
void Island::UpdateGrid() {
	srand(clock());
	Person player(10, 10);
	Enemy badguy(5, 5);
	SpikeTrap sp;
	int maxnum = 10;
	int prevX;
	int prevY;

	int Px = 0; //players x and y coords
	int Py = 0;
	int dx;
	while (player.getHealth() > 0 && day < 60) {
		cout << "DAY: " << day + 1 << endl;
		//player movement
		prevX = Px;
		prevY = Py;

		dx = reroll();
		//up
		if (dx == 0 && Py-1 >= 0) {
			Py--;
			Px = Px;
		}
		//down
		if (dx == 1 && Py+1 < 10) {
			Py++;
			Px = Px;
		}
		//left
		if (dx == 2 && Px -1 >=0) {
			Py = Py;
			Px--;
		}
		//right
		if (dx == 3 && Px +1 < 10) {
			Py = Py;
			Px++;
		}
		
		//player finds treasure
		if (grid[Px][Py] == Treasure) {
			cout << "Congrats! YOU FOUND THE TREASURE!! YOU WIN!!" << endl;
			break;
		}
		//player encounters enemy
		else if (grid[Px][Py] == 'E') {
			cout << "YOU ENCOUNTERED AN ENEMY" << endl;
			int randkill = rand() % 10;
			if (randkill == 7) {
				badguy.setDamage(15);
			}
			if (badguy.getDamage() > player.getHealth()) {
				cout << "That's gotta hurt!" << endl;
				player.setHealth(player.getHealth() - badguy.getDamage());
				if (player.getHealth() == 0) {
					cout << "AN ENEMY KILLED YOU!" << endl;
				}
			}
			else {
				cout << "YOU BEAT EM!!" << endl;
				grid[prevX][prevY] = Empty;
				grid[Px][Py] = 'L';
			}
		}
		//player encounters spike trap
		else if (grid[Px][Py] == 'S') {
			cout << "YOU ENCOUNTERED A SPIKE TRAP, THAT ONE HURT!" << endl;
			player.setHealth(player.getHealth() - sp.damage);
		}
		//player encounters pit trap
		else if (grid[Px][Py] == 'P') {
			cout << "HORRIBLE LUCK! YOU ENCOUNTERED A PIT TRAP AND DIED INSTANTLY" << endl;
			player.setHealth(0);
		}
		//movement of player visually
		grid[prevX][prevY] = Empty;
		grid[Px][Py] = 'L';
		
		day++;
		PrintGrid();
	}
	//died
	if (player.getHealth() <= 0) {
		cout << "YOU DIED :C YOU LOSE\nBetter Luck Next TIME!" << endl;
	}
	//died of starvation
	if (day > 59) {
		cout << "You died of starvation :C\nBetter Luck Next TIME!" << endl;
	}
	cout << "END OF GAME" << endl;
}
/*
reroll()
Input: n/a
Output: random number
Function: used for debugging certain errors with player placement and whatnot
Notes:
*/
int Island::reroll() {
	return rand() % 4;
}
/*
checkBounds(int,int)
Input: int a, int b
Output: bool
Function: returns true if given values are within boundaries
Notes:
*/
bool Island::checkBounds(int a, int b) {
	if ((a > 10 && a < 0) || (b > 10 && b < 0)) {
		return false;
	}
	return true;
}
