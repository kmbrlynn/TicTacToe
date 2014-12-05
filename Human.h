#ifndef Human_H
#define Human_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>

class Human : public AbstractPlayer
{
private:
	// no redefined member vars
public:
	Human();
	~Human();

	// redefined
	void setPiece();
	int move();

	// additional member fucntions
	char setYesNo();
	int setNumber();

};



#endif
