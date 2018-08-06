#include "stdafx.h"
#include "composite.h"

void Composite::operation()
{
	for (auto g : children_)
	{
		g->operation();
	}
}

void Composite::add(Component * component)
{
	children_.emplace_back(component);
}

void Composite::remove(Component * component)
{
	
}

Component * Composite::getChild(int child)
{
	return children_[child];
}
