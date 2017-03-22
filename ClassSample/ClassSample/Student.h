#pragma once
#include <string>
#include <iostream>
using namespace std;
class Student
{
	friend double avgScore(Student pa[], size_t n);
	friend class Class;
public:
	Student() {}
	explicit Student(string name, double normScore, double examScore);
	explicit Student(string n);
	
	~Student();

	void display() const;
	void newFunc();

	static double rate;
private:
	string name{""};
	double normScore{0.0};
	double examScore{0.0};

	double calScore() const;
};

double avgScore(Student pa[], size_t n);
