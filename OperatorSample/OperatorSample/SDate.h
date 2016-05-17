#pragma once
#include <iostream>
using namespace std;
class SDate
{
private:
	int Day;
	int Month;
	int Year;
public:
	SDate(int InputDay, int InputMonth, int InputYear) :
		Day(InputDay), Month(InputMonth), Year(InputYear) {}
	~SDate() {}

	// 成员函数定义前置运算符
	SDate& operator++();
	SDate& operator--();

	// 友元函数定义后置运算符
	friend SDate operator++(SDate& s, int);
	friend SDate operator--(SDate& s, int);

	// 二元运算符定义为成员函数和友元函数时参数上有所不同
	SDate operator+(int DaysToAdd);
	friend SDate operator-(SDate s, int DaysToSub);

	void DisplayDate();
};

