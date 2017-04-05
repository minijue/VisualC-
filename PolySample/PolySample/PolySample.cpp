// PolySample.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Manager.h"
#include "Salesman.h"
#include "Technician.h"

double yearlySalary(Employee & e);

int main() {
	Employee* em[3];
	em[0] = new Manager("Zhang3");
	em[1] = new Salesman("Li4", 250000.0);
	em[2] = new Technician("Wang5", 90);

	for (int i = 0; i < 3; ++i) {
		em[i]->pay();	// ��̬
		em[i]->display();
		yearlySalary(*em[i]);
		delete em[i];
	}

	system("pause");
	return 0;
}

