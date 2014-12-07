#include "AbstractPlayer.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>

using namespace std;

// ========================================= constructors & destructors
AbstractPlayer::AbstractPlayer() : 
	mName("Player"), 
	mPiece('X')
{}

AbstractPlayer::AbstractPlayer(string name, char piece) : 
	mName(name), 
	mPiece(piece)
{}

AbstractPlayer::~AbstractPlayer()
{}

// ========================================= non-abstract member functions
// do not define setPiece() and move() -- they are abstract
bool AbstractPlayer::isLegal(int move, const Board &board)
{
    return (board[move] == EMPTY);
}

char AbstractPlayer::getPeice()
{
	return mPiece;
}

