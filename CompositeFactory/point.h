#pragma once
#include "nlohmann/json.hpp"
#include <iostream>

class Point
{
public:
	Point() = default;
	Point(int x, int y);
	int getX();
	int getY();
	void setX(int x);
	void setY(int y);

	friend void to_json(nlohmann::json& j, Point const& point); 
	friend void from_json(nlohmann::json const& j, Point& point);
	friend std::ostream& operator<<(std::ostream& os, const Point& point);

private:
	int x_ = 0;
	int y_ = 0;
};