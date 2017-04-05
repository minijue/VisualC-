#include "stdafx.h"
#include "Employee.h"
#include <iostream>

Employee::Employee(string n) :name(n), no(totalno++) {
	
}

Employee::Employee(string name, double personal) : Employee(name)
{
	this->personal = personal;
}


Employee::~Employee() {}

void Employee::pay() {
	salary = baseSalary + personal * 0.5;
}

void Employee::display() const {
	cout << "name: " << name << "\t"
		<< "no: " << no << "\t"
		<< "salary: " << salary << endl;
}

unsigned int Employee::totalno = 0;

double yearlySalary(Employee &e) {
	return e.salary * 13;
}
