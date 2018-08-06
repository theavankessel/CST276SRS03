#pragma once
#include <vector>
#include "component.h"

class Composite : public Component
{
public:
	void operation() override;
	void add(Component * component) override;
	void remove(Component * component) override;
	Component * getChild(int child) override;

private:
	std::vector<Component*> children_;
};