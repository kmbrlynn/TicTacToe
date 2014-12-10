#include "Game.h" // includes Board
#include "Human.h" // includes AbstractPlayer
#include "Computer.h"
#include <vector>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	// Look! a human! Maybe she wants to play a game.
	Human Kim;

	// Welcome, human, to Tic-Tac-Toe!!
	displayInstructions();

	do
	{
		// set up a game
		Game ourGame;
		vector<AbstractPlayer*> ourPlayers = ourGame.getPlayers();

		// Kim the human pulls up a chair to play
		ourPlayers[0] = &Kim;
		ourGame.play();
	}
	while(Kim.askYesNo("Do you want to play again?") == 'y');

	return 0;
}












