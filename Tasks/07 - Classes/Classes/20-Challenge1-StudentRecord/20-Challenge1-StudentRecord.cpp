#include <iostream>
#include "StudentRecord.h"
using namespace std;

int main()
{
    cout << "Challenge 1\n";
    StudentRecord student1("Les", "Leyton", 12345);
    student1.display();
	cout << student1.getFullName() << endl;
	cout << student1.getID() << endl;

	student1.updateFirstName("Jeff");
	student1.updateLastName("Jefferson");
	student1.display();
    //Test remaining member functions here
}
