#pragma once
#include "nlohmann/json.hpp"
#include <iostream>

class Graphic
{
public:
	virtual void draw() = 0; // print the drawing
	virtual void save(nlohmann::json &j) const = 0; // save the drawing to stream
	virtual void load(const nlohmann::json &j) = 0; // load in the drawing from stream
	virtual void to_json(nlohmann::json & j) const = 0;
	virtual void from_json(const nlohmann::json & j) = 0;
};