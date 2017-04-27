#include "stdafx.h"
#include "Account.h"


Account::Account(int ano, string aname):no(ano),name(aname) {}


Account::~Account() {}

Account & Account::operator--() {
	--balance;
	return *this;
}

Account Account::operator--(int) {
	Account copy(*this);
	balance--;
	return copy;
}

Account Account::operator-(const Account & b) const {
	Account copy(*this);
	copy.balance -= b.balance;
	return copy;
}

Account Account::operator-(double x) const {
	Account copy(*this);
	copy.balance -= x;
	return copy;
}

bool Account::operator>(const Account & b) const {
	return balance > b.balance;
}

bool Account::operator<(const Account & b) const {
	return balance < b.balance;
}

Account & operator++(Account & a) {
	++a.balance;
	return a;
}

Account operator++(Account & a, int) {
	Account copy(a);
	(a.balance)++;
	return copy;
}

Account operator+(const Account & a, const Account & b) {
	Account c(a);
	c.balance += b.balance;

	return c;
}

Account operator+(const Account & a, double x) {
	Account copy(a);
	copy.balance += x;
	return copy;
}

Account operator+(double x, const Account & a) {
	return a + x;
}

bool operator==(const Account & a, const Account & b) {
	return a.balance == b.balance;
}

bool operator!=(const Account & a, const Account & b) {
	return !(a == b);
}
