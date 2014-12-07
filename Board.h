#ifndef Board_H
#define Board_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>

using namespace std;

class Board
{
private:
	vector<char> mSquares;
public:
	Board();
	~Board();

	void displayInstructions();
	void displayBoard();
};


#endif
