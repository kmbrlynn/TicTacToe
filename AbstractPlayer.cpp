#include "AbstractPlayer.h"
//#include "Board.h"
#include <vector>
#include <iostream>

using namespace std;

// =================================================== constructors & destructors
AbstractPlayer::AbstractPlayer()
{
	m_Health = 100;
	mPiece = ' ';
//	mName = " ";
}

AbstractPlayer::AbstractPlayer(char piece) : 
	mPiece(piece)
	//mName(name)
{}

// =================================================== member functions   

char AbstractPlayer::getPiece()
{
	return mPiece;
}

char AbstractPlayer::winner(const Board& board)
{
    // all possible winning rows
    const int WINNING_ROWS[8][3] = { {0, 1, 2},
                                     {3, 4, 5},
                                     {6, 7, 8},
                                     {0, 3, 6},
                                     {1, 4, 7},
                                     {2, 5, 8},
                                     {0, 4, 8},
                                     {2, 4, 6} };
    const int TOTAL_ROWS = 8;

    // if any winning row has three values that are the same (and not EMPTY),
    // then we have a winner
    for(int row = 0; row < TOTAL_ROWS; ++row)
    {
        if ( (board.getSquare(WINNING_ROWS[row][0]) != ' ') &&
             (board.getSquare(WINNING_ROWS[row][0]) == board.getSquare(WINNING_ROWS[row][1])) &&
             (board.getSquare(WINNING_ROWS[row][1]) == board.getSquare(WINNING_ROWS[row][2])) )
        {
            return board.getSquare(WINNING_ROWS[row][0]);
        }
    }

    // if there's empty squares left, return 'N' to indicate nobody won & game's not over
    for (int i = 0; i < 8; ++i)
    {
    	if (board.getSquare(i) == ' ')
    		return 'N';
    }

    return 'T'; //tie -- nobody won and there's no empty squares left
}
