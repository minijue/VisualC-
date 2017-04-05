#pragma once
#include "Employee.h"
class Technician :
	public Employee {
public:
	Technician(string n, int hours);
	virtual ~Technician();

	void pay() override;

protected:
	double hourlyrate{ 100.0 };
	unsigned int workhours{ 0 };
};

