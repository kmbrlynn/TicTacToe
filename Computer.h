#ifndef Computer_h
#define Computer_h
#include "AbstractPlayer.h"
#include <vector>
#include <iostream>

using namespace std;

class Computer : public AbstractPlayer
{
private:
	// no redefined vars
public:
	Computer();
    Computer(char piece);
    ~Computer();

    virtual int move(Board& board);
    virtual char choosePiece(char piece);

};

#endif