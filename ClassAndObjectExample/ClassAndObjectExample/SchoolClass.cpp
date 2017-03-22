#include "SchoolClass.h"



SchoolClass::SchoolClass()
{
}

SchoolClass::SchoolClass(unsigned int n) : nCount(n)
{
	if (n > 0) {
		ps = new Student[n];
	}
}

SchoolClass::SchoolClass(const SchoolClass& sc)
{
	if (sc.nCount > 0) {
		this->nCount=sc.nCount;
		ps = new Student[nCount];
		for (size_t i = 0; i < nCount; ++i) {
			ps[i] = sc.ps[i];
		}
	}
}

SchoolClass::~SchoolClass()
{
	if (ps != nullptr)
		delete[] ps;
}

void SchoolClass::inputStudents()
{
	if (ps != nullptr) 	{
		for (size_t i = 0; i < nCount; ++i)		{
			cin >> ps[i].name >> ps[i].normScore >> ps[i].examScore;
		}
	}
}

void SchoolClass::displayAll() const
{
	if (ps != nullptr) 	{
		for (size_t i = 0; i < nCount; ++i)	{
			ps[i].display();
		}
	}
}
