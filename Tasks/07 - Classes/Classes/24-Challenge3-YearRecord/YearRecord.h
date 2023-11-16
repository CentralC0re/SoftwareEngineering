#pragma once
#include "..\20-Challenge1-StudentRecord\StudentRecord.h"
#include "..\22-Challenge2-ModuleRecord\ModuleRecord.h"
// std is present because of the #includes
#include <vector>

class YearRecord {
	unsigned int _studentNum;	// Impossible to have negative students
	unsigned int _numModules;
	
	// Note: An array cannot be created with unknown length.
	// As the storage must have things added, it should be a vector.
	vector<ModuleRecord> _modStore;
	vector<StudentRecord> _studentStore;

public:
	YearRecord(unsigned int studentNum, unsigned int numModules)
	{
		_studentNum = studentNum;
		_numModules = numModules;
	}

	void AddStudent(StudentRecord newStudent) {
		_studentStore.push_back(newStudent);
	}

	void AddModule(ModuleRecord newModule) {
		_modStore.push_back(newModule);
	}

	int StudentCheck(StudentRecord student) {
		try {
			for (unsigned int i = 0; i < _studentNum; i++) {
				StudentRecord result = _studentStore.at(i);
				if (result.getFullName() == student.getFullName() && result.getID() == student.getID()) {	// Bad, but result == student does not work.
					return 1;
				}
			}
		}
		catch (const std::exception &exc) {		// Being fancy and having 3 return codes.
			cout << exc.what();
			return -1;		// I said this was unnecessary, actually it is. Handles an exception if _studentNum > _studentStore size
		}
		return 0;
	}

};