// DerivedSample.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Student.h"
#include "SpecStudent.h"

int main()
{
	SpecStudent s1;
	Student ss = s1;
	ss.display();

	Student &rs = s1;
	rs.display();

	Student *ps = &s1;
	ps->display();

// 	s1.modifyExamScore(80);
// 	s1.modifyAdditionalScore(20.0);
// 	s1.display();

// 	SpecStudent* ps = new SpecStudent;
// 	delete ps;

	system("pause");
    return 0;
}

