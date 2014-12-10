#include "Game.h"
#include "Human.h"
#include "Computer.h"
#include <vector>
#include <iostream>

using namespace std;

// lone function
void displayInstructions()
{
    cout << "\nWELCOME TO TIC-TAC-TOE: HUMAN vs. MACHINE\n\n";

    cout << "Make your move by entering a number (0 to 8)\n";
    cout << "which corresponds to a board position, as shown:\n\n";
    
    cout << "       0 | 1 | 2\n";
    cout << "       ---------\n";
    cout << "       3 | 4 | 5\n";
    cout << "       ---------\n";
    cout << "       6 | 7 | 8\n\n";

    cout << "Can you outsmart a computer? Good luck!\n\n";
   	cout << "=================================================\n\n";
}

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
	char turn = 'X';
	int move;

	players[0]->choosePiece(players[1]->getPiece());
	players[1]->choosePiece(players[0]->getPiece());

	while(players[1]->winner(board) == 'N')
	{
		if (turn == players[0]->getPiece())
		{
		    move = players[0]->move(board);
    		board.setSquare(move, players[0]->getPiece());
		    turn = players[1]->getPiece();
		}
		else
		{
		    move = players[1]->move(board);
		    board.setSquare(move, players[1]->getPiece());
		    turn = players[0]->getPiece();
		}

		board.displayBoard();

	}

	this->announceWinner(players[1]->winner(board), players[1]->getPiece(), players[0]->getPiece());
}



