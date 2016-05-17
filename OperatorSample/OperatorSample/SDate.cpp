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

bool SDate::operator==(const SDate& compareTo)
{
	return ((Day == compareTo.Day) && (Month == compareTo.Month) && (Year == compareTo.Year));
}

bool SDate::operator<(const SDate& compareTo)
{
	if (Year < compareTo.Year)
		return true;
	else if (Month < compareTo.Month)
		return true;
	else if (Day < compareTo.Day)
		return true;
	else
		return false;
}

bool SDate::operator>(const SDate& compareTo)
{
	if (Year > compareTo.Year)
		return true;
	else if (Month > compareTo.Month)
		return true;
	else if (Day > compareTo.Day)
		return true;
	else
		return false;
}

std::string SDate::operator[](unsigned int i)
{
	string m = "none";
	switch (i)
	{
	case 1:m = "Jan"; break;
	case 2:m = "Feb"; break;
	case 3:m = "Mar"; break;
	case 4:m = "Apr"; break;
	case 5:m = "May"; break;
	case 6:m = "Jun"; break;
	case 7:m = "Jul"; break;
	case 8:m = "Aug"; break;
	case 9:m = "Sep"; break;
	case 10:m = "Oct"; break;
	case 11:m = "Nov"; break;
	case 12:m = "Dec"; break;
	default:
		break;
	}

	return m;
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

bool operator!=(const SDate& s1, const SDate& s2) {
	return !((s1.Day == s2.Day) && (s1.Month == s2.Month) && (s1.Year == s2.Year));
}

bool operator<=(const SDate& s1, const SDate& s2) {
	if (s1.Year <= s2.Year)
		return true;
	else if (s1.Month <= s2.Month)
		return true;
	else if (s1.Day <= s2.Day)
		return true;
	else
		return false;
}

bool operator>=(const SDate& s1, const SDate& s2) {
	if (s1.Year >= s2.Year)
		return true;
	else if (s1.Month >= s2.Month)
		return true;
	else if (s1.Day >= s2.Day)
		return true;
	else
		return false;
}
