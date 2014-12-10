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
        cout << winner << "'s won!\n\n";
        cout << "I guess computers really are smarter than humans. Goodbye!\n";
    }

	else if (winner == human)
    {
        cout << winner << "'s won!\n\n";
        cout << "Blood and guts triumph over silicon. Goodbye!\n";
    }

	else
    {
        cout << "It's a tie!\n\n";
        cout << "Until we meet again, human. Goodbye!\n";
	}
}

void Game::play()
{

}



