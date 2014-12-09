#include "AbstractPlayer.h"
#include "Computer.h"
#include "Board.h"
#include <vector>
#include <iostream>

using namespace std;

// =================================================== constructors & destructors
Computer::Computer()
{
	m_Health = 200;
	mPiece = 'O';
	//mName = "Computer";
}

Computer::Computer(char piece) : 
	AbstractPlayer(piece)
{}

// =================================================== member functions
char Computer::opposingPiece(char piece)
{
	if (piece == 'X')
	{
		mPiece = 'O';
		return 'O';	
	}
	else if (piece == 'O')
	{
		mPiece = 'X';
		return 'X';
	}
}

int Computer::move(const Board& board)
{
	return 1;
}







void Computer::Greet() 
{ 
	cout << "The Computer smiles and says hi:)\n";
}