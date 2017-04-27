// MyDateTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "MyDate.h"

int main()
{
	MyDate m(2017,4,12);
	m.display();

	MyDate *p = new MyDate(2017, 4, 12);
	p->dayPass();
	delete p;

    return 0;
}

