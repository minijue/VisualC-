#include <iostream>
#include <vector>
#include <deque>
using namespace std;

// ��̬����vectorʾ��
int main() {
	int a[] = { 1,2,3,4,5,6,7,8,9 };
	// ����vector����
	vector<int> vecInts;	// ��vector
	vector<double> vecdbles(10);	// ��ʼ��СΪ10��vector
	vector<int> vecInts1(10, 90);	// ��ʼ��СΪ10��vector��ÿ��Ԫ�س�ʼ��Ϊ90
	vector<double> vecdbles1(vecdbles);

	vector<int> vecAry(a, a + 6);	// �������0~5��Ԫ�س�ʼ��һ��vector

	// ���±����vector
	for (size_t i = 0; i < vecAry.size(); ++i) {
		cout << vecAry[i] << ' ';
	}
	cout << endl;

	// ��β������Ԫ��
	vecdbles.push_back(3.14);
	vecdbles.push_back(2.56);
	vecdbles.push_back(8.09);

	// �õ���������vector
	for (vector<double>::const_iterator it = vecdbles.begin(); it != vecdbles.end(); ++it) {
		// ��������vector��������
		cout << *it << ' ';
	}
	cout << endl;

	// ɾ��ĩβԪ��
	vecAry.pop_back();
	for (vector<int>::const_iterator it = vecAry.cbegin(); it != vecAry.cend(); ++it) {
		cout << *it << ' ';
	}
	cout << endl;

	// ���м����Ԫ��
	vecAry.insert(vecAry.begin() + 3, 100);	// ��vector��ʼλ��+3�ĵط�����Ԫ��100
	for (vector<int>::const_iterator it = vecAry.cbegin(); it != vecAry.cend(); ++it) {
		cout << *it << ' ';
	}
	cout << endl;

	// ɾ���м�Ԫ��
	vecAry.erase(vecAry.begin() + 2);
	for (auto it = vecAry.cbegin(); it != vecAry.cend(); ++it) {
		cout << *it << ' ';
	}
	cout << endl;

	// deque�Ĳ�����vector������ͬ��������˫����У��������ڶ���ͷ�Ĳ���
	deque<int> d1(vecAry.cbegin(),vecAry.cend());
	d1.push_front(23);
	d1.push_front(12);
	d1.pop_front();
	// ʹ�÷���������������
	for (auto it = d1.crbegin(); it != d1.crend(); ++it) {
		cout << *it << "->";
	}
	cout << endl;


	system("pause");
	return 0;
}