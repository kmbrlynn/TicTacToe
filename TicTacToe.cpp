#include "Game.h"
#include "Board.h"
#include "AbstractPlayer.h"
#include "Human.h"
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
	Kim.choosePiece();
	robot.opposingPiece(Kim.getPiece());

//	cout << "\nThe board looks as follows: \n"
	ourBoard.displayBoard();

	while(1)
	{
		if (turn == Kim.getPiece())
		{
		    move = Kim.move(ourBoard);
    		ourBoard.setSquare(move, Kim.getPiece());
		    turn = robot.getPiece();
		}
		else
		{
		    move = robot.move(ourBoard);
		    ourBoard.setSquare(move, robot.getPiece());
		    turn = Kim.getPiece();
		}

		ourBoard.displayBoard();

	}

	/* code */
	return 0;
}














/*
int main()
{


	vector<Creature*> creatures;
    

    Creature* pCreature = new Orc();
    pCreature->Greet();
	creatures.push_back(pCreature);

    pCreature = new Hobbit();
    pCreature->Greet();
	creatures.push_back(pCreature);
    cout<<endl;

	cout <<"Going over the creatures in a vector: "<<endl;
    for (unsigned int i=0;i<creatures.size();i++) 
	{
		creatures[i]->Greet();
		creatures[i]->DisplayHealth();
	}

    return 0;
}
*/