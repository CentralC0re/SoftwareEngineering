// 22-Challenge2-ModuleRecord.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ModuleRecord.h"

int main()
{
	string modName = "Computer Science";
	string modArea = "COMP";
	unsigned int modCode = 1000;
	unsigned int modCreds = 20;
	unsigned int modSemest = 2;

	ModuleRecord newModule(modName, modArea, modCode, modCreds, modSemest);

	cout << newModule.ModuleSummary() << endl;
	cout << newModule.TotalCredits() << endl;
}
