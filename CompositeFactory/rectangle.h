#pragma once
#include "graphic.h"
#include "point.h"
#include "nlohmann/json.hpp"

class Rectangle : public Graphic
{
	friend void to_json(nlohmann::json& j, Rectangle const& rectangle);
	friend void from_json(nlohmann::json const& j, Rectangle& rectangle);

public:
	Rectangle() = default;
	Rectangle(Point upperLeftPoint, double height, double width);
	void draw() override;
	void save(std::ostream & stream) const override;
	void load(std::istream & stream) override;

	double getHeight();
	double getWidth();
	void setHeight(double height);
	void setWidth(double width);

private:
	int Id = 1;
	Point upperLeftPoint_;
	double height_ = 0;
	double width_ = 0;	
	static auto constexpr upperLeftPointName_{ "upperLeftPoint" };
	static auto constexpr heightName_{ "height" };
	static auto constexpr widthName_{ "width" };
};