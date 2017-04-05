#include "stdafx.h"
#include "Manager.h"


Manager::Manager(string name) :Employee(name) {}


Manager::~Manager() {}

void Manager::pay() {
	salary = 8000.0;
}
