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

	void displayBoard();

	void setSquare(int move, char piece);

	char getSquare(int square) const;
	bool isLegal(int move) const;
};

#endif