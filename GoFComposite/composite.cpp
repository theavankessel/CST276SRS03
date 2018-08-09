#include "stdafx.h"
#include <algorithm>
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
	children_.erase(std::remove(children_.begin(), children_.end(), component), children_.end());
}

Component * Composite::getChild(int child)
{
	return children_[child];
}
