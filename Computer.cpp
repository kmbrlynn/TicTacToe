#include "Computer.h"
#include <unistd.h> // small delay before computer's turn displays
#include <vector>
#include <iostream>

using namespace std;

// =================================================== constructors & destructors
Computer::Computer()
{
	mPiece = ' ';
}

Computer::Computer(char piece) : 
	AbstractPlayer(piece)
{}

Computer::~Computer()
{}

// =================================================== member functions
char Computer::choosePiece(char piece)
{
	if (piece == 'X')
	{
		mPiece = 'O';
		return 'O';	
	}
	else
	{
		mPiece = 'X';
		return 'X';
	}
}

int Computer::move(Board& board)
{
	char computerPiece = mPiece;
	char humanPiece;
	clock_t pause;

	if(mPiece == 'X')
		humanPiece = 'O';
	if(mPiece == 'O')
		humanPiece = 'X';

	sleep(2);
	cout<< "I'll take square number ";
    
    // if computer can win on next move, make that move
    for(int move = 0; move < 8; ++move)
    {
        if (board.isLegal(move))
        {
            board.setSquare(move, computerPiece);
            if (winner(board) == computerPiece)
            {
                cout << move << "! \nThe board now looks like this:\n";
                return move;
            }
            // done checking this move, undo it
            board.setSquare(move, ' ');
        }
    }
        
    // if human can win on next move, block that move
    for(int move = 0; move < 8; ++move)
    {
        if (board.isLegal(move))
        {
            board.setSquare(move, humanPiece);
            if (winner(board) == humanPiece)
            {
                cout << move << "! \nThe board now looks like this:\n";
                return move;
            }
            // done checking this move, undo it
            board.setSquare(move, ' ');
        }
    }

    // the best moves to make, in order
    const int BEST_MOVES[] = {4, 0, 2, 6, 8, 1, 3, 5, 7};
    // since no one can win on next move, pick best open square
    for(int i = 0; i < 8; ++i)
    {
        int move = BEST_MOVES[i];
        if (board.isLegal(move))
        {
            cout << move << "! \nThe board now looks like this:\n";
            return move;
        }
    }
}

