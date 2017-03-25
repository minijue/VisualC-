#include "Student.h"
#include "SchoolClass.h"

int main() {
	Student s1("zhang3", 45, 88);
	s1.modifyExamScore(98);

	SchoolClass sc1(3);
	sc1.inputStudents();
	sc1.displayAll();
 
// 	SchoolClass sc2(sc1);
// 	sc2.displayAll();

	SchoolClass *p = new SchoolClass(sc1);
	p->displayAll();
	delete p;

	string ss[] = { "zhao","qian","sun","li" };
	for each (string s in ss)
	{
		cout << s << ' ';
	}
	cout << endl;
	for (string s : ss) {
		cout << s << ' ';
	}

	system("pause");
	return 0;
}