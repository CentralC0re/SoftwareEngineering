#pragma once
#include <iostream>
#include <string>
using namespace std;

class ModuleRecord
{
	string modName;
	string subArea = "COMP";
	unsigned int modCode;
	unsigned int credSemester = 20;
	unsigned int noSemesters = 1;

public:
	// Constructor
	ModuleRecord(string name, string area, unsigned int code, unsigned int credits, unsigned int semesters);
	
	string ModuleSummary();

	unsigned int TotalCredits();

};

