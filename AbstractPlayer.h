#ifndef AbstractPlayer_h
#define AbstractPlayer_h
#include "Board.h"
#include <vector>
#include <iostream>

using namespace std;

class AbstractPlayer  //abstract class
{
protected:
    char mPiece;

public:
	AbstractPlayer();
    AbstractPlayer(char piece);
    
    virtual int move(Board &board) = 0;
    virtual char choosePiece(char piece) = 0;
    
    char getPiece();
	char winner(const Board& board);

};

#endif