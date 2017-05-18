// StreamSample.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

// 文本文件写入
bool writeStringToFile(string filename, string content, bool trunc = true) {
	ofstream file(filename, trunc ? ios_base::trunc : ios_base::app);
	if (file.is_open()) {
		file << content;
		file.close();
		return true;
	}
	return false;
}

// 文本文件读取
bool readStringFromFile(string filename, vector<string>& contents, bool byWord = false) {
	ifstream file(filename);
	if (file.is_open()) {
		while (file.good()) {
			if (byWord) {	// 按单词读取
				string s;
				file >> s;
				contents.push_back(s);
			}
			else {	// 按行读取
				char s[255];
				file.getline(s, 255);
				contents.push_back(string(s));
			}
		}
		file.close();
		return true;
	}
	return false;
}

// 二进制文件写入
template<typename T>
bool writeDataToFile(string filename, T data) {
	ofstream file(filename, ios_base::binary);
	if (file.is_open()) {
		file.write((char*)&data, sizeof(data));
		file.close();
		return true;
	}
	return false;
}

// 二进制文件读取
template<typename T>
bool readDataFromFile(string filename, T* pdata) {
	ifstream file(filename, ios_base::binary);
	if (file.is_open()) {		
		file.read((char*)pdata, sizeof(T));
		file.close();
		return true;
	}
	return false;
}

// 文件复制
bool copyFile(string file1, string file2) {
	fstream file;
	fstream ofile(file1.c_str(), ios_base::binary | ios_base::out);
	file.open(file2.c_str(), ios_base::binary | ios_base::in);
	if (file.is_open() && ofile.is_open()) {
		while (file.good()) {
			char c;
			file.read(&c, 1);
			ofile.write(&c, 1);
		}
		file.close();
		ofile.close();
		return true;
	}
	return false;
}
// 测试用于写入文件的类
class Student {
private:
	char name[20];
	unsigned int age{ 0 };
public:
	Student(string n, unsigned int a) : age(a) {
		strcpy_s(name, n.c_str());
	}
	Student() {};
	void showInfo() const { cout << name << ' ' << age << endl; }
};

int main() {
	writeStringToFile("d:\\test.txt", "hello world");
	writeStringToFile("d:\\test.txt", "\n文本文件内容写入", false);
	vector<string> lines;
	readStringFromFile("d:\\test.txt", lines);
	for each (string line in lines) {
		cout << line << endl;
	}

	Student s1("zhang3", 23);
	writeDataToFile("d:\\test.dat", s1);
	Student s2;
	readDataFromFile("d:\\test.dat", &s2);
	s2.showInfo();

	system("pause");
	return 0;
}
