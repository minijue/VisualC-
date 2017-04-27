#pragma once
#include "Student.h"
class SchoolClass
{
public:
	SchoolClass();
	SchoolClass(unsigned int n);
	SchoolClass(const SchoolClass& sc);

	~SchoolClass();

	void inputStudents();
	void displayAll() const;

	SchoolClass& operator=(const SchoolClass& b);
	Student& operator[](int index);

private:
	unsigned int nCount{ 0 };
	Student *ps{ nullptr };
};
