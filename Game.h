#ifndef Game_h
#define Game_h
#include "AbstractPlayer.h"
#include "Board.h"
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



};

#endif