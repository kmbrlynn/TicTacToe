#ifndef AbstractPlayer_h
#define AbstractPlayer_h
#include "Board.h"
#include <vector>
#include <iostream>

using namespace std;

class AbstractPlayer  //abstract class
{
protected:
    int m_Health;
   
    char mPiece;
   // string mName;

public:
	AbstractPlayer();
    AbstractPlayer(char piece);
    
    virtual int move(Board &board) = 0;
    virtual char getPiece();

	char winner(const Board& board);

};

#endif