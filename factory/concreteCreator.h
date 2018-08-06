#pragma once
#include "creator.h"

class ConcreteCreator : public Creator
{
	ConcreteProduct factoryMethod() override;
};