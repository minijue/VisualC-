#pragma once
#include "Fish.h"
class Tuna :
	public Fish
{
public:
	Tuna();
	~Tuna();

	virtual void Swim() override;

};

