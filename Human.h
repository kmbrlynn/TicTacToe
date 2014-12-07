#ifndef Human_H
#define Human_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>

using namespace std;

class Human : public AbstractPlayer
{
private:
	// no redefined member vars
public:
	Human();
	~Human();

	// additional member fucntions
	char setYesNo(string question);
	int setNumber();

	// overridden from AbstractPlayer 
	void setPiece();
	int move(const Board &board);


};



#endif
