#pragma once
#include <iostream>
#include <string>
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

	bool operator==(const SDate& compareTo);
	friend bool operator!=(const SDate& s1, const SDate& s2);

	bool operator<(const SDate& compareTo);
	bool operator>(const SDate& compareTo);

	friend bool operator<=(const SDate& s1, const SDate& s2);
	friend bool operator>=(const SDate& s1, const SDate& s2);

	string operator[](unsigned int i);

	void DisplayDate();
};

