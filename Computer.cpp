#include "AbstractPlayer.h"
#include "Computer.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>

using namespace std;

// ========================================= constructors & destructors
Computer::Computer() : 
	mName("Computer"), 
	mPiece('O')
{}

Computer::Computer(string name, char piece) : 
	mName(name), 
	mPiece(piece)
{}

Computer::~Computer()
{}

// ========================================= overridden member functions
void Computer::setPiece(const Human &human)
{
	if (human.mPiece == X)
		mPiece = O;
	else if (human.mPiece == O)
		mPiece = X;
}

int Computer::move(const Board &board)
{

}
