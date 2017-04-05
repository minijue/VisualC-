#pragma once
#include "Employee.h"
class Salesman :
	public Employee {
public:
	Salesman(string name, double sales);
	virtual ~Salesman();

	void pay() override;

protected:
	double sales{ 0.0 };
	double commrate{ 0.04 };
};

