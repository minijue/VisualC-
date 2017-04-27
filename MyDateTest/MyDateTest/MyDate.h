#pragma once
class MyDate {
public:
	MyDate(int y, int m, int d);
	~MyDate();

	void display() const;

	void setDate(int year, int month, int day);
	void dayPass();

protected:
	int year, month, day;
};

