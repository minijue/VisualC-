#pragma once
#include "Animal.h"
enum Color {RED,GREEN};

class Bird :
	public Animal
{
public:
	Bird();
	~Bird();

	Color color;

	void Fly() {
		cout << "Bird can fly" << endl;
	}

	void Run() {
		cout << "Bird is running" << endl;
	}
};

