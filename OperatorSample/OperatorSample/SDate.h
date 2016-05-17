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

	// ��Ա��������ǰ�������
	SDate& operator++();
	SDate& operator--();

	// ��Ԫ����������������
	friend SDate operator++(SDate& s, int);
	friend SDate operator--(SDate& s, int);

	// ��Ԫ���������Ϊ��Ա��������Ԫ����ʱ������������ͬ
	SDate operator+(int DaysToAdd);
	friend SDate operator-(SDate s, int DaysToSub);

	void DisplayDate();
};

