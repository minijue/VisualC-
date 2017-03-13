#pragma once
#include <iostream>
#include <string>
using namespace std;

class CBox
{
public:
	CBox(string nv, double lv, double wv=2.0, double hv=2.0) : name(nv),m_Length(lv), m_Width(wv), m_Height(hv) {
		cout << "Constructor called." << endl;
	}

	CBox() = default;
private:
	string name{ "zhang3" };
	double m_Length { 1.0 };
	double m_Width { 1.0 };
	double m_Height { 1.0 };	
};

