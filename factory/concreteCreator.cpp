#include "stdafx.h"
#include "concreteCreator.h"

ConcreteProduct ConcreteCreator::factoryMethod()
{
	return *new ConcreteProduct;
}
