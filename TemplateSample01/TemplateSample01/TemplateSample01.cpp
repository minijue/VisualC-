// TemplateSample01.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "NumsPair.h"
using namespace std;

template<typename T>
T max(T a, T b) {
	return a > b ? a : b;
}

template<typename T>
double average(T nums[], unsigned int n) {
	T sum = 0;
	for (unsigned int i = 0; i < n; ++i) {
		sum += nums[i];
	}
	return (double)sum / n;
}

int main() {
	double m = max<double>(100, 16.3 * 6.0);
	cout << m << endl;

	double dnums[] = { 3.4,5.6,11.2,9.07,18.9 };
	cout << average<>(dnums, 5) << endl;

	NumsPair<int, double> n1(100, 2.3);

	system("pause");
    return 0;
}

