#ifndef Computer_H
#define Computer_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>

using namespace std;

class Computer : public AbstractPlayer
{
private:
	// no redefined member vars
public:
	Computer();
	~Computer();

	// redefined
	void setPiece(const Human &human);
	int move(const Board &board);

};


#endif
