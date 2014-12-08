#include "Game.h"
#include "Board.h"
#include "AbstractPlayer.h"
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

