#include "stdafx.h"
#include "Salesman.h"


Salesman::Salesman(string name, double sales) :Employee(name) {
	this->sales = sales;
}


Salesman::~Salesman() {}

void Salesman::pay() {
	salary = sales * commrate;
}
