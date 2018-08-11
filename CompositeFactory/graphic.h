#pragma once
#include <iostream>

class Graphic
{
public:
	virtual void draw() = 0; // print the drawing
	virtual void save(std::ostream & stream) const = 0; // save the drawing to stream
	virtual void load(std::istream & stream) = 0; // load in the drawing from stream
};