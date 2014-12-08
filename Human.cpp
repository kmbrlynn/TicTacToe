#include "AbstractPlayer.h"
#include "Human.h"
#include "Board.h"
#include <vector>
#include <iostream>

using namespace std;

// =================================================== constructors & destructors
Human::Human()
{
	m_Health = 120;
	mPiece = 'X';
//	mName = "Human";
}

Human::Human(char piece) : 
	AbstractPlayer(piece)
{}

// =================================================== member functions
int Human::move(const Board& board)
{
	return 1;
}

void Human::Greet() 
{ 
	cout << "The Human grunts hello:( \n";
}