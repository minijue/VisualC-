// newClassTest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Box.h"

int main()
{
	CBox box{ "wang5",3.5,7.7 };
	
	box = { "li4",7.6,2.2,9.0 };
	box = "zhang3";

	CBox cb;

	return 0;
}

