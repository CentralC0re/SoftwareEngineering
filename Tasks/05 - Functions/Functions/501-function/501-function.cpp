#include <iostream>
using namespace std;

int L = 0;		//This is not an ideal location - we will soon address this
			// L is global, meaning that it is accessible pretty much anywhere.

void displayBanner() 
{
	//Write the banner above
	for (unsigned int n = 0; n < (L + 4); n++) {	// The number of stars output are dependent on L, which is the length
		cout << "*";								// It adjusts to message length
	}
	cout << endl;
}


int main()
{
	const string message = "Welcome to Computer";
	
	//Get the length of the string
	L = message.length();

	displayBanner();

	cout << "* ";				//Leading *
	cout << message;			//Message
	cout << " *" << endl;		//Trailing *

	displayBanner();

	//Tell the calling shell all is well
	return 0;
}