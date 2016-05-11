#pragma once
#include <iostream>
using namespace std;

class Fish
{
public:
	Fish();
	virtual ~Fish();
	virtual void Swim()=0;
};

