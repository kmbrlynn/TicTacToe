#ifndef AbstractPlayer_H
#define AbstractPlayer_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>

class AbstractPlayer
{
protected:
	char mPiece;
public:
	AbstractPlayer();
	~AbstractPlayer();

	char getPiece();
	void setPiece();
	bool isLegal();
	int move();
};


#endif
