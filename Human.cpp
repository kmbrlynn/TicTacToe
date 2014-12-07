#include "AbstractPlayer.h"
#include "Human.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>

using namespace std;

// ========================================= constructors & destructors
Human::Human() : 
	mName("Human"), 
	mPiece('X')
{}

Human::Human(string name, char piece) : 
	mName(name), 
	mPiece(piece)
{}

Human::~Human()
{}

// ========================================= additional functions
char Human::setYesNo(string question)
{
    char response;
    do
    {
        cout << question << " (y/n): ";
        cin >> response;
    } while (response != 'y' && response != 'n');

    return response;
}

int Human::setNumber()
{
	int num;
	do
	{
		cout << "pick a number between 0 and 8: ";
		cin >> num;
	} while (num < 0 || num > 8) //replace this with exception handling
	return num;
}

// ========================================= overridden member functions
void Human::setPiece()
{
    char go_first = setYesNo("Do you require the first move?");
    if (go_first == 'y')
    {
        cout << "\nThen take the first move.  You will need it.\n";
        mPiece = X;
    }
    else
    {
        cout << "\nYour bravery will be your undoing... I will go first.\n";
        mPiece = O;
    }
}

int Human::move(const Board &board)
{
    int move = setNumber();
    while (!isLegal(move, board)) //replace with exception handling
    {
        cout << "\nThat square is already occupied, foolish human.\n";
        move = setNumber(); 
    }
    cout << "Fine...\n";
    return move;
}













