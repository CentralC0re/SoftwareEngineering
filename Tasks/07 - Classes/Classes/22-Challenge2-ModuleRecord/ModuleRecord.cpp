#include "ModuleRecord.h"

ModuleRecord::ModuleRecord(string name, string area, unsigned int code, unsigned int credits, unsigned int semesters)
{
	modName = name;
	subArea = area;
	modCode = code;
	credSemester = credits;
	noSemesters = semesters;
}

ModuleRecord::ModuleRecord() // DO NOT USE
		//Default constructor because C++ wants it in 24 for some reason
{
	modName = "";
	subArea = "";
	modCode = 0;
	credSemester = 0;
	noSemesters = 0;
}

string ModuleRecord::ModuleSummary()
{
	string outString = modName + "\n" + subArea + " " + to_string(modCode) + "\n";	// Split to make more readable
	outString += to_string(noSemesters) + " sesmesters\n" = to_string(credSemester) + " credits per semester";
	return outString;
}

unsigned int ModuleRecord::TotalCredits()
{
	return credSemester * noSemesters;
}