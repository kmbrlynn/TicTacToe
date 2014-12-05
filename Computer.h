#ifndef Computer_H
#define Computer_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>

class Computer : public AbstractPlayer
{
private:
	// no redefined member vars
public:
	Computer();
	~Computer();

	// redefined
	void setPiece();
	int move();

};


#endif
