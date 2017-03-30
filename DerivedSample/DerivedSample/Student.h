#pragma once
#include <string>
#include <iostream>
using namespace std;

class Student
{
	friend double avgScore(Student ss[], unsigned int n);
public:
	Student();
	Student(string name, double normScore, double examScore);
	Student(string n);
	~Student();
	
	void display() const;
	void modifyExamScore(int newScore);

protected:
	string name{ "" };
	double normScore{ 0.0 };
	double examScore{ 0.0 };

	double calScore() const;

	static double rate;
};

double avgScore(Student ss[], unsigned int n);