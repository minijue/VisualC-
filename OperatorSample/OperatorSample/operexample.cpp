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

	system("pause");
	return 0;
}