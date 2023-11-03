#include "ModuleRecord.h"

ModuleRecord::ModuleRecord(string name, string area, unsigned int code, unsigned int credits, unsigned int semesters)
{
	modName = name;
	subArea = area;
	modCode = code;
	credSemester = credits;
	noSemesters = semesters;
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