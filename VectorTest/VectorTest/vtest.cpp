#include <iostream>
#include <vector>
#include <deque>
using namespace std;

// 动态数组vector示例
int main() {
	int a[] = { 1,2,3,4,5,6,7,8,9 };
	// 创建vector对象
	vector<int> vecInts;	// 空vector
	vector<double> vecdbles(10);	// 初始大小为10的vector
	vector<int> vecInts1(10, 90);	// 初始大小为10的vector，每个元素初始化为90
	vector<double> vecdbles1(vecdbles);

	vector<int> vecAry(a, a + 6);	// 用数组第0~5个元素初始化一个vector

	// 用下标遍历vector
	for (size_t i = 0; i < vecAry.size(); ++i) {
		cout << vecAry[i] << ' ';
	}
	cout << endl;

	// 在尾部新增元素
	vecdbles.push_back(3.14);
	vecdbles.push_back(2.56);
	vecdbles.push_back(8.09);

	// 用迭代器遍历vector
	for (vector<double>::const_iterator it = vecdbles.begin(); it != vecdbles.end(); ++it) {
		// 迭代器是vector的子类型
		cout << *it << ' ';
	}
	cout << endl;

	// 删除末尾元素
	vecAry.pop_back();
	for (vector<int>::const_iterator it = vecAry.cbegin(); it != vecAry.cend(); ++it) {
		cout << *it << ' ';
	}
	cout << endl;

	// 在中间插入元素
	vecAry.insert(vecAry.begin() + 3, 100);	// 在vector开始位置+3的地方插入元素100
	for (vector<int>::const_iterator it = vecAry.cbegin(); it != vecAry.cend(); ++it) {
		cout << *it << ' ';
	}
	cout << endl;

	// 删除中间元素
	vecAry.erase(vecAry.begin() + 2);
	for (auto it = vecAry.cbegin(); it != vecAry.cend(); ++it) {
		cout << *it << ' ';
	}
	cout << endl;

	// deque的操作与vector几乎相同，由于是双向队列，增加了在队列头的操作
	deque<int> d1(vecAry.cbegin(),vecAry.cend());
	d1.push_front(23);
	d1.push_front(12);
	d1.pop_front();
	// 使用反向迭代器反向遍历
	for (auto it = d1.crbegin(); it != d1.crend(); ++it) {
		cout << *it << "->";
	}
	cout << endl;


	system("pause");
	return 0;
}