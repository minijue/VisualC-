#include "stdafx.h"
#include "Student.h"

Student::Student() :Student("default")
{
}

Student::Student(string name, double normScore, double examScore)
{
	this->name = name;
	this->normScore = normScore;
	this->examScore = examScore;

	cout << "Student()" << endl;
}

Student::Student(string n) :name(n)
{
	cout << "Student()" << endl;
}

Student::~Student() {
	cout << "~Student()" << endl;
}

void Student::display() const
{
	double score = calScore();
	cout << name << "\t\t" << normScore << '\t' << score \
		<< endl;
}

void Student::modifyExamScore(int newScore)
{
	this->examScore = newScore;
}

double Student::calScore() const
{
	return normScore*rate + examScore*(1 - rate);
}

double Student::rate = 0.5;

double avgScore(Student ss[], unsigned int n)
{
	double sum = 0.0;
	for (size_t i=0;i<n;++i)
	{
		sum += ss[i].calScore();
	}
	return sum / n;
}
