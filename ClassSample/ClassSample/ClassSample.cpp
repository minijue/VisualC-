// ClassSample.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Student.h"
#include "Class.h"

int main()
{
	Student *ps = new Student("zhang3", 60, 71);
	Student::rate = 0.3;
	ps->display();
	delete ps;

	Class c1(3);
	c1.addStudents();
	c1.displayAll();

	Class c2 = c1;
	c2.displayAll();

	system("pause");
    return 0;
}

