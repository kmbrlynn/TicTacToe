#include "Board.h"
#include <vector>
#include <iostream>

using namespace std;

const char EMPTY = ' ';

// =================================================== constructors & destructors
Board::Board()
{
	for(int i = 0; i < 9; ++i)
	{
		mSquares.push_back(EMPTY);
	}
}

Board::~Board()
{}

// =================================================== member functions

void Board::displayBoard()
{
    cout << "\n\t" << mSquares[0] << " | " << mSquares[1] << " | " << mSquares[2];
    cout << "\n\t" << "---------";
    cout << "\n\t" << mSquares[3] << " | " << mSquares[4] << " | " << mSquares[5];
    cout << "\n\t" << "---------";
    cout << "\n\t" << mSquares[6] << " | " << mSquares[7] << " | " << mSquares[8];
    cout << "\n\n";
}

void Board::setSquare(int move, char piece)
{
	mSquares[move] = piece;
}

char Board::getSquare(int square) const
{
	return mSquares[square];
}

bool Board::isLegal(int move) const
{
	char desiredSquare = this->getSquare(move);
    return (desiredSquare == EMPTY);
}