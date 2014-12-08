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
	Game ourGame;
	Board ourBoard = ourGame.getBoard();
	vector<AbstractPlayer*> ourPlayers = ourGame.getPlayers();

	ourBoard.displayInstructions();
	ourBoard.displayBoard();


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