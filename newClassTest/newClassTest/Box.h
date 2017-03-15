#pragma once
#include <iostream>
#include <string>
using namespace std;

class CBox
{
public:
	CBox(const char* nv, double lv=0.0, double wv=0.0, double hv=0.0) : name(nv),m_Length(lv), m_Width(wv), m_Height(hv) {
		cout << "Constructor called." << endl;
	}

	CBox() = default;
private:
	string name;
	double m_Length { 1.0 };
	double m_Width { 1.0 };
	double m_Height { 1.0 };	
};

