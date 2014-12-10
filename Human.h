#ifndef Human_h
#define Human_h
#include "AbstractPlayer.h"
#include <vector>
#include <iostream>

using namespace std;

// make exception classes, 
//since human input involves validation
class notYesNo
{};

class notDigit
{};

class outOfRange
{};

class Human : public AbstractPlayer
{
private:
	// no redefined vars
public:
	Human();
    Human(char piece);
    ~Human();

    virtual int move(Board& board);
    virtual char choosePiece(char piece);

    char askYesNo(string question);
    int askNumber(string question);

};

#endif