#ifndef Game_h
#define Game_h
#include "AbstractPlayer.h"
#include <vector>
#include <iostream>

using namespace std;

class Game
{
private:
	vector<AbstractPlayer*> players;
	Board board;

public:
	Game();
	~Game();

	vector<AbstractPlayer*>& getPlayers();
	Board& getBoard();

	void announceWinner(char winner, char computer, char human);
};

#endif