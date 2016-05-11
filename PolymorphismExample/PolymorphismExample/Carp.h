#pragma once
#include "Fish.h"
class Carp :
	public Fish
{
public:
	Carp();
	~Carp();

	virtual void Swim() override;

};

