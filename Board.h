#ifndef Board_h
#define Board_h
#include <vector>
#include <iostream>

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

	char getSquare(int square);
	bool isLegal(int move);
};

#endif