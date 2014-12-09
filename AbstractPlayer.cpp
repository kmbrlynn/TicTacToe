#include "AbstractPlayer.h"
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


void AbstractPlayer::DisplayHealth()
{ 
	cout << "AbstractPlayer's health: " << m_Health << endl; 
}
