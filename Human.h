#ifndef Human_h
#define Human_h
#include "AbstractPlayer.h"
#include "Board.h"
#include <vector>
#include <iostream>

using namespace std;

class Human : public AbstractPlayer
{
private:
	// no redefined vars
public:
	Human();
    Human(char piece);

    virtual int move(const Board& board);

    void Greet(); 
};

#endif