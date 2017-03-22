#include "stdafx.h"
#include "Class.h"


Class::Class()
{
}


Class::Class(unsigned int n) : nCount(n)
{
	if (n != 0)
		pS = new Student[n];
}

Class::Class(const Class &c)
{
	if (c.nCount == 0) return;

	nCount = c.nCount;
	pS = new Student[nCount];
	for (size_t i = 0; i < nCount; ++i)
	{
		pS[i] = c.pS[i];
	}
}

void Class::addStudents()
{
	if (pS == nullptr) return;

	for (size_t i = 0; i < nCount; ++i)
	{
		string name;
		double normScore;
		double examScore;
		cin >> name >> normScore >> examScore;
		pS[i].name = name;
		pS[i].normScore = normScore;
		pS[i].examScore = examScore;
	}
}

void Class::displayAll() const
{
	if (pS != nullptr) {
		for (size_t i = 0; i < nCount; ++i) {
			pS[i].display();
		}
	}
}

Class::~Class()
{
	if (pS != nullptr)
		delete[] pS;
}
