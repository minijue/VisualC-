#pragma once
#include "Employee.h"
class Manager :
	public Employee {
public:
	Manager(string name);
	virtual ~Manager();

	void pay() override;
};

