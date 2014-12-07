#include "Board.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>

using namespace std;

// ========================================= constructors & destructors
Board::Board()
{
	for(i = 0; i < 9; ++i)
	{
		mSquares.push_back(' ');
	}
}

Board::~Board()
{}

// ========================================= member functions
void Board::displayInstructions()
{
    cout << "Welcome to the ultimate man-machine showdown: Tic-Tac-Toe.\n";
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
	for (boardIter = this.begin(); boardIter != this.end(); boardIter++)
	{
		if (i == 2 || i == 5)
			cout << endl;
		cout << *boardIter << "  ";
		i++
	}
}
