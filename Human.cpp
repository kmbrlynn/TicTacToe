#include "Human.h"
#include <cstdlib> //atoi
#include <vector>
#include <cstring>
#include <string>
#include <iostream>

using namespace std;

// for exception handling
bool isAllDigits(const string s)
{
	int i;
	for (i=0; i<s.length(); i++)
	{
		char c = s[i];
		if (!isdigit(c)) return false;
	}
	return true;
}

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
    string response;
    char temp;
    bool validAnswer = false;

    while(validAnswer == false)
    {
	    try
	    {
	        cout << question << " (y/n): ";
	        getline(cin,response);

	        if (response != "y" && response != "n")
				throw notYesNo();
			
			// no exception thrown, we can break out of loop
			validAnswer = true;
	    } 
	    catch (notYesNo e)
	    {
		    cout << "\nPlease only enter 'y' or 'n'\n";
	    }
	}

	temp = response[0];
	
	return temp;
}

int Human::askNumber(string question)
{
    string response; // take response as a string, since it could be anything
    bool validAnswer = false;
    int temp;

    while(validAnswer == false)
    {
	    try
	    {
	        cout << question << "(0 to 8): ";
	        cin >> response;

	       	if (!isAllDigits(response))
			{
			  throw notDigit();
			}

			temp = atoi(response.c_str());	// Convert string to an integer
			if (temp < 0 || temp > 8)
			{
				throw outOfRange();
			}

			// no exception thrown, we can break out of loop
			validAnswer = true;
	    } 
		catch (notDigit e)
		{
			cout << "Please enter your text using digits only. Try again.\n";
		}
		catch (outOfRange e)
		{
			cout << "The number must be between 0 and 8.  Try again.\n";
		}
	}

    return temp; 
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


