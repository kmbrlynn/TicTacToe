#include "Game.h"
#include "Human.h"
#include "Computer.h"
#include <vector>
#include <iostream>

using namespace std;

// =================================================== constructors & destructors
Game::Game()
{
	AbstractPlayer* pAbstractPlayer;

	pAbstractPlayer = new Human();
	players.push_back(pAbstractPlayer);

	pAbstractPlayer = new Computer();
	players.push_back(pAbstractPlayer);
}

Game::~Game()
{
	for (unsigned int i = 0; i < players.size(); i++)
	{
		delete [] players[i];
	}
}

// =================================================== member functions
vector<AbstractPlayer*>& Game::getPlayers()
{
	return players;
}

Board& Game::getBoard()
{
	return board;
}

void Game::announceWinner(char winner, char computer, char human)
{
	if (winner == computer)
    {
        cout << winner << "'s won!\n";
        cout << "As I predicted, human, I am triumphant once more -- proof\n";
        cout << "that computers are superior to humans in all regards.\n";
    }

	else if (winner == human)
    {
        cout << winner << "'s won!\n";
        cout << "No, no!  It cannot be!  Somehow you tricked me, human.\n";
        cout << "But never again!  I, the computer, so swear it!\n";
    }

	else
    {
        cout << "It's a tie.\n";
        cout << "You were most lucky, human, and somehow managed to tie me.\n";
        cout << "Celebrate... for this is the best you will ever achieve.\n";
	}
}



