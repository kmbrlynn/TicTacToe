#ifndef Computer_h
#define Computer_h
#include "AbstractPlayer.h"
#include "Board.h"
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

    virtual int move(const Board& board);

    void Greet(); 
};

#endif