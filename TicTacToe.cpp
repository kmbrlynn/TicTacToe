#include "Game.h" // includes Board
#include "Human.h" // includes AbstractPlayer
#include "Computer.h"
#include <vector>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	// set up a game
	Game ourGame;
	Board ourBoard = ourGame.getBoard();
	vector<AbstractPlayer*> ourPlayers = ourGame.getPlayers();

	// invite some players to our game
	Human Kim;
	Computer robot;
	ourPlayers[0] = &Kim;
	ourPlayers[1] = &robot;
	char turn = 'X';
	int move;

	// Welcome to Tic-Tac-Toe!!
	ourBoard.displayInstructions();

	// Play!

	ourGame.play();


	return 0;
}












