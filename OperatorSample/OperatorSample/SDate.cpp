#include "SDate.h"


SDate& SDate::operator++()
{
	++Day;
	return *this;
}

SDate& SDate::operator--()
{
	--Day;
	return *this;
}

SDate SDate::operator+(int DaysToAdd)
{
	SDate newDate(Day + DaysToAdd, Month, Year);
	return newDate;
}

void SDate::DisplayDate()
{
	cout << Day << "/" << Month << "/" << Year << endl;
}

SDate operator++(SDate& s, int) {
	SDate Copy(s.Day, s.Month, s.Year);
	++s.Day;

	return Copy;
}

SDate operator--(SDate& s, int) {
	SDate Copy(s.Day, s.Month, s.Year);
	--s.Day;

	return Copy;
}

SDate operator-(SDate s, int DaysToSub) {
	return SDate(s.Day - DaysToSub, s.Month, s.Year);
}
