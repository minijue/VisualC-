// STLSample.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<double> dvec = { 1.2, 4.67, 89.0, 99.10 };

	dvec.push_back(190.34);
	dvec.pop_back();

	dvec[2] = 18.24;
	for (size_t i = 0; i < dvec.size(); ++i) {
		cout << dvec[i] << endl;
	}

	for (double item : dvec) {
		cout << item << endl;
	}

	for each(double item in dvec) {
		cout << item << endl;
	}

	for (auto it = dvec.begin(); it != dvec.end(); ++it) {
		cout << *it << endl;
	}

	system("pause");
    return 0;
}

