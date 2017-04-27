#include "SDate.h"

int main() {
	SDate oneday(23, 1, 2016);
		
	++oneday;
	oneday.DisplayDate();

	oneday++;
	oneday.DisplayDate();

	--oneday;
	oneday.DisplayDate();

	oneday--;
	oneday.DisplayDate();

	SDate nextDay = oneday + 6;
	nextDay = 5 + oneday;
	nextDay.DisplayDate();

	cout << nextDay[7] << endl;

	system("pause");
	return 0;
} 