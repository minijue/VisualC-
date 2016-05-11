#pragma once
#include "Animal.h"
class Fish : public Animal
{
public:
	Fish();
	~Fish();

	float weight;

	void Swim() {
		cout << "Fish can swim" << endl;
	}

	void Run() {
		cout << "Fish is running" << endl;
	}
};

