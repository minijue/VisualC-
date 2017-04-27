#include "SDate.h"

SDate SDate::operator++()
{
	++Day;
	return *this;
}

SDate SDate::operator++(int)
{
	SDate copy(*this);
	++(this->Day);

	return copy;
}

SDate SDate::operator+(int x)
{
	return SDate(Day + x, Month, Year);
}

bool SDate::operator==(const SDate& s2)
{
	return ((Day == s2.Day) && (Month == s2.Month) && (Year&&s2.Year));
}

bool SDate::operator>(const SDate& s2)
{
	if (Year > s2.Year)
		return true;
	else if (Month > s2.Month)
		return true;
	else if (Day > s2.Day)
		return true;
	else
		return false;
}

std::string SDate::operator[](unsigned int i)
{
	string week;
	switch (i) {
	case 1: week = "Mon"; break;
	case 2: week = "Tue"; break;
	case 3: week = "Wed"; break;
	case 4: week = "Thu"; break;
	case 5: week = "Fri"; break;
	case 6: week = "Sat"; break;
	case 7: week = "Sun"; break;
	default:
		week = "unknown";
	}
	return week;
}

void SDate::DisplayDate()
{
	cout << Day << "/" << Month << "/" << Year << endl;
}

// 以下为全局函数
SDate operator--(SDate& s) {
	--s.Day;
	return s;
}

SDate operator--(SDate& s, int) {
	SDate copy(s);
	--s.Day;
	return copy;
}

SDate operator+(int x, const SDate& s) {
	return SDate(s.Day + x, s.Month, s.Year);
}

bool operator<(const SDate& s1, const SDate& s2) {
	if (s1.Year > s2.Year)
		return true;
	else if (s1.Month > s2.Month)
		return true;
	else if (s1.Day > s2.Day)
		return true;
	else
		return false;
}