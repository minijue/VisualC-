#pragma once
#include "Student.h"
class Class
{
public:
	Class();
	Class(unsigned int n);
	Class(const Class &c);

	void addStudents();
	void displayAll() const;

	~Class();
private:
	unsigned int nCount{ 0 };
	Student *pS{ nullptr };
};

