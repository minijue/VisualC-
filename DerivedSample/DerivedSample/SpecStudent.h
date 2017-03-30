#pragma once
#include "Student.h"
class SpecStudent :
	public Student {
public:
	SpecStudent();
	~SpecStudent();

	void display() const; 
	void modifyAdditionalScore(double as);

protected:
	double aScore{ 0.0 };
	double calScore() const;
};

