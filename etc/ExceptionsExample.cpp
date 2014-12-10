

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

const int MAX = 10;

// Exception classes
class OutOfRange
{};

class NonDigits
{};


// Function Prototypes
bool isAllDigits(const string s);


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




int main()
{
  int histogram[MAX];
  int i, num, temp;
  string s;

  // Initialize histogram to all zero values
  for (i=0; i<MAX; i++)
  {
	  histogram[i] = 0;
  }

  cout << "Each number must be from 1-10. How many numbers to enter?" << endl;
  cin >> num;

  i = 0;
  while (i < num)
  {
	  // Input each number, throwing two possible exceptions based on
	  // error conditions
	  try
	  {
		  cout << "Enter number " << (i+1) << ":" << endl;
		  cin >> s;
		  if (!isAllDigits(s))
		  {
			  throw NonDigits();
		  }
		  temp = atoi(s.c_str());		// Convert string to an integer
		  if (temp<1 || temp>10)
		  {
				throw OutOfRange();
		  }
		  histogram[i]=temp;
		  i++;
	  }
	  catch (NonDigits e)
	  {
		  cout << "Please enter your text using digits only. Try again.\n";
	  }
	  catch (OutOfRange e)
	  {
		  cout << "The number must be between 1 and 10.  Try again." << endl;
	  }
  }

  // Show histogram
  cout << endl << "Here is the histogram:" << endl;
  for (i=0; i < num; i++)
  {
	cout << (i+1) << ": ";
	for (int j=0; j<histogram[i]; j++)
		cout << "*";
	cout << endl;
  }
  return 0;

  }