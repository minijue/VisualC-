#pragma once
#include <string>
using namespace std;

class Account {
	friend Account& operator++(Account& a);
	friend Account operator++(Account& a, int);
	friend Account operator+(const Account& a, const Account& b);
	friend Account operator+(const Account& a, double x);

	friend bool operator==(const Account& a, const Account& b);
public:
	Account(int ano, string aname);
	~Account();

	Account& operator--();
	Account operator--(int);

	Account operator-(const Account& b) const;
	Account operator-(double x) const;

	bool operator>(const Account& b) const;
	bool operator<(const Account& b) const;
private:
	int no;
	string name;
	double balance{ 0 };
};

Account& operator++(Account& a);
Account operator++(Account& a, int);

Account operator+(const Account& a, const Account& b);
Account operator+(const Account& a, double x);
Account operator+(double x, const Account& a);

bool operator==(const Account& a, const Account& b);
bool operator!=(const Account& a, const Account& b);