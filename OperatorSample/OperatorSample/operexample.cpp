#include "SDate.h"

int main() {
	SDate Holiday(25, 1, 2016);
	cout << "The data object is initiated to: ";
	Holiday.DisplayDate();

	++Holiday;
	Holiday++;

	cout << "Date after two increments is: ";
	Holiday.DisplayDate();

	--Holiday;
	Holiday--;

	cout << "Date after two decrements is: ";
	Holiday.DisplayDate();

	SDate PreviousHoliday(Holiday - 19);
	cout << "Previous holiday on: ";
	PreviousHoliday.DisplayDate();

	SDate NextHoliday(Holiday + 6);
	cout << "Next holiday on: ";
	NextHoliday.DisplayDate();

	if (Holiday == PreviousHoliday)
		cout << "Equality operator: The two are on the same day" << endl;
	else
		cout << "Equality operator: The two are on different day" << endl;

	if (Holiday != PreviousHoliday)
		cout << "Equality operator: The two are on different day" << endl;
	else
		cout << "Equality operator: The two are on the same day" << endl;

	if (Holiday < NextHoliday)
		cout << "operator<" << endl;

	if (Holiday > PreviousHoliday)
		cout << "operator>" << endl;

	if (PreviousHoliday <= NextHoliday)
		cout << "operator<=" << endl;

	if (NextHoliday >= PreviousHoliday)
		cout << "operator>=" << endl;

	cout << Holiday[11] << endl;

	system("pause");
	return 0;
} 