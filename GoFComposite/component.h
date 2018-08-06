#pragma once

class Component
{
public:
	virtual void operation() = 0;
	virtual void  add(Component * component) = 0;
	virtual void remove(Component * component) = 0;
	virtual Component * getChild(int child) = 0;
};