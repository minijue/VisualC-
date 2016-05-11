#pragma once
#include <iostream>
using namespace std;

class Animal
{
public:
	Animal(unsigned int inputage=20);
	~Animal();
	
	virtual void Run() {
		cout << "Animal is running" << endl;
	}

	void Run(int m) {
		cout << "Run " << m << "meters" << endl;
	}

protected:
	unsigned int age;
};

