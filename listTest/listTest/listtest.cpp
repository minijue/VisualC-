#include <list>
#include <forward_list>
#include <iostream>
using namespace std;

int main() {
	int a[] = { 3,8,12,0,87,5,102 };

	list<int> iList;
	iList.push_back(5);
	iList.push_back(7);
	iList.push_front(10);
	iList.push_front(34);
	for (int x : iList) {
		cout << x << ' ';
	}
	cout << endl;

	list<int> s(a, a + 7);
	for (auto it = s.cbegin(); it != s.cend(); ++it) {
		cout << *it << ' ';
	}
	cout << endl;
	
	auto iit = s.begin();
	for (int i = 0; i < 3; ++i)
		++iit;
	s.erase(iit);
	for (auto it = s.begin(); it != s.end(); ++it) {
		cout << *it << ' ';
	}
	cout << endl;
		
	s.sort();
	s.reverse();
	for (auto it = s.cbegin(); it != s.cend(); ++it) {
		cout << *it << ' ';
	}
	cout << endl;

	forward_list<int> f(s.cbegin(), s.cend());
	f.push_front(346);
	f.pop_front();

	auto sit = f.begin();
	for (int i = 0; i < 3; ++i)
		++sit;
	f.insert_after(sit, 900);
	f.erase_after(++sit);
	for (auto it = f.cbegin(); it != f.cend(); ++it) {
		cout << *it << ' ';
	}
	cout << endl;

//	f.reverse();
	f.sort();
	for (int y : f) {
		cout << y << ' ';
	}
	cout << endl;

	system("pause");
	return 0;
}