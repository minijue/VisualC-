#include "stdafx.h"
#include "Technician.h"

Technician::Technician(string n, int hours) :Employee(n) {
	workhours = hours;
}

Technician::~Technician() {}

void Technician::pay() {
	salary = hourlyrate * workhours;
}
