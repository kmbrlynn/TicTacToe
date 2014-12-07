#ifndef Game_H
#define Game_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>

using namespace std;

class Board;
class AbstractPlayer;
class Human;
class Computer;

class Game
{
private:
	Board mBoard;
	Human mHuman;
	Computer mComputer;
public:
	Game();
	~Game();

	char winner(const Board &board);
	void announceWinner(char winner, char computer, char human);
};

#endif
