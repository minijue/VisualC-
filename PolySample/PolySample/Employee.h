#pragma once
#include <string>
using namespace std;

class Employee {
	friend double yearlySalary(Employee &e);
public:
	Employee(string n);
	Employee(string name, double personal);
	virtual ~Employee();

	virtual void pay();
	virtual void display() const final;

protected:
	unsigned int no;
	string name;
	double salary{ 0.0 };

private:
	double baseSalary{ 5000.0 };
	double personal{ 0.0 };

	static unsigned int totalno;
};

