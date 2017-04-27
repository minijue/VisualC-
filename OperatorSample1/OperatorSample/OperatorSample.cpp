// OperatorSample.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Account.h"

int main()
{
	Account a1(2001, "zhang3");
	Account a2(2002, "li4");
	a1++;
	++a2;

	Account a3(2003, "wang5");
	a3 = a1 + a2;
	a1 = a1 + 100.0;
	a1 = 200.0 + a2;

	a2 = a1 - 20.5;

	if (a1 > a2) {

	} else if (a1 == a2) {

	} else {

	}

    return 0;
}

