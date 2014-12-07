#ifndef AbstractPlayer_H
#define AbstractPlayer_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>

using namespace std;

class AbstractPlayer
{
protected:
	string mName;	
	char mPiece;
public:
	AbstractPlayer();
	AbstractPlayer(string name, char piece);
	~AbstractPlayer();

	bool isLegal(int move, const Board &board);
	char getPiece();
	virtual void setPiece() = 0; // pure virtual. will be overridden
	virtual int move() = 0;
};


#endif
