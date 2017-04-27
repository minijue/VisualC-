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

SchoolClass & SchoolClass::operator=(const SchoolClass & b) {
	if (this != &b) {
		if (ps != nullptr) {
			delete[] ps;
			ps = nullptr;
		}

		nCount = b.nCount;
		ps = new Student[nCount];
		for (unsigned int i = 0; i < nCount; ++i) {
			ps[i] = b.ps[i];
		}
	}
	return *this;
}

Student & SchoolClass::operator[](int index) {
	if (ps != nullptr && index < nCount) {
		return ps[index];
	}
}

