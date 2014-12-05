#ifndef Board_H
#define Board_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>

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
