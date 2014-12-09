//#include "AbstractPlayer.h"
#include "Human.h"
//#include "Board.h"
#include <vector>
#include <iostream>

using namespace std;

// =================================================== constructors & destructors
Human::Human()
{
	m_Health = 120;
	mPiece = 'X';
}

Human::Human(char piece) : 
	AbstractPlayer(piece)
{}

Human::~Human()
{}

// =================================================== member functions
char Human::askYesNo(string question)
{
    char response;
    do
    {
        cout << question << " (y/n): ";
        cin >> response;
    } while (response != 'y' && response != 'n');

    return response;
}

int Human::askNumber(string question)
{
    int number;
    do
    {
        cout << question << "(0 to 8): ";
        cin >> number;
    } while (number > 8 || number < 0);

    return number;
}

int Human::move(Board& board)
{
    int move = askNumber("Where will you move?");
    while (!board.isLegal(move))
    {
        cout << "\nThat square is already occupied, foolish human.\n";
        move = askNumber("Where will you move?");
    }
    cout << "Fine...\n";
    return move;
}

char Human::choosePiece()
{
    char go_first = askYesNo("Do you require the first move?");
    if (go_first == 'y')
    {
        cout << "\nThen take the first move.  You will need it.\n";
        mPiece = 'X';
        return 'X';
    }
    else
    {
        cout << "\nYour bravery will be your undoing... I will go first.\n";
        mPiece = 'O';
        return 'O';
    }
}


