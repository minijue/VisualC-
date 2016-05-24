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

	SDate operator++();
	SDate operator++(int);

	friend SDate operator--(SDate& s);
	friend SDate operator--(SDate& s, int);

	SDate operator+(int x);
	friend SDate operator+(int x, const SDate& s);

	bool operator==(const SDate& s2);
	bool operator>(const SDate& s2);
	friend bool operator<(const SDate& s1, const SDate& s2);

	string operator[](unsigned int i);

	void DisplayDate();
};

