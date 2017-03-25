// functionPointerTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
typedef double(*ProcessDelegate)(double, double);

double Multiply(double param1, double param2) {
	return param1 * param2;
}

double Divide(double param1, double param2) {
	return param1 / param2;
}


int main() {
	ProcessDelegate delegate;
	delegate = Multiply;
	double x = delegate(100, 20);

	return 0;
}

