#ifndef Game_H
#define Game_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>

class Game
{
private:
	vector <AbstractPlayer> mPlayers;
	Board mBoard;
public:
	Game();
	~Game();

	void setWinner();
	char getWinner();
};

#endif
