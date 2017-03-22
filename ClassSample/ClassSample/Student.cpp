#include "stdafx.h"
#include "Student.h"

Student::Student()
{
}

Student::Student(string name, double normScore, double examScore)
{
	this->name = name;
	this->normScore = normScore;
	this->examScore = examScore;
}

Student::Student(string n) :name(n)
{

}

Student::~Student()
{
}

void Student::display() const
{
	double score = calScore();
	cout << this->name << "\t" << this->normScore << "\t"\
		<< score << endl;
}

double Student::rate = 0.5;

double Student::calScore() const
{
	return  normScore*rate + examScore*(1 - rate);
}

double avgScore(Student pa[], size_t n)
{
	double sum = 0.0;
	for (size_t i = 0; i < n; ++i)
	{
		sum += pa[i].calScore();
	}
	return sum / n;
}
