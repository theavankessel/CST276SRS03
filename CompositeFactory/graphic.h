#pragma once

class Graphic
{
public:
	virtual void draw() = 0; // print the drawing
	virtual void save() = 0; // save the drawing to stream
	virtual void load() = 0; // load in the drawing from stream
};