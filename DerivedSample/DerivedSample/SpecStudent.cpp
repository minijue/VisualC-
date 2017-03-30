#include "stdafx.h"
#include "SpecStudent.h"


SpecStudent::SpecStudent() :Student("new student", 60.0, 60.0),
aScore(0.0) {
	cout << "SpecStudent()" << endl;
}


SpecStudent::~SpecStudent() {
	cout << "~SpecStudent()" << endl;
}

void SpecStudent::display() const {
	double score = calScore();
	cout << name << "\t\t" << normScore << '\t' << 
		"+" << aScore << '\t' <<
		score << endl;
}

void SpecStudent::modifyAdditionalScore(double as) {
	aScore = as;
}

double SpecStudent::calScore() const {
	return normScore*rate + examScore*(1 - rate) + aScore;
}
