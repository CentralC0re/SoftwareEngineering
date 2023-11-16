
// 24-Challenge3-YearRecord.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "YearRecord.h"

void StudentResult(int result);

int main()
{
    YearRecord myRecord(1, 2);  // Note: setting student number to anything greater than the true number
                                // causes a vector subscript error at StudentCheck
    ModuleRecord mod1("COMP", "Computing", 1000, 60, 2);
    myRecord.AddModule(mod1);

    StudentRecord stu1("Jim", "Jimley", 37);
    myRecord.AddStudent(stu1);

    StudentRecord stu2("James", "Jimley", 38);
    StudentResult(myRecord.StudentCheck(stu1));

    StudentResult(myRecord.StudentCheck(stu2));
   
}

void StudentResult(int result) {
    if (result == 1) {
        cout << "Found student\n";
    }
    else if (result == 0) {
        cout << "Could not find student\n";
    }
    else {
        cout << "Error finding student\n";
    }
}
