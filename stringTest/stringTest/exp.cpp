#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// string 的用法示例 2017-03-08
void stringTest() {
	char cstylestr[] = "Hello world!";	// C风格字符串
	const char* cstylestr1 = "This is a example.";

	// string 对象的创建与初始化
	string str0 = "Hello student.";
	string str1 = cstylestr;
	string str2(cstylestr);	// 写法与str1等价
	
	string str3(cstylestr, 5);	// 取cstylestr开始5个字符初始化str3
	cout << str3 << endl;

	string str4(cstylestr1, 5, 2);	// 从cstylestr1位置为5的字符开始，连续取2个字符初始化str4
	cout << str4 << endl;

	string str5(10, 'x');	// 初始化为连续的10个'x'

	// 字符串的拼接
	str5 = str0 + " I'm your teacher!\n";
	cout << str5;

	str3 += " Kitty.\n";
	cout << str3;

	// 字符串的查找
	size_t i = str2.find("orld");
	if (i != string::npos) {	// 未找到结果等于常量string::npos
		cout << "Found it, at " << i << endl;
	}

	// 删除子串
	str1.erase(2, 6);	// 从位置2的字符开始，连续删除6个字符
	cout << str1 << endl;

	// 提取子串
	str0 = str5.substr(6, 7); // 从位置6的字符开始，连续提取7个字符
	cout << str0 << endl;

	// 替换子串
	str0 = str5.replace(6, 7, "kids"); // 将从位置6的字符开始连续7个字符替换为"kids"
	cout << str0;

	// 字符串反转
	reverse(str1.begin(), str1.end());	// 参数为迭代器
	cout << str1 << endl;

	// 字符串转换为大写
	string str6(str0);
	// 把从str0.begin到str0.end之间的字符转换后放入str6
	transform(str0.begin(), str0.end(), str6.begin(), toupper/*转换为小写用tolower*/);	
	cout << str6;
}

int main() {
	stringTest();

	system("pause");
	return 0;
} 