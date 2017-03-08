#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// string ���÷�ʾ�� 2017-03-08
void stringTest() {
	char cstylestr[] = "Hello world!";	// C����ַ���
	const char* cstylestr1 = "This is a example.";

	// string ����Ĵ������ʼ��
	string str0 = "Hello student.";
	string str1 = cstylestr;
	string str2(cstylestr);	// д����str1�ȼ�
	
	string str3(cstylestr, 5);	// ȡcstylestr��ʼ5���ַ���ʼ��str3
	cout << str3 << endl;

	string str4(cstylestr1, 5, 2);	// ��cstylestr1λ��Ϊ5���ַ���ʼ������ȡ2���ַ���ʼ��str4
	cout << str4 << endl;

	string str5(10, 'x');	// ��ʼ��Ϊ������10��'x'

	// �ַ�����ƴ��
	str5 = str0 + " I'm your teacher!\n";
	cout << str5;

	str3 += " Kitty.\n";
	cout << str3;

	// �ַ����Ĳ���
	size_t i = str2.find("orld");
	if (i != string::npos) {	// δ�ҵ�������ڳ���string::npos
		cout << "Found it, at " << i << endl;
	}

	// ɾ���Ӵ�
	str1.erase(2, 6);	// ��λ��2���ַ���ʼ������ɾ��6���ַ�
	cout << str1 << endl;

	// ��ȡ�Ӵ�
	str0 = str5.substr(6, 7); // ��λ��6���ַ���ʼ��������ȡ7���ַ�
	cout << str0 << endl;

	// �滻�Ӵ�
	str0 = str5.replace(6, 7, "kids"); // ����λ��6���ַ���ʼ����7���ַ��滻Ϊ"kids"
	cout << str0;

	// �ַ�����ת
	reverse(str1.begin(), str1.end());	// ����Ϊ������
	cout << str1 << endl;

	// �ַ���ת��Ϊ��д
	string str6(str0);
	// �Ѵ�str0.begin��str0.end֮����ַ�ת�������str6
	transform(str0.begin(), str0.end(), str6.begin(), toupper/*ת��ΪСд��tolower*/);	
	cout << str6;
}

int main() {
	stringTest();

	system("pause");
	return 0;
} 