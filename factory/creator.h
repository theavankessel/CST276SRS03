#pragma once
#include "concreteProduct.h"

class Creator
{
public:
	virtual ConcreteProduct factoryMethod() = 0;
	void anOperation();

private:
	ConcreteProduct product; // ?????
};
