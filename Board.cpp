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
void Board::displayInstructions()
{
    cout << "\nWelcome to the ultimate man-machine showdown: Tic-Tac-Toe.\n";
    cout << "--where human brain is pit against silicon processor\n\n";

    cout << "Make your move known by entering a number, 0 - 8.  The number\n";
    cout << "corresponds to the desired board position, as illustrated:\n\n";
    
    cout << "       0 | 1 | 2\n";
    cout << "       ---------\n";
    cout << "       3 | 4 | 5\n";
    cout << "       ---------\n";
    cout << "       6 | 7 | 8\n\n";

    cout << "Prepare yourself, human.  The battle is about to begin.\n\n";
}

void Board::displayBoard()
{
	vector<char>::iterator boardIter;
	int i = 0;
	for (boardIter = this->mSquares.begin(); boardIter != this->mSquares.end(); boardIter++)
	{
		if (i == 3 || i == 6)
			cout << endl;
		cout << "| " << *boardIter << " |";
		i++;
	}
}

char Board::getSquare(int square)
{
	return mSquares[square];
}

bool Board::isLegal(int move)
{
	char desiredSquare = this->getSquare(move);
    return (desiredSquare == EMPTY);
}